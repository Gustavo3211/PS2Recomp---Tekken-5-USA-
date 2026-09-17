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

// Function: sub_00297DF0
// Address: 0x297df0 - 0x297e68
void sub_00297DF0_0x297df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297DF0_0x297df0");
#endif

    switch (ctx->pc) {
        case 0x297e0cu: goto label_297e0c;
        default: break;
    }

    ctx->pc = 0x297df0u;

    // 0x297df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297df4: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x297df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x297df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x297df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x297e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x297e04: 0xc0a5f46  jal         func_297D18
    ctx->pc = 0x297E04u;
    SET_GPR_U32(ctx, 31, 0x297E0Cu);
    ctx->pc = 0x297E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E04u;
    // 0x297e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D18u, 0x297E04u, 0x297E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E0Cu;
label_297e0c:
    // 0x297e0c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x297e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x297e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x297e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x297e14: 0x2484e360  addiu       $a0, $a0, -0x1CA0
    ctx->pc = 0x297e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959968));
    // 0x297e18: 0x2442bdb0  addiu       $v0, $v0, -0x4250
    ctx->pc = 0x297e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950320));
    // 0x297e1c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x297e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x297e20: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x297e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x297e24: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x297e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x297e28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297e2c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x297e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x297e30: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x297e34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297e38: 0x246374e8  addiu       $v1, $v1, 0x74E8
    ctx->pc = 0x297e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29928));
    // 0x297e3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x297e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x297e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297e48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x297e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297e4c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x297e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1774F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774F4u, _value); } while (0); }
    // 0x297e50: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x297e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1774ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774ECu, _value); } while (0); }
    // 0x297e54: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x297e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1774F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774F0u, _value); } while (0); }
    // 0x297e58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x297e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1774E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774E8u, _value); } while (0);
    // 0x297e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x297E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E5Cu;
        // 0x297e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E64u;
    // 0x297e64: 0x0  nop
    ctx->pc = 0x297e64u;
    // NOP
    ctx->pc = 0x297e68u;
}
