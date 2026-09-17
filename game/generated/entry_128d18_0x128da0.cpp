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

// Function: entry_128d18
// Address: 0x128d18 - 0x128da0
void entry_128d18_0x128da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_128d18_0x128da0");
#endif

    switch (ctx->pc) {
        case 0x128d8cu: goto label_128d8c;
        default: break;
    }

    ctx->pc = 0x128d18u;

    // 0x128d18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x128d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x128d1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x128d20: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x128d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x128d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d28: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x128d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x128d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x128d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x128d34: 0x240c0208  addiu       $t4, $zero, 0x208
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x128d38: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x128d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x128d3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x128d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x128d40: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x128d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x128d44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x128d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x128d48: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x128d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x128d4c: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x128d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x128d50: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x128d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x128d54: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x128d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x128d58: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x128d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x128d5c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x128d5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x128d60: 0xe7ad007c  swc1        $f13, 0x7C($sp)
    ctx->pc = 0x128d60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x128d64: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x128d64u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x128d68: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x128d68u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x128d6c: 0xe7b00088  swc1        $f16, 0x88($sp)
    ctx->pc = 0x128d6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x128d70: 0xe7b1008c  swc1        $f17, 0x8C($sp)
    ctx->pc = 0x128d70u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x128d74: 0xe7b20090  swc1        $f18, 0x90($sp)
    ctx->pc = 0x128d74u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x128d78: 0xe7b30094  swc1        $f19, 0x94($sp)
    ctx->pc = 0x128d78u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x128d7c: 0xa7ac000c  sh          $t4, 0xC($sp)
    ctx->pc = 0x128d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x128d80: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x128d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x128d84: 0xc04aab2  jal         func_12AAC8
    ctx->pc = 0x128D84u;
    SET_GPR_U32(ctx, 31, 0x128D8Cu);
    ctx->pc = 0x128D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D84u;
    // 0x128d88: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAC8u, 0x128D84u, 0x128D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D8Cu;
label_128d8c:
    // 0x128d8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128d94: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x128d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x128d98: 0x3e00008  jr          $ra
    ctx->pc = 0x128D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128DA0u;
}
