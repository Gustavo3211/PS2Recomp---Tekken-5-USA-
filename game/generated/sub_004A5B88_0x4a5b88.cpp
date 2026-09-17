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

// Function: sub_004A5B88
// Address: 0x4a5b88 - 0x4a5df8
void sub_004A5B88_0x4a5b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B88_0x4a5b88");
#endif

    switch (ctx->pc) {
        case 0x4a5bd8u: goto label_4a5bd8;
        case 0x4a5de0u: goto label_4a5de0;
        default: break;
    }

    ctx->pc = 0x4a5b88u;

    // 0x4a5b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a5b8c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a5b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a5b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a5b94: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4a5b94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4a5b98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a5b9c: 0x2602d680  addiu       $v0, $s0, -0x2980
    ctx->pc = 0x4a5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4a5ba0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5ba4: 0x950e0000  lhu         $t6, 0x0($t0)
    ctx->pc = 0x4a5ba4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5ba8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a5ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a5bac: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a5bacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5bb0: 0x904d21fd  lbu         $t5, 0x21FD($v0)
    ctx->pc = 0x4a5bb0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x72F87Du));
    // 0x4a5bb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a5bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a5bb8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4a5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a5bbc: 0x31a5ffff  andi        $a1, $t5, 0xFFFF
    ctx->pc = 0x4a5bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x4a5bc0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4a5bc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5bc4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a5bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a5bc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A5BC8u;
    {
        const bool branch_taken_0x4a5bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BC8u;
        // 0x4a5bcc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5bc8) {
            ctx->pc = 0x4A5BFCu;
            goto label_4a5bfc;
        }
    }
    ctx->pc = 0x4A5BD0u;
    // 0x4a5bd0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a5bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5bd4: 0x0  nop
    ctx->pc = 0x4a5bd4u;
    // NOP
label_4a5bd8:
    // 0x4a5bd8: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x4a5bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x4a5bdc: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x4a5bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4a5be0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a5be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5be4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a5be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a5be8: 0x835824  and         $t3, $a0, $v1
    ctx->pc = 0x4a5be8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5bec: 0x3162ffff  andi        $v0, $t3, 0xFFFF
    ctx->pc = 0x4a5becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4a5bf0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a5bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a5bf4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A5BF4u;
    {
        const bool branch_taken_0x4a5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BF4u;
        // 0x4a5bf8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5bf4) {
            ctx->pc = 0x4A5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5bd8;
        }
    }
    ctx->pc = 0x4A5BFCu;
