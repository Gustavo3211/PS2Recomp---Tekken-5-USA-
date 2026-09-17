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

// Function: sub_00362240
// Address: 0x362240 - 0x3622d0
void sub_00362240_0x362240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362240_0x362240");
#endif

    switch (ctx->pc) {
        case 0x36226cu: goto label_36226c;
        case 0x3622b4u: goto label_3622b4;
        default: break;
    }

    ctx->pc = 0x362240u;

    // 0x362240: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x362240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362244: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x362248: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x362248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x36224c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x362250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x362250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362254: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x362254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362258: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362258u;
    {
        const bool branch_taken_0x362258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362258u;
        // 0x36225c: 0x28660018  slti        $a2, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362258) {
            ctx->pc = 0x362278u;
            goto label_362278;
        }
    }
    ctx->pc = 0x362260u;
    // 0x362260: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362264: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362264u;
    SET_GPR_U32(ctx, 31, 0x36226Cu);
    ctx->pc = 0x362268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362264u;
    // 0x362268: 0x24847278  addiu       $a0, $a0, 0x7278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362264u, 0x36226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36226Cu;
label_36226c:
    // 0x36226c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36226Cu;
    {
        const bool branch_taken_0x36226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36226Cu;
        // 0x362270: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36226c) {
            ctx->pc = 0x3622C4u;
            goto label_3622c4;
        }
    }
    ctx->pc = 0x362274u;
    // 0x362274: 0x0  nop
    ctx->pc = 0x362274u;
    // NOP
label_362278:
    // 0x362278: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x362278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36227c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x36227Cu;
    {
        const bool branch_taken_0x36227c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x362280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36227Cu;
        // 0x362280: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36227c) {
            ctx->pc = 0x362298u;
            goto label_362298;
        }
    }
    ctx->pc = 0x362284u;
    // 0x362284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362288: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x362288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36228c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x36228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x362290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x362290u;
    {
        const bool branch_taken_0x362290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362290u;
        // 0x362294: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362290) {
            ctx->pc = 0x3622ACu;
            goto label_3622ac;
        }
    }
    ctx->pc = 0x362298u;
label_362298:
    // 0x362298: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x362298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x36229c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3622a0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3622a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3622a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3622a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3622a8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3622a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3622ac:
    // 0x3622ac: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x3622ACu;
    SET_GPR_U32(ctx, 31, 0x3622B4u);
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x3622ACu, 0x3622B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622B4u;
label_3622b4:
    // 0x3622b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3622b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3622b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3622b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3622bc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3622bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3622c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3622c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3622c4:
    // 0x3622c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3622c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3622c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3622C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3622CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622C8u;
        // 0x3622cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3622C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3622D0u;
}
