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

// Function: sub_00226240
// Address: 0x226240 - 0x2262f8
void sub_00226240_0x226240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226240_0x226240");
#endif

    switch (ctx->pc) {
        case 0x226260u: goto label_226260;
        case 0x226278u: goto label_226278;
        case 0x226294u: goto label_226294;
        case 0x2262a4u: goto label_2262a4;
        case 0x2262e0u: goto label_2262e0;
        case 0x2262e8u: goto label_2262e8;
        default: break;
    }

    ctx->pc = 0x226240u;

    // 0x226240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22624c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22624cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226250: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226250u;
    {
        const bool branch_taken_0x226250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x226254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226250u;
        // 0x226254: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226250) {
            ctx->pc = 0x226278u;
            goto label_226278;
        }
    }
    ctx->pc = 0x226258u;
    // 0x226258: 0xc08b890  jal         func_22E240
    ctx->pc = 0x226258u;
    SET_GPR_U32(ctx, 31, 0x226260u);
    ctx->pc = 0x22E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E240u, 0x226258u, 0x226260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226260u;
label_226260:
    // 0x226260: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226264: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226268: 0x24847348  addiu       $a0, $a0, 0x7348
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29512));
    // 0x22626c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226270: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x226270u;
    SET_GPR_U32(ctx, 31, 0x226278u);
    ctx->pc = 0x226274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226270u;
    // 0x226274: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x226270u, 0x226278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226278u;
label_226278:
    // 0x226278: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22627c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226280: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226284: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x226288: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22628c: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x22628Cu;
    SET_GPR_U32(ctx, 31, 0x226294u);
    ctx->pc = 0x226290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22628Cu;
    // 0x226290: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x22628Cu, 0x226294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226294u;
label_226294:
    // 0x226294: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x226298: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22629c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22629Cu;
    SET_GPR_U32(ctx, 31, 0x2262A4u);
    ctx->pc = 0x2262A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22629Cu;
    // 0x2262a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22629Cu, 0x2262A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262A4u;
label_2262a4:
    // 0x2262a4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2262a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2262ac: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2262b0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2262b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2262B4u;
    {
        const bool branch_taken_0x2262b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262b4) {
            ctx->pc = 0x2262B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2262B4u;
            // 0x2262b8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2262D0u;
            goto label_2262d0;
        }
    }
    ctx->pc = 0x2262BCu;
    // 0x2262bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2262bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2262c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2262c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2262c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2262C4u;
    {
        const bool branch_taken_0x2262c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2262c4) {
            ctx->pc = 0x2262D8u;
            goto label_2262d8;
        }
    }
    ctx->pc = 0x2262CCu;
    // 0x2262cc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2262ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2262d0:
    // 0x2262d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2262d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2262d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2262d8:
    // 0x2262d8: 0xc0b8bc2  jal         func_2E2F08
    ctx->pc = 0x2262D8u;
    SET_GPR_U32(ctx, 31, 0x2262E0u);
    ctx->pc = 0x2E2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2F08u, 0x2262D8u, 0x2262E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262E0u;
label_2262e0:
    // 0x2262e0: 0xc089918  jal         func_226460
    ctx->pc = 0x2262E0u;
    SET_GPR_U32(ctx, 31, 0x2262E8u);
    ctx->pc = 0x2262E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262E0u;
    // 0x2262e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226460u, 0x2262E0u, 0x2262E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262E8u;
label_2262e8:
    // 0x2262e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2262e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2262ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2262f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2262F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262F0u;
        // 0x2262f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2262F8u;
}
