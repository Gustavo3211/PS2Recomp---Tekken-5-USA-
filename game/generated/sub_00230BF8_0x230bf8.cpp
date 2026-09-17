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

// Function: sub_00230BF8
// Address: 0x230bf8 - 0x230c60
void sub_00230BF8_0x230bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230BF8_0x230bf8");
#endif

    switch (ctx->pc) {
        case 0x230c1cu: goto label_230c1c;
        case 0x230c50u: goto label_230c50;
        default: break;
    }

    ctx->pc = 0x230bf8u;

    // 0x230bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230c08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x230c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c0c: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x230C0Cu;
    {
        const bool branch_taken_0x230c0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x230C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C0Cu;
        // 0x230c10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c0c) {
            ctx->pc = 0x230C44u;
            goto label_230c44;
        }
    }
    ctx->pc = 0x230C14u;
    // 0x230c14: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x230C14u;
    SET_GPR_U32(ctx, 31, 0x230C1Cu);
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x230C14u, 0x230C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C1Cu;
label_230c1c:
    // 0x230c1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230c20: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230C20u;
    {
        const bool branch_taken_0x230c20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x230C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C20u;
        // 0x230c24: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c20) {
            ctx->pc = 0x230C44u;
            goto label_230c44;
        }
    }
    ctx->pc = 0x230C28u;
    // 0x230c28: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x230C28u;
    {
        const bool branch_taken_0x230c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230c28) {
            ctx->pc = 0x230C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C28u;
            // 0x230c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C48u;
            goto label_230c48;
        }
    }
    ctx->pc = 0x230C30u;
    // 0x230c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230c34: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230C34u;
    {
        const bool branch_taken_0x230c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x230c34) {
            ctx->pc = 0x230C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C34u;
            // 0x230c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C48u;
            goto label_230c48;
        }
    }
    ctx->pc = 0x230C3Cu;
    // 0x230c3c: 0x2041026  xor         $v0, $s0, $a0
    ctx->pc = 0x230c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    // 0x230c40: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x230c40u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230c44:
    // 0x230c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c48:
    // 0x230c48: 0xc08c2c8  jal         func_230B20
    ctx->pc = 0x230C48u;
    SET_GPR_U32(ctx, 31, 0x230C50u);
    ctx->pc = 0x230C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C48u;
    // 0x230c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B20u, 0x230C48u, 0x230C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C50u;
label_230c50:
    // 0x230c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x230C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230C64u;
}
