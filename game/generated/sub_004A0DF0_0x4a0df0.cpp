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

// Function: sub_004A0DF0
// Address: 0x4a0df0 - 0x4a0f68
void sub_004A0DF0_0x4a0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0DF0_0x4a0df0");
#endif

    switch (ctx->pc) {
        case 0x4a0f1cu: goto label_4a0f1c;
        default: break;
    }

    ctx->pc = 0x4a0df0u;

    // 0x4a0df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a0df4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4a0df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4a0df8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a0dfc: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x4a0dfcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4a0e00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a0e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a0e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a0e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0e08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a0e0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a0e10: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A0E10u;
    {
        const bool branch_taken_0x4a0e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E10u;
        // 0x4a0e14: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e10) {
            ctx->pc = 0x4A0E30u;
            goto label_4a0e30;
        }
    }
    ctx->pc = 0x4A0E18u;
    // 0x4a0e18: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a0e18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0e1c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0e20: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x4a0e24: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4A0E24u;
    {
        const bool branch_taken_0x4a0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E24u;
        // 0x4a0e28: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e24) {
            ctx->pc = 0x4A0F50u;
            goto label_4a0f50;
        }
    }
    ctx->pc = 0x4A0E2Cu;
    // 0x4a0e2c: 0x0  nop
    ctx->pc = 0x4a0e2cu;
    // NOP
label_4a0e30:
    // 0x4a0e30: 0x8483007e  lh          $v1, 0x7E($a0)
    ctx->pc = 0x4a0e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x4a0e34: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x4a0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x4a0e38: 0x8484007c  lh          $a0, 0x7C($a0)
    ctx->pc = 0x4a0e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x4a0e3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a0e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a0e40: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4a0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4a0e44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0e48: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a0e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0e4c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0E4Cu;
    {
        const bool branch_taken_0x4a0e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E4Cu;
        // 0x4a0e50: 0x8605000c  lh          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e4c) {
            ctx->pc = 0x4A0E60u;
            goto label_4a0e60;
        }
    }
    ctx->pc = 0x4A0E54u;
    // 0x4a0e54: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x4a0e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a0e58: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A0E58u;
    {
        const bool branch_taken_0x4a0e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E58u;
        // 0x4a0e5c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e58) {
            ctx->pc = 0x4A0EC8u;
            goto label_4a0ec8;
        }
    }
    ctx->pc = 0x4A0E60u;
label_4a0e60:
    // 0x4a0e60: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4a0e60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0e64: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4a0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4a0e68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a0e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0e6c: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x4a0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a0e70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a0e74: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x4a0e74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a0e78: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x4a0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a0e7c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4a0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0e80: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4a0e80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4a0e84: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4a0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a0e88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0E88u;
    {
        const bool branch_taken_0x4a0e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E88u;
        // 0x4a0e8c: 0x32c03  sra         $a1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e88) {
            ctx->pc = 0x4A0EA4u;
            goto label_4a0ea4;
        }
    }
    ctx->pc = 0x4A0E90u;
    // 0x4a0e90: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a0e94: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x4a0e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4a0e98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a0e9c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x4a0e9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4a0ea0: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x4a0ea0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_4a0ea4:
    // 0x4a0ea4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x4a0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4a0ea8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0eac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0eb0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x4a0eb4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0eb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0eb8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x4a0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a0ebc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4A0EBCu;
    {
        const bool branch_taken_0x4a0ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0EBCu;
        // 0x4a0ec0: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ebc) {
            ctx->pc = 0x4A0F4Cu;
            goto label_4a0f4c;
        }
    }
    ctx->pc = 0x4A0EC4u;
    // 0x4a0ec4: 0x0  nop
    ctx->pc = 0x4a0ec4u;
    // NOP
label_4a0ec8:
    // 0x4a0ec8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A0EC8u;
    {
        const bool branch_taken_0x4a0ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0ec8) {
            ctx->pc = 0x4A0ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0EC8u;
            // 0x4a0ecc: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0EF0u;
            goto label_4a0ef0;
        }
    }
    ctx->pc = 0x4A0ED0u;
    // 0x4a0ed0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0ed0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0ed4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x4a0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0ed8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0edc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0edcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0ee0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4a0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a0ee4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a0ee8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A0EE8u;
    {
        const bool branch_taken_0x4a0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0EE8u;
        // 0x4a0eec: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ee8) {
            ctx->pc = 0x4A0F3Cu;
            goto label_4a0f3c;
        }
    }
    ctx->pc = 0x4A0EF0u;
label_4a0ef0:
    // 0x4a0ef0: 0x24032aaa  addiu       $v1, $zero, 0x2AAA
    ctx->pc = 0x4a0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10922));
    // 0x4a0ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0ef8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4a0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a0efc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0f00: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0f00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0f04: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4a0f08: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a0f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0f0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a0f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a0f10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a0f14: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A0F14u;
    SET_GPR_U32(ctx, 31, 0x4A0F1Cu);
    ctx->pc = 0x4A0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0F14u;
    // 0x4a0f18: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A0F14u, 0x4A0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0F1Cu;
label_4a0f1c:
    // 0x4a0f1c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x4a0f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a0f20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A0F20u;
    {
        const bool branch_taken_0x4a0f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F20u;
        // 0x4a0f24: 0x87a50000  lh          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0f20) {
            ctx->pc = 0x4A0F38u;
            goto label_4a0f38;
        }
    }
    ctx->pc = 0x4A0F28u;
    // 0x4a0f28: 0x51440  sll         $v0, $a1, 17
    ctx->pc = 0x4a0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x4a0f2c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0f2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A0F30u;
    {
        const bool branch_taken_0x4a0f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F30u;
        // 0x4a0f34: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0f30) {
            ctx->pc = 0x4A0F3Cu;
            goto label_4a0f3c;
        }
    }
    ctx->pc = 0x4A0F38u;
label_4a0f38:
    // 0x4a0f38: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0f38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0f3c:
    // 0x4a0f3c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4a0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0f40: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0f44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0f48: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_4a0f4c:
    // 0x4a0f4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0f4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0f50:
    // 0x4a0f50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a0f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0f54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a0f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a0f58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a0f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0f5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a0f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F60u;
        // 0x4a0f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0F68u;
}
