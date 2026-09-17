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

// Function: sub_00240D10
// Address: 0x240d10 - 0x240d98
void sub_00240D10_0x240d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240D10_0x240d10");
#endif

    switch (ctx->pc) {
        case 0x240d74u: goto label_240d74;
        case 0x240d7cu: goto label_240d7c;
        default: break;
    }

    ctx->pc = 0x240d10u;

    // 0x240d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240d14: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x240d18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x240d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x240d1c: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x240d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x240d20: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x240d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x240d24: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x240d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x240d28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x240d2c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x240d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x240d30: 0x261036c0  addiu       $s0, $s0, 0x36C0
    ctx->pc = 0x240d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14016));
    // 0x240d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d38: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x240d38u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x470518u));
    // 0x240d3c: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x240d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x240d40: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x240d40u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x470510u));
    // 0x240d44: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x240d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x240d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d4c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x240d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x240d50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x240d54: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x240d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240d58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x240d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240d5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x240d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240d60: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x240d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x163748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163748u, _value); } while (0); }
    // 0x240d64: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x240d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x163740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163740u, _value); } while (0); }
    // 0x240d68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x240d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x163744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163744u, _value); } while (0); }
    // 0x240d6c: 0xc04a151  jal         func_128544
    ctx->pc = 0x240D6Cu;
    SET_GPR_U32(ctx, 31, 0x240D74u);
    ctx->pc = 0x240D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D6Cu;
    // 0x240d70: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x240D6Cu, 0x240D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D74u;
label_240d74:
    // 0x240d74: 0xc090372  jal         func_240DC8
    ctx->pc = 0x240D74u;
    SET_GPR_U32(ctx, 31, 0x240D7Cu);
    ctx->pc = 0x240D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D74u;
    // 0x240d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240DC8u, 0x240D74u, 0x240D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D7Cu;
label_240d7c:
    // 0x240d7c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x240d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x240d80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x240d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240d84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x240d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240d88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x240D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D8Cu;
        // 0x240d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240D94u;
    // 0x240d94: 0x0  nop
    ctx->pc = 0x240d94u;
    // NOP
    ctx->pc = 0x240d98u;
}
