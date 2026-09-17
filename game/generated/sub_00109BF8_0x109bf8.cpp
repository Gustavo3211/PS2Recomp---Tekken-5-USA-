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

// Function: sub_00109BF8
// Address: 0x109bf8 - 0x109f10
void sub_00109BF8_0x109bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109BF8_0x109bf8");
#endif

    switch (ctx->pc) {
        case 0x109cd8u: goto label_109cd8;
        case 0x109cecu: goto label_109cec;
        case 0x109d04u: goto label_109d04;
        case 0x109d1cu: goto label_109d1c;
        default: break;
    }

    ctx->pc = 0x109bf8u;

    // 0x109bf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x109bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x109bfc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109c00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x109c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x109c04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x109c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c08: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x109c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x109c0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x109c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x109c10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109c14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109c1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109c20: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x109c20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x109c24: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x109c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x109c28: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x109C28u;
    {
        const bool branch_taken_0x109c28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x109c28) {
            ctx->pc = 0x109C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109C28u;
            // 0x109c2c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109C58u;
            goto label_109c58;
        }
    }
    ctx->pc = 0x109C30u;
    // 0x109c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109c34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109c38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x109c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x109c3c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x109c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x109c40: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x109c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x109c44: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x109c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x109c48: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x109c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x109c4c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x109c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x109c50: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x109c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x109c54: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_109c58:
    // 0x109c58: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x109c5c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x109c60: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109C60u;
    {
        const bool branch_taken_0x109c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C60u;
        // 0x109c64: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c60) {
            ctx->pc = 0x109C84u;
            goto label_109c84;
        }
    }
    ctx->pc = 0x109C68u;
    // 0x109c68: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x109c6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109C6Cu;
    {
        const bool branch_taken_0x109c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C6Cu;
        // 0x109c70: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c6c) {
            ctx->pc = 0x109C88u;
            goto label_109c88;
        }
    }
    ctx->pc = 0x109C74u;
    // 0x109c74: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x109c78: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x109c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x109c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109C7Cu;
    {
        const bool branch_taken_0x109c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C7Cu;
        // 0x109c80: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c7c) {
            ctx->pc = 0x109C90u;
            goto label_109c90;
        }
    }
    ctx->pc = 0x109C84u;
label_109c84:
    // 0x109c84: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_109c88:
    // 0x109c88: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x109c8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_109c90:
    // 0x109c90: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x109c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x109c94: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x109c94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109c98: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x109c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x109c9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x109c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109ca0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109ca4: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x109CA4u;
    {
        const bool branch_taken_0x109ca4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca4) {
            ctx->pc = 0x109CB8u;
            goto label_109cb8;
        }
    }
    ctx->pc = 0x109CACu;
    // 0x109cac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x109cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109cb0: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x109CB0u;
    {
        const bool branch_taken_0x109cb0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x109CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CB0u;
        // 0x109cb4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cb0) {
            ctx->pc = 0x109EE8u;
            goto label_109ee8;
        }
    }
    ctx->pc = 0x109CB8u;
label_109cb8:
    // 0x109cb8: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x109cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x109cbc: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x109cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x109cc0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x109cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x109cc4: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x109cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x109cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ccc: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x109cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x109cd0: 0xc041266  jal         func_104998
    ctx->pc = 0x109CD0u;
    SET_GPR_U32(ctx, 31, 0x109CD8u);
    ctx->pc = 0x109CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD0u;
    // 0x109cd4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104998u, 0x109CD0u, 0x109CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD8u;
label_109cd8:
    // 0x109cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce4: 0xc04126a  jal         func_1049A8
    ctx->pc = 0x109CE4u;
    SET_GPR_U32(ctx, 31, 0x109CECu);
    ctx->pc = 0x109CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CE4u;
    // 0x109ce8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049A8u, 0x109CE4u, 0x109CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CECu;
label_109cec:
    // 0x109cec: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x109cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x109cf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cfc: 0xc04126a  jal         func_1049A8
    ctx->pc = 0x109CFCu;
    SET_GPR_U32(ctx, 31, 0x109D04u);
    ctx->pc = 0x109D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CFCu;
    // 0x109d00: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049A8u, 0x109CFCu, 0x109D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D04u;
