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

// Function: sub_002C2B68
// Address: 0x2c2b68 - 0x2c2c40
void sub_002C2B68_0x2c2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2B68_0x2c2b68");
#endif

    ctx->pc = 0x2c2b68u;

    // 0x2c2b68: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x2c2b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2c2b6c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2c2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c2b70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c2b74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c2b78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c2b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2b80: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2c2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c2b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2b88: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2c2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2c2b8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2b90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c2b94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c2b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c2b98: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2c2b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2c2b9c: 0x24217b90  addiu       $at, $at, 0x7B90
    ctx->pc = 0x2c2b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31632));
    // 0x2c2ba0: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2c2ba4: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x2c2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c2ba8: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x2c2ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2c2bac: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c2bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c2bb0: 0x24880100  addiu       $t0, $a0, 0x100
    ctx->pc = 0x2c2bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2c2bb4: 0x24890170  addiu       $t1, $a0, 0x170
    ctx->pc = 0x2c2bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x2c2bb8: 0x248a01e0  addiu       $t2, $a0, 0x1E0
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x2c2bbc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2c2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2c2bc0: 0x248b0250  addiu       $t3, $a0, 0x250
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x2c2bc4: 0x248c02c0  addiu       $t4, $a0, 0x2C0
    ctx->pc = 0x2c2bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x2c2bc8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2c2bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c2bcc: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x2c2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x2c2bd0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x2c2bd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c2bd4: 0x7c830110  sq          $v1, 0x110($a0)
    ctx->pc = 0x2c2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), GPR_VEC(ctx, 3));
    // 0x2c2bd8: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c2bdc: 0x7c820180  sq          $v0, 0x180($a0)
    ctx->pc = 0x2c2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 384), GPR_VEC(ctx, 2));
    // 0x2c2be0: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x2c2be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c2be4: 0x7c8301f0  sq          $v1, 0x1F0($a0)
    ctx->pc = 0x2c2be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 496), GPR_VEC(ctx, 3));
    // 0x2c2be8: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x2c2be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c2bec: 0x7c820260  sq          $v0, 0x260($a0)
    ctx->pc = 0x2c2becu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 608), GPR_VEC(ctx, 2));
    // 0x2c2bf0: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x2c2bf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2c2bf4: 0x7c8302d0  sq          $v1, 0x2D0($a0)
    ctx->pc = 0x2c2bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 720), GPR_VEC(ctx, 3));
    // 0x2c2bf8: 0x78c20970  lq          $v0, 0x970($a2)
    ctx->pc = 0x2c2bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 2416)));
    // 0x2c2bfc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2c2bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2c2c00: 0x78c30bb0  lq          $v1, 0xBB0($a2)
    ctx->pc = 0x2c2c00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 2992)));
    // 0x2c2c04: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2c2c04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2c2c08: 0x78c204f0  lq          $v0, 0x4F0($a2)
    ctx->pc = 0x2c2c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 1264)));
    // 0x2c2c0c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2c2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2c2c10: 0x78c30730  lq          $v1, 0x730($a2)
    ctx->pc = 0x2c2c10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 1840)));
    // 0x2c2c14: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x2c2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x2c2c18: 0x78c20220  lq          $v0, 0x220($a2)
    ctx->pc = 0x2c2c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 544)));
    // 0x2c2c1c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2c2c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2c2c20: 0x78c302b0  lq          $v1, 0x2B0($a2)
    ctx->pc = 0x2c2c20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x2c2c24: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x2c2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x2c2c28: 0x78c20070  lq          $v0, 0x70($a2)
    ctx->pc = 0x2c2c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2c2c2c: 0x7d820000  sq          $v0, 0x0($t4)
    ctx->pc = 0x2c2c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 2));
    // 0x2c2c30: 0xc4800310  lwc1        $f0, 0x310($a0)
    ctx->pc = 0x2c2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C34u;
        // 0x2c2c38: 0xe4800320  swc1        $f0, 0x320($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 800), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2C3Cu;
    // 0x2c2c3c: 0x0  nop
    ctx->pc = 0x2c2c3cu;
    // NOP
    ctx->pc = 0x2c2c40u;
}