label_4a5bfc:
    // 0x4a5bfc: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4a5bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5c00: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a5c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a5c04: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4a5c04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5c08: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x4a5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4a5c0c: 0x3565ffff  ori         $a1, $t3, 0xFFFF
    ctx->pc = 0x4a5c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4a5c10: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x4a5c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x4a5c14: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x4a5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4a5c18: 0xa45824  and         $t3, $a1, $a0
    ctx->pc = 0x4a5c18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4a5c1c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a5c1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a5c20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5c24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a5c28: 0x35a3ffff  ori         $v1, $t5, 0xFFFF
    ctx->pc = 0x4a5c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4a5c2c: 0xb2400  sll         $a0, $t3, 16
    ctx->pc = 0x4a5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4a5c30: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a5c34: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x4a5c34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a5c38: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4A5C38u;
    {
        const bool branch_taken_0x4a5c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C38u;
        // 0x4a5c3c: 0x626824  and         $t5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c38) {
            ctx->pc = 0x4A5C74u;
            goto label_4a5c74;
        }
    }
    ctx->pc = 0x4A5C40u;
    // 0x4a5c40: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x4a5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4a5c44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5c48: 0xa25818  mult        $t3, $a1, $v0
    ctx->pc = 0x4a5c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4a5c4c: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x4a5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4a5c50: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x4a5c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4a5c54: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x4a5c54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x4a5c58: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a5c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4a5c5c: 0x835824  and         $t3, $a0, $v1
    ctx->pc = 0x4a5c5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5c60: 0x316201ff  andi        $v0, $t3, 0x1FF
    ctx->pc = 0x4a5c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)511);
    // 0x4a5c64: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x4a5c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4a5c68: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a5c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a5c6c: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x4a5c6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5c70: 0xb2400  sll         $a0, $t3, 16
    ctx->pc = 0x4a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_4a5c74:
    // 0x4a5c74: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4a5c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5c78: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a5c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a5c7c: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x4a5c7cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5c80: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a5c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a5c84: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x4a5c84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a5c88: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x4a5c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4a5c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a5c90: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x4a5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4a5c94: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a5c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4a5c98: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x4a5c98u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5c9c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x4A5C9Cu;
    {
        const bool branch_taken_0x4a5c9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C9Cu;
        // 0x4a5ca0: 0x835824  and         $t3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c9c) {
            ctx->pc = 0x4A5CD8u;
            goto label_4a5cd8;
        }
    }
    ctx->pc = 0x4A5CA4u;
    // 0x4a5ca4: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x4a5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4a5ca8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5ca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5cac: 0xe24818  mult        $t1, $a3, $v0
    ctx->pc = 0x4a5cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4a5cb0: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x4a5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4a5cb4: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x4a5cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a5cb8: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x4a5cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x4a5cbc: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a5cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4a5cc0: 0x834824  and         $t1, $a0, $v1
    ctx->pc = 0x4a5cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5cc4: 0x312201ff  andi        $v0, $t1, 0x1FF
    ctx->pc = 0x4a5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)511);
    // 0x4a5cc8: 0x3523ffff  ori         $v1, $t1, 0xFFFF
    ctx->pc = 0x4a5cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a5ccc: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a5cd0: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4a5cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5cd4: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x4a5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_4a5cd8:
    // 0x4a5cd8: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4a5cd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5cdc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a5cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a5ce0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a5ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5ce4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5ce8: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x4a5ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a5cec: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a5cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4a5cf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a5cf4: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x4a5cf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a5cf8: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a5cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a5cfc: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4a5cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4a5d00: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4a5d00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a5d04: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x4a5d04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a5d08: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A5D08u;
    {
        const bool branch_taken_0x4a5d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D08u;
        // 0x4a5d0c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d08) {
            ctx->pc = 0x4A5D44u;
            goto label_4a5d44;
        }
    }
    ctx->pc = 0x4A5D10u;
    // 0x4a5d10: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x4a5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4a5d14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5d18: 0x825018  mult        $t2, $a0, $v0
    ctx->pc = 0x4a5d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4a5d1c: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4a5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4a5d20: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4a5d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a5d24: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x4a5d24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x4a5d28: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a5d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4a5d2c: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x4a5d2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5d30: 0x314201ff  andi        $v0, $t2, 0x1FF
    ctx->pc = 0x4a5d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)511);
    // 0x4a5d34: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x4a5d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a5d38: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a5d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a5d3c: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x4a5d3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5d40: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_4a5d44:
    // 0x4a5d44: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4a5d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4a5d48: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x4a5d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x4a5d4c: 0x26100064  addiu       $s0, $s0, 0x64
    ctx->pc = 0x4a5d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4a5d50: 0x24e79990  addiu       $a3, $a3, -0x6670
    ctx->pc = 0x4a5d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941072));
    // 0x4a5d54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4a5d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5d58: 0x1871024  and         $v0, $t4, $a3
    ctx->pc = 0x4a5d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x4a5d5c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a5d60: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x4a5d60u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5d64: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4a5d68: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a5d68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a5d6c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4a5d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5d70: 0x3525ffff  ori         $a1, $t1, 0xFFFF
    ctx->pc = 0x4a5d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a5d74: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4a5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4a5d78: 0x3546ffff  ori         $a2, $t2, 0xFFFF
    ctx->pc = 0x4a5d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a5d7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5d80: 0x665024  and         $t2, $v1, $a2
    ctx->pc = 0x4a5d80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a5d84: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x4a5d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x4a5d88: 0xb3200  sll         $a2, $t3, 8
    ctx->pc = 0x4a5d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x4a5d8c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a5d90: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x4a5d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x4a5d94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a5d98: 0xa44824  and         $t1, $a1, $a0
    ctx->pc = 0x4a5d98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4a5d9c: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x4a5d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4a5da0: 0x16c1024  and         $v0, $t3, $t4
    ctx->pc = 0x4a5da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x4a5da4: 0x3147ffff  andi        $a3, $t2, 0xFFFF
    ctx->pc = 0x4a5da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4a5da8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4a5da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4a5dac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5db0: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x4a5db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a5db4: 0x1ac2824  and         $a1, $t5, $t4
    ctx->pc = 0x4a5db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x4a5db8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4a5db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4a5dbc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a5dc0: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x4a5dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x4a5dc4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a5dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5dcc: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4a5dccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a5dd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5dd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a5dd8: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A5DD8u;
    SET_GPR_U32(ctx, 31, 0x4A5DE0u);
    ctx->pc = 0x4A5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5DD8u;
    // 0x4a5ddc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A5DD8u, 0x4A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5DE0u;
label_4a5de0:
    // 0x4a5de0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5de4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a5de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5de8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a5dec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a5decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5df0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DF0u;
        // 0x4a5df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5DF8u;
}
