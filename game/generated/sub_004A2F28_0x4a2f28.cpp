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

// Function: sub_004A2F28
// Address: 0x4a2f28 - 0x4a3008
void sub_004A2F28_0x4a2f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2F28_0x4a2f28");
#endif

    switch (ctx->pc) {
        case 0x4a2f38u: goto label_4a2f38;
        case 0x4a2f50u: goto label_4a2f50;
        case 0x4a2f58u: goto label_4a2f58;
        default: break;
    }

    ctx->pc = 0x4a2f28u;

    // 0x4a2f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a2f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a2f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a2f30: 0xc124620  jal         func_491880
    ctx->pc = 0x4A2F30u;
    SET_GPR_U32(ctx, 31, 0x4A2F38u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A2F30u, 0x4A2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F38u;
label_4a2f38:
    // 0x4a2f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2f3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a2f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a2f40: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4a2f40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a2f44: 0xa423e820  sh          $v1, -0x17E0($at)
    ctx->pc = 0x4a2f44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2f48: 0xc124910  jal         func_492440
    ctx->pc = 0x4A2F48u;
    SET_GPR_U32(ctx, 31, 0x4A2F50u);
    ctx->pc = 0x4A2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F48u;
    // 0x4a2f4c: 0x3c040003  lui         $a0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A2F48u, 0x4A2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F50u;
label_4a2f50:
    // 0x4a2f50: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A2F50u;
    SET_GPR_U32(ctx, 31, 0x4A2F58u);
    ctx->pc = 0x4A2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2F50u;
    // 0x4a2f54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A2F50u, 0x4A2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2F58u;
label_4a2f58:
    // 0x4a2f58: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x4a2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x4a2f5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f60: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a2f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a2f64: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x4a2f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4a2f68: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a2f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2f6c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4a2f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2f70: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x4a2f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x4a2f74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a2f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a2f78: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a2f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2f7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f80: 0x34a5000f  ori         $a1, $a1, 0xF
    ctx->pc = 0x4a2f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
    // 0x4a2f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2f88: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x4a2f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x4a2f8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f90: 0xa4480148  sh          $t0, 0x148($v0)
    ctx->pc = 0x4a2f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a2f94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2f98: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a2f9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2fa0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a2fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a2fa4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a2fa8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a2fac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a2facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2fb0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a2fb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a2fbc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a2fc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a2fc4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2fc8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a2fcc: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4a2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4a2fd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2fd4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a2fd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a2fd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2fdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a2fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a2fe0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a2fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a2fe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a2fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a2fe8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a2fec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2ff0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x4a2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4a2ff4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a2ff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2ff8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a2ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FFCu;
        // 0x4a3000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3004u;
    // 0x4a3004: 0x0  nop
    ctx->pc = 0x4a3004u;
    // NOP
    ctx->pc = 0x4a3008u;
}
