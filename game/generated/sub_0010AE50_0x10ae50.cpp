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

// Function: sub_0010AE50
// Address: 0x10ae50 - 0x10aec8
void sub_0010AE50_0x10ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AE50_0x10ae50");
#endif

    switch (ctx->pc) {
        case 0x10ae64u: goto label_10ae64;
        default: break;
    }

    ctx->pc = 0x10ae50u;

    // 0x10ae50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ae54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ae58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ae5c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10AE5Cu;
    SET_GPR_U32(ctx, 31, 0x10AE64u);
    ctx->pc = 0x10AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE5Cu;
    // 0x10ae60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10AE5Cu, 0x10AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE64u;
label_10ae64:
    // 0x10ae64: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae68: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae6c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10ae6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10ae70: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10ae74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10ae78: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10ae78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10ae7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae80: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10ae84: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10ae88: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10ae88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10ae8c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10ae8cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10ae90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10ae94: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10ae94u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x10ae98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10ae9c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10ae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10aea0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10aea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AEA4u;
    {
        const bool branch_taken_0x10aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEA4u;
        // 0x10aea8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aea4) {
            ctx->pc = 0x10AEB8u;
            goto label_10aeb8;
        }
    }
    ctx->pc = 0x10AEACu;
    // 0x10aeac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aeacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aeb0: 0x804627e  j           func_1189F8
    ctx->pc = 0x10AEB0u;
    ctx->pc = 0x10AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEB0u;
    // 0x10aeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10AEB8u;
label_10aeb8:
    // 0x10aeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aebc: 0x3e00008  jr          $ra
    ctx->pc = 0x10AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEBCu;
        // 0x10aec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AEC4u;
    // 0x10aec4: 0x0  nop
    ctx->pc = 0x10aec4u;
    // NOP
    ctx->pc = 0x10aec8u;
}
