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

// Function: sub_00128BC8
// Address: 0x128bc8 - 0x128c78
void sub_00128BC8_0x128bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128BC8_0x128bc8");
#endif

    switch (ctx->pc) {
        case 0x128be0u: goto label_128be0;
        case 0x128c58u: goto label_128c58;
        default: break;
    }

    ctx->pc = 0x128bc8u;

    // 0x128bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bd4: 0x8043edc  j           func_10FB70
    ctx->pc = 0x128BD4u;
    ctx->pc = 0x128BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BD4u;
    // 0x128bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB70u, 0x128BD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x128BDCu;
    // 0x128bdc: 0x0  nop
    ctx->pc = 0x128bdcu;
    // NOP
label_128be0:
    // 0x128be0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x128be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x128be4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x128be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128be8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x128be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x128bec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x128becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bf0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x128bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x128bf4: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x128bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x128bf8: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x128bf8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x128bfc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x128bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c00: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x128c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c08: 0x24070208  addiu       $a3, $zero, 0x208
    ctx->pc = 0x128c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x128c0c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x128c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x128c10: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x128c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x128c14: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x128c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x128c18: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x128c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x128c1c: 0xffab00a8  sd          $t3, 0xA8($sp)
    ctx->pc = 0x128c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x128c20: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x128c20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x128c24: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x128c24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x128c28: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x128c28u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x128c2c: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x128c2cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x128c30: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x128c30u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x128c34: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x128c34u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x128c38: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x128c38u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x128c3c: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x128c3cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x128c40: 0xa7a7000c  sh          $a3, 0xC($sp)
    ctx->pc = 0x128c40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x128c44: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x128c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x128c48: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x128c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x128c4c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x128c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x128c50: 0xc04aab2  jal         func_12AAC8
    ctx->pc = 0x128C50u;
    SET_GPR_U32(ctx, 31, 0x128C58u);
    ctx->pc = 0x128C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C50u;
    // 0x128c54: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAC8u, 0x128C50u, 0x128C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C58u;
label_128c58:
    // 0x128c58: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x128C58u;
    {
        const bool branch_taken_0x128c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C58u;
        // 0x128c5c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c58) {
            ctx->pc = 0x128C64u;
            goto label_128c64;
        }
    }
    ctx->pc = 0x128C60u;
    // 0x128c60: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x128c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_128c64:
    // 0x128c64: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x128c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128c68: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x128c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x128c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x128C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C6Cu;
        // 0x128c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128C74u;
    // 0x128c74: 0x0  nop
    ctx->pc = 0x128c74u;
    // NOP
    ctx->pc = 0x128c78u;
}
