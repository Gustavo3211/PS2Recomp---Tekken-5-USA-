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

// Function: sub_00128DA0
// Address: 0x128da0 - 0x128e30
void sub_00128DA0_0x128da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128DA0_0x128da0");
#endif

    switch (ctx->pc) {
        case 0x128e1cu: goto label_128e1c;
        default: break;
    }

    ctx->pc = 0x128da0u;

    // 0x128da0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x128da4: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x128da8: 0x8c4d4728  lw          $t5, 0x4728($v0)
    ctx->pc = 0x128da8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x134728u));
    // 0x128dac: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x128dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x128db0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x128db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x128db4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x128db4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128db8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x128db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x128dbc: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x128dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x128dc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dc4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128dc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x128dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x128dcc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x128dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x128dd0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x128dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x128dd4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x128dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x128dd8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x128dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x128ddc: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x128ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x128de0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x128de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x128de4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x128de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x128de8: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x128de8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x128dec: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x128decu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x128df0: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x128df0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x128df4: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x128df4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x128df8: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x128df8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x128dfc: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x128dfcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x128e00: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x128e00u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x128e04: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x128e04u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x128e08: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x128e08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x128e0c: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x128e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x128e10: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x128e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x128e14: 0xc04aab2  jal         func_12AAC8
    ctx->pc = 0x128E14u;
    SET_GPR_U32(ctx, 31, 0x128E1Cu);
    ctx->pc = 0x128E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E14u;
    // 0x128e18: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAC8u, 0x128E14u, 0x128E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E1Cu;
label_128e1c:
    // 0x128e1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128e20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128e24: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x128e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x128e28: 0x3e00008  jr          $ra
    ctx->pc = 0x128E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E28u;
        // 0x128e2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128E30u;
}