label_109d04:
    // 0x109d04: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x109d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x109d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d14: 0xc04126a  jal         func_1049A8
    ctx->pc = 0x109D14u;
    SET_GPR_U32(ctx, 31, 0x109D1Cu);
    ctx->pc = 0x109D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D14u;
    // 0x109d18: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049A8u, 0x109D14u, 0x109D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D1Cu;
label_109d1c:
    // 0x109d1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x109d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d20: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x109d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x109d24: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x109D24u;
    {
        const bool branch_taken_0x109d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D24u;
        // 0x109d28: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d24) {
            ctx->pc = 0x109DB0u;
            goto label_109db0;
        }
    }
    ctx->pc = 0x109D2Cu;
    // 0x109d2c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x109d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109d30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x109d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x109d34: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109d38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109d3c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x109d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x109d40: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x109d40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x109d44: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x109d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x109d48: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x109d4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x109d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x109d50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x109d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109d54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x109d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x109d58: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x109d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x109d5c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x109d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x109d60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x109d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x109d64: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x109d64u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x109d68: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x109d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x109d6c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x109d6cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x109d70: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x109d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x109d74: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x109d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x109d78: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x109d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x109d7c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x109d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109d80: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x109d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x109d84: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x109d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x109d88: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x109d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x109d8c: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x109d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x109d90: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x109d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x109d94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x109d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109d9c: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x109d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x109da0: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x109da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x109da4: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x109da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x109da8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x109DA8u;
    {
        const bool branch_taken_0x109da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DA8u;
        // 0x109dac: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109da8) {
            ctx->pc = 0x109E18u;
            goto label_109e18;
        }
    }
    ctx->pc = 0x109DB0u;
label_109db0:
    // 0x109db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109db4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109DB4u;
    {
        const bool branch_taken_0x109db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DB4u;
        // 0x109db8: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db4) {
            ctx->pc = 0x109E1Cu;
            goto label_109e1c;
        }
    }
    ctx->pc = 0x109DBCu;
    // 0x109dbc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x109dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109dc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109dc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x109dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109dc8: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x109dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x109dcc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x109dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x109dd0: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x109dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x109dd4: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x109dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x109dd8: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x109dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x109ddc: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x109ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x109de0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x109de0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x109de4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x109de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x109de8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x109de8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x109dec: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x109decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x109df0: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x109df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x109df4: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x109df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x109df8: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x109df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109dfc: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x109dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x109e00: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x109e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x109e04: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x109e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109e08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x109e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x109e0c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x109e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x109e10: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x109e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x109e14: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x109e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_109e18:
    // 0x109e18: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x109e18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_109e1c:
    // 0x109e1c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x109e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x109e20: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x109e20u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x109e24: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x109e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x109e28: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x109e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x109e2c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x109e30: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109e34: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x109e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x109e38: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x109e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x109e3c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x109e3cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x109e40: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109e44: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x109e44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x109e48: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x109e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x109e4c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x109e50: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x109e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x109e54: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x109e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x109e58: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x109e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x109e5c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x109e60: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x109e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x109e64: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x109e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x109e68: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x109e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x109e6c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x109e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x109e70: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109e74: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x109e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x109e78: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x109e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x109e7c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109e80: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x109e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x109e84: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x109e88: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x109e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x109e8c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x109e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x109e90: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x109e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x109e94: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x109e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x109e98: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x109e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x109e9c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x109e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x109ea0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x109ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x109ea4: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x109ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x109ea8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x109ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x109eac: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x109eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x109eb0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x109eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x109eb4: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x109eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x109eb8: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x109eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x109ebc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x109ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x109ec0: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x109ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x109ec4: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x109ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x109ec8: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x109ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x109ecc: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x109eccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x109ed0: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x109ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x109ed4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109ed8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x109ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x109edc: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x109edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x109ee0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109ee4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x109ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_109ee8:
    // 0x109ee8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x109ee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109eec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109ef0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109ef4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109ef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109efc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109f04: 0x3e00008  jr          $ra
    ctx->pc = 0x109F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F04u;
        // 0x109f08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109F0Cu;
    // 0x109f0c: 0x0  nop
    ctx->pc = 0x109f0cu;
    // NOP
    ctx->pc = 0x109f10u;
}
