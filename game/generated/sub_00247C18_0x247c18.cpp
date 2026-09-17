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

// Function: sub_00247C18
// Address: 0x247c18 - 0x247c80
void sub_00247C18_0x247c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247C18_0x247c18");
#endif

    switch (ctx->pc) {
        case 0x247c3cu: goto label_247c3c;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c68u: goto label_247c68;
        default: break;
    }

    ctx->pc = 0x247c18u;

    // 0x247c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247c28: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x247c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x247c2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247c30: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x247c34: 0xc091c3c  jal         func_2470F0
    ctx->pc = 0x247C34u;
    SET_GPR_U32(ctx, 31, 0x247C3Cu);
    ctx->pc = 0x247C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C34u;
    // 0x247c38: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2470F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470F0u, 0x247C34u, 0x247C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C3Cu;
label_247c3c:
    // 0x247c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c44: 0xc092990  jal         func_24A640
    ctx->pc = 0x247C44u;
    SET_GPR_U32(ctx, 31, 0x247C4Cu);
    ctx->pc = 0x247C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C44u;
    // 0x247c48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A640u, 0x247C44u, 0x247C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C4Cu;
label_247c4c:
    // 0x247c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c50: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x247c54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247c58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247C58u;
    {
        const bool branch_taken_0x247c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C58u;
        // 0x247c5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c58) {
            ctx->pc = 0x247C68u;
            goto label_247c68;
        }
    }
    ctx->pc = 0x247C60u;
    // 0x247c60: 0xc092912  jal         func_24A448
    ctx->pc = 0x247C60u;
    SET_GPR_U32(ctx, 31, 0x247C68u);
    ctx->pc = 0x24A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A448u, 0x247C60u, 0x247C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C68u;
label_247c68:
    // 0x247c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c74: 0x3e00008  jr          $ra
    ctx->pc = 0x247C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C74u;
        // 0x247c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247C7Cu;
    // 0x247c7c: 0x0  nop
    ctx->pc = 0x247c7cu;
    // NOP
    ctx->pc = 0x247c80u;
}
