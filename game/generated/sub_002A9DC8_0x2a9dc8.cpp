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

// Function: sub_002A9DC8
// Address: 0x2a9dc8 - 0x2a9e80
void sub_002A9DC8_0x2a9dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9DC8_0x2a9dc8");
#endif

    switch (ctx->pc) {
        case 0x2a9e44u: goto label_2a9e44;
        case 0x2a9e50u: goto label_2a9e50;
        case 0x2a9e5cu: goto label_2a9e5c;
        case 0x2a9e68u: goto label_2a9e68;
        default: break;
    }

    ctx->pc = 0x2a9dc8u;

    // 0x2a9dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a9dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dcc: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2a9dd0: 0x22602  srl         $a0, $v0, 24
    ctx->pc = 0x2a9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2a9dd4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9dd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9dd8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9ddc: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2a9ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2a9de0: 0x23202  srl         $a2, $v0, 8
    ctx->pc = 0x2a9de0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a9de4: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x2a9de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x2a9de8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9dec: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2a9decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2a9df0: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x2a9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a9df4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a9df8: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x2a9df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x2a9dfc: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x2a9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x2a9e00: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2a9e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a9e04: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a9e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a9e08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a9e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a9e0c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a9e10: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2a9e10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2a9e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a9e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a9e18: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x2a9e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2a9e1c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2a9e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2a9e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E20u;
        // 0x2a9e24: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E28u;
    // 0x2a9e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e34: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2a9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9e38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a9e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a9e3c: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2A9E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E44u);
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2A9E3Cu, 0x2A9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E44u;
label_2a9e44:
    // 0x2a9e44: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2a9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9e48: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2A9E48u;
    SET_GPR_U32(ctx, 31, 0x2A9E50u);
    ctx->pc = 0x2A9E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E48u;
    // 0x2a9e4c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2A9E48u, 0x2A9E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E50u;
label_2a9e50:
    // 0x2a9e50: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x2a9e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9e54: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2A9E54u;
    SET_GPR_U32(ctx, 31, 0x2A9E5Cu);
    ctx->pc = 0x2A9E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E54u;
    // 0x2a9e58: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2A9E54u, 0x2A9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E5Cu;
label_2a9e5c:
    // 0x2a9e5c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2a9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9e60: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2A9E60u;
    SET_GPR_U32(ctx, 31, 0x2A9E68u);
    ctx->pc = 0x2A9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E60u;
    // 0x2a9e64: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2A9E60u, 0x2A9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E68u;
label_2a9e68:
    // 0x2a9e68: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a9e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2a9e6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a9e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E74u;
        // 0x2a9e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E7Cu;
    // 0x2a9e7c: 0x0  nop
    ctx->pc = 0x2a9e7cu;
    // NOP
    ctx->pc = 0x2a9e80u;
}
