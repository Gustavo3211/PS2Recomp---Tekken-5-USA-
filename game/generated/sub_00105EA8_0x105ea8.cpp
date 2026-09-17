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

// Function: sub_00105EA8
// Address: 0x105ea8 - 0x105f70
void sub_00105EA8_0x105ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105EA8_0x105ea8");
#endif

    switch (ctx->pc) {
        case 0x105ec4u: goto label_105ec4;
        case 0x105ed8u: goto label_105ed8;
        case 0x105efcu: goto label_105efc;
        case 0x105f04u: goto label_105f04;
        case 0x105f54u: goto label_105f54;
        default: break;
    }

    ctx->pc = 0x105ea8u;

    // 0x105ea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x105eac: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x105eb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x105eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x105eb4: 0x24a5d950  addiu       $a1, $a1, -0x26B0
    ctx->pc = 0x105eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957392));
    // 0x105eb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x105eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x105ebc: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x105EBCu;
    SET_GPR_U32(ctx, 31, 0x105EC4u);
    ctx->pc = 0x105EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EBCu;
    // 0x105ec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x105EBCu, 0x105EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EC4u;
label_105ec4:
    // 0x105ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105ec8: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x105ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x105ecc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x105eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x105ed0: 0xc041186  jal         func_104618
    ctx->pc = 0x105ED0u;
    SET_GPR_U32(ctx, 31, 0x105ED8u);
    ctx->pc = 0x105ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105ED0u;
    // 0x105ed4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105ED0u, 0x105ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ED8u;
label_105ed8:
    // 0x105ed8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105edc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x105edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x105ee0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x105ee4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x105ee8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x105ee8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x105eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105ef0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x105ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x105ef4: 0xc041186  jal         func_104618
    ctx->pc = 0x105EF4u;
    SET_GPR_U32(ctx, 31, 0x105EFCu);
    ctx->pc = 0x105EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EF4u;
    // 0x105ef8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105EF4u, 0x105EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EFCu;
label_105efc:
    // 0x105efc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x105EFCu;
    SET_GPR_U32(ctx, 31, 0x105F04u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x105EFCu, 0x105F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F04u;
label_105f04:
    // 0x105f04: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x105f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x105f08: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x105f0c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x105f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x105f10: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x105f10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x105f14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x105f14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105f18: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x105f18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x105f1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105f20: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x105f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x105f24: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x105f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x105f28: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x105f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x105f2c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x105f2cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x105f30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x105f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x105f34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x105f34u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x105f38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x105f38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105f3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x105f40: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x105f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x105f44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F44u;
    {
        const bool branch_taken_0x105f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F44u;
        // 0x105f48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f44) {
            ctx->pc = 0x105F58u;
            goto label_105f58;
        }
    }
    ctx->pc = 0x105F4Cu;
    // 0x105f4c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105F4Cu;
    SET_GPR_U32(ctx, 31, 0x105F54u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105F4Cu, 0x105F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F54u;
label_105f54:
    // 0x105f54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105f58:
    // 0x105f58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x105f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105f5c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105f60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x105f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105f64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x105f64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x105f68: 0x3e00008  jr          $ra
    ctx->pc = 0x105F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F68u;
        // 0x105f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F70u;
}
