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

// Function: sub_0010B168
// Address: 0x10b168 - 0x10b1e0
void sub_0010B168_0x10b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B168_0x10b168");
#endif

    switch (ctx->pc) {
        case 0x10b17cu: goto label_10b17c;
        default: break;
    }

    ctx->pc = 0x10b168u;

    // 0x10b168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b174: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10B174u;
    SET_GPR_U32(ctx, 31, 0x10B17Cu);
    ctx->pc = 0x10B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B174u;
    // 0x10b178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10B174u, 0x10B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B17Cu;
label_10b17c:
    // 0x10b17c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b180: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b184: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b188: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10b18c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10b190: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10b190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10b194: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b198: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10b19c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b1a0: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10b1a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b1a4u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10b1a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10b1ac: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10b1acu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x10b1b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10b1b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10b1b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B1BCu;
    {
        const bool branch_taken_0x10b1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1BCu;
        // 0x10b1c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1bc) {
            ctx->pc = 0x10B1D0u;
            goto label_10b1d0;
        }
    }
    ctx->pc = 0x10B1C4u;
    // 0x10b1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1c8: 0x804627e  j           func_1189F8
    ctx->pc = 0x10B1C8u;
    ctx->pc = 0x10B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1C8u;
    // 0x10b1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B1D0u;
label_10b1d0:
    // 0x10b1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1D4u;
        // 0x10b1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1DCu;
    // 0x10b1dc: 0x0  nop
    ctx->pc = 0x10b1dcu;
    // NOP
    ctx->pc = 0x10b1e0u;
}
