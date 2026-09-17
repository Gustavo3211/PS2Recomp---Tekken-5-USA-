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

// Function: sub_002B3E40
// Address: 0x2b3e40 - 0x2b3ee8
void sub_002B3E40_0x2b3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3E40_0x2b3e40");
#endif

    switch (ctx->pc) {
        case 0x2b3e68u: goto label_2b3e68;
        default: break;
    }

    ctx->pc = 0x2b3e40u;

    // 0x2b3e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3e44: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x2b3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x2b3e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b3e54: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b3e58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3E58u;
    {
        const bool branch_taken_0x2b3e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E58u;
        // 0x2b3e5c: 0x240400f1  addiu       $a0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e58) {
            ctx->pc = 0x2B3E68u;
            goto label_2b3e68;
        }
    }
    ctx->pc = 0x2B3E60u;
    // 0x2b3e60: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x2B3E60u;
    SET_GPR_U32(ctx, 31, 0x2B3E68u);
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x2B3E60u, 0x2B3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E68u;
label_2b3e68:
    // 0x2b3e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b3e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e70: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3e74: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2b3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2b3e78: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2b3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2b3e7c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x2b3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x2b3e80: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x2b3e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x2b3e84: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2b3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2b3e88: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2b3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2b3e8c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2b3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2b3e90: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2b3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2b3e94: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2b3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2b3e98: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2b3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2b3e9c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2b3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2b3ea0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2b3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2b3ea4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2b3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2b3ea8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2b3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2b3eac: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2b3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2b3eb0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2b3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2b3eb4: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2b3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2b3eb8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2b3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2b3ebc: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2b3ec0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2b3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2b3ec4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2b3ec8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2b3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2b3ecc: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2b3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2b3ed0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2b3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2b3ed4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b3ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EDCu;
        // 0x2b3ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3EE4u;
    // 0x2b3ee4: 0x0  nop
    ctx->pc = 0x2b3ee4u;
    // NOP
    ctx->pc = 0x2b3ee8u;
}
