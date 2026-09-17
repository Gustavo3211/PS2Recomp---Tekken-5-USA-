#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304250
// Address: 0x304250 - 0x3042c0
void sub_00304250_0x304250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304250_0x304250");
#endif

    switch (ctx->pc) {
        case 0x304278u: goto label_304278;
        case 0x304294u: goto label_304294;
        case 0x3042acu: goto label_3042ac;
        default: break;
    }

    ctx->pc = 0x304250u;

    // 0x304250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x304258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30425c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304264: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x304264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304268: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304268u;
    {
        const bool branch_taken_0x304268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304268u;
        // 0x30426c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304268) {
            ctx->pc = 0x304280u;
            goto label_304280;
        }
    }
    ctx->pc = 0x304270u;
    // 0x304270: 0xc0c8dd4  jal         func_323750
    ctx->pc = 0x304270u;
    SET_GPR_U32(ctx, 31, 0x304278u);
    ctx->pc = 0x323750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323750u, 0x304270u, 0x304278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304278u;
label_304278:
    // 0x304278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304278u;
    {
        const bool branch_taken_0x304278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304278u;
        // 0x30427c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304278) {
            ctx->pc = 0x304298u;
            goto label_304298;
        }
    }
    ctx->pc = 0x304280u;
label_304280:
    // 0x304280: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x304280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x304284: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304284u;
    {
        const bool branch_taken_0x304284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x304288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304284u;
        // 0x304288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304284) {
            ctx->pc = 0x304294u;
            goto label_304294;
        }
    }
    ctx->pc = 0x30428Cu;
    // 0x30428c: 0xc0c8dca  jal         func_323728
    ctx->pc = 0x30428Cu;
    SET_GPR_U32(ctx, 31, 0x304294u);
    ctx->pc = 0x323728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323728u, 0x30428Cu, 0x304294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304294u;
label_304294:
    // 0x304294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304298:
    // 0x304298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x304298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x30429c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x30429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3042a0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3042a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3042a4: 0xc0beeb6  jal         func_2FBAD8
    ctx->pc = 0x3042A4u;
    SET_GPR_U32(ctx, 31, 0x3042ACu);
    ctx->pc = 0x3042A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042A4u;
    // 0x3042a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBAD8u, 0x3042A4u, 0x3042ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042ACu;
label_3042ac:
    // 0x3042ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3042acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3042b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3042b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3042b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3042B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3042B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042B4u;
        // 0x3042b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3042B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3042BCu;
    // 0x3042bc: 0x0  nop
    ctx->pc = 0x3042bcu;
    // NOP
    ctx->pc = 0x3042c0u;
}
