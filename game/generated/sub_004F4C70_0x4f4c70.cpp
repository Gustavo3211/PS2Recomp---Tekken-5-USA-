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

// Function: sub_004F4C70
// Address: 0x4f4c70 - 0x4f5198
void sub_004F4C70_0x4f4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4C70_0x4f4c70");
#endif

    switch (ctx->pc) {
        case 0x4f4ca8u: goto label_4f4ca8;
        case 0x4f4cc4u: goto label_4f4cc4;
        case 0x4f4ce4u: goto label_4f4ce4;
        case 0x4f4e54u: goto label_4f4e54;
        case 0x4f4e7cu: goto label_4f4e7c;
        case 0x4f4e84u: goto label_4f4e84;
        case 0x4f4fb4u: goto label_4f4fb4;
        case 0x4f4fc0u: goto label_4f4fc0;
        case 0x4f4fccu: goto label_4f4fcc;
        case 0x4f5058u: goto label_4f5058;
        case 0x4f5060u: goto label_4f5060;
        case 0x4f5068u: goto label_4f5068;
        case 0x4f513cu: goto label_4f513c;
        case 0x4f5144u: goto label_4f5144;
        case 0x4f5158u: goto label_4f5158;
        case 0x4f5164u: goto label_4f5164;
        default: break;
    }

    ctx->pc = 0x4f4c70u;

    // 0x4f4c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4f4c74: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4f4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4f4c78: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4f4c78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4c7c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4f4c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4f4c80: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4f4c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4f4c84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4f4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4f4c88: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4f4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4f4c8c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4f4c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4f4c90: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4f4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4f4c94: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4f4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4f4c98: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4f4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4f4c9c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4f4c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4f4ca0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F4CA0u;
    SET_GPR_U32(ctx, 31, 0x4F4CA8u);
    ctx->pc = 0x4F4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4CA0u;
    // 0x4f4ca4: 0x27d201b4  addiu       $s2, $fp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F4CA0u, 0x4F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4CA8u;
label_4f4ca8:
    // 0x4f4ca8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4f4ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4cac: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f4cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4cb0: 0x440007b  bltz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x4F4CB0u;
    {
        const bool branch_taken_0x4f4cb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4CB0u;
        // 0x4f4cb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4cb0) {
            ctx->pc = 0x4F4EA0u;
            goto label_4f4ea0;
        }
    }
    ctx->pc = 0x4F4CB8u;
    // 0x4f4cb8: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x4f4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4f4cbc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F4CBCu;
    SET_GPR_U32(ctx, 31, 0x4F4CC4u);
    ctx->pc = 0x4F4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4CBCu;
    // 0x4f4cc0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F4CBCu, 0x4F4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4CC4u;
label_4f4cc4:
    // 0x4f4cc4: 0x240204e7  addiu       $v0, $zero, 0x4E7
    ctx->pc = 0x4f4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1255));
    // 0x4f4cc8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4f4cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4f4ccc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x4f4cccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4cd0: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4f4cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4f4cd4: 0x27c30118  addiu       $v1, $fp, 0x118
    ctx->pc = 0x4f4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 280));
    // 0x4f4cd8: 0x2611249c  addiu       $s1, $s0, 0x249C
    ctx->pc = 0x4f4cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4f4cdc: 0xc12936c  jal         func_4A4DB0
    ctx->pc = 0x4F4CDCu;
    SET_GPR_U32(ctx, 31, 0x4F4CE4u);
    ctx->pc = 0x4F4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4CDCu;
    // 0x4f4ce0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DB0u, 0x4F4CDCu, 0x4F4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4CE4u;
label_4f4ce4:
    // 0x4f4ce4: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x4f4ce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x4f4ce8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f4cec: 0x86040038  lh          $a0, 0x38($s0)
    ctx->pc = 0x4f4cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4f4cf0: 0x260d2494  addiu       $t5, $s0, 0x2494
    ctx->pc = 0x4f4cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4f4cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f4cf8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4f4cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4d00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4f4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f4d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f4d08: 0x27c30120  addiu       $v1, $fp, 0x120
    ctx->pc = 0x4f4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
    // 0x4f4d0c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4f4d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4d10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4d14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f4d18: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4f4d18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4d1c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f4d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4d20: 0x27c4011c  addiu       $a0, $fp, 0x11C
    ctx->pc = 0x4f4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x4f4d24: 0x260f2498  addiu       $t7, $s0, 0x2498
    ctx->pc = 0x4f4d24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4f4d28: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f4d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f4d2c: 0xa7c2015a  sh          $v0, 0x15A($fp)
    ctx->pc = 0x4f4d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4d30: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f4d30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f4d34: 0x27d60014  addiu       $s6, $fp, 0x14
    ctx->pc = 0x4f4d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4f4d38: 0x27ac0004  addiu       $t4, $sp, 0x4
    ctx->pc = 0x4f4d38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f4d3c: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x4f4d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x4f4d40: 0x27d70018  addiu       $s7, $fp, 0x18
    ctx->pc = 0x4f4d40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4f4d44: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x4f4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x4f4d48: 0x27ae0008  addiu       $t6, $sp, 0x8
    ctx->pc = 0x4f4d48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f4d4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f4d50: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4f4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4f4d54: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4f4d54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f4d58: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f4d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f4d5c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4f4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4f4d60: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x4f4d60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x4f4d64: 0x8deb0000  lw          $t3, 0x0($t7)
    ctx->pc = 0x4f4d64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f4d68: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f4d6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4d70: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x4f4d70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x4f4d74: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f4d78: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x4f4d78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4d7c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f4d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f4d80: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f4d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4d84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4d84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4d88: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x4f4d88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x4f4d8c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f4d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f4d90: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f4d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f4d94: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4f4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4f4d98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f4d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f4d9c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4f4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4f4da0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f4da4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4da4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4da8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f4da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f4dac: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4f4dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4f4db0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f4db4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f4db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f4db8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4dbc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f4dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f4dc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4dc4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4dc8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f4dcc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f4dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f4dd0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f4dd4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4f4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f4dd8: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4f4dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f4ddc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f4ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f4de0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f4de0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4de4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4de8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4f4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f4dec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f4decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f4df0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4f4df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4f4df4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4df8: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4f4df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4f4dfc: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4f4dfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4f4e00: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4f4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4f4e04: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4f4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f4e08: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4f4e08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f4e0c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f4e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f4e10: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4f4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4f4e14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4e14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4e18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4e1c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x4f4e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4e20: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f4e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f4e24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4e28: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4f4e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4f4e2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f4e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f4e30: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f4e34: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4f4e34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4f4e38: 0xadeb0000  sw          $t3, 0x0($t7)
    ctx->pc = 0x4f4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 11));
    // 0x4f4e3c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4f4e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4e40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f4e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f4e48: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4f4e48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4f4e4c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4F4E4Cu;
    SET_GPR_U32(ctx, 31, 0x4F4E54u);
    ctx->pc = 0x4F4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4E4Cu;
    // 0x4f4e50: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4F4E4Cu, 0x4F4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4E54u;
label_4f4e54:
    // 0x4f4e54: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x4f4e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f4e58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f4e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4e5c: 0x960324a0  lhu         $v1, 0x24A0($s0)
    ctx->pc = 0x4f4e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4f4e60: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4f4e60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4e64: 0x960224a2  lhu         $v0, 0x24A2($s0)
    ctx->pc = 0x4f4e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4f4e68: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x4f4e68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4f4e6c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4f4e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4e70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4f4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f4e74: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F4E74u;
    SET_GPR_U32(ctx, 31, 0x4F4E7Cu);
    ctx->pc = 0x4F4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4E74u;
    // 0x4f4e78: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F4E74u, 0x4F4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4E7Cu;
label_4f4e7c:
    // 0x4f4e7c: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F4E7Cu;
    SET_GPR_U32(ctx, 31, 0x4F4E84u);
    ctx->pc = 0x4F4E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4E7Cu;
    // 0x4f4e80: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F4E7Cu, 0x4F4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4E84u;
label_4f4e84:
    // 0x4f4e84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f4e88: 0xa7c301b6  sh          $v1, 0x1B6($fp)
    ctx->pc = 0x4f4e88u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4e8c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f4e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4e90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f4e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f4e94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4F4E94u;
    {
        const bool branch_taken_0x4f4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4E94u;
        // 0x4f4e98: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4e94) {
            ctx->pc = 0x4F4EC8u;
            goto label_4f4ec8;
        }
    }
    ctx->pc = 0x4F4E9Cu;
    // 0x4f4e9c: 0x0  nop
    ctx->pc = 0x4f4e9cu;
    // NOP
label_4f4ea0:
    // 0x4f4ea0: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x4f4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4f4ea4: 0x27c40118  addiu       $a0, $fp, 0x118
    ctx->pc = 0x4f4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 280));
    // 0x4f4ea8: 0x27c6011c  addiu       $a2, $fp, 0x11C
    ctx->pc = 0x4f4ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x4f4eac: 0x27c80120  addiu       $t0, $fp, 0x120
    ctx->pc = 0x4f4eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
    // 0x4f4eb0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4f4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4f4eb4: 0x27d60014  addiu       $s6, $fp, 0x14
    ctx->pc = 0x4f4eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4f4eb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x4f4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x4f4ebc: 0x27d70018  addiu       $s7, $fp, 0x18
    ctx->pc = 0x4f4ebcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4f4ec0: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x4f4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x4f4ec4: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x4f4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_4f4ec8:
    // 0x4f4ec8: 0x27c30132  addiu       $v1, $fp, 0x132
    ctx->pc = 0x4f4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 306));
    // 0x4f4ecc: 0x27c20130  addiu       $v0, $fp, 0x130
    ctx->pc = 0x4f4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 304));
    // 0x4f4ed0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4f4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4f4ed4: 0x27c40134  addiu       $a0, $fp, 0x134
    ctx->pc = 0x4f4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 308));
    // 0x4f4ed8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x4f4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x4f4edc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f4edcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f4ee0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4f4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x4f4ee4: 0x26b30050  addiu       $s3, $s5, 0x50
    ctx->pc = 0x4f4ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x4f4ee8: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x4f4ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4eec: 0x26b40054  addiu       $s4, $s5, 0x54
    ctx->pc = 0x4f4eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    // 0x4f4ef0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f4ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4ef4: 0x26b50058  addiu       $s5, $s5, 0x58
    ctx->pc = 0x4f4ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 88));
    // 0x4f4ef8: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4f4ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f4efc: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4f4efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f4f00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4f04: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f4f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4f08: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f4f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f4f0c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4f4f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4f10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4f4f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f4f14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4f18: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f4f18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f4f1c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f4f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f4f20: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4f24: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4f4f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4f4f28: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4f2c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f4f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f4f30: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f4f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f4f34: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f4f38: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f4f3c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4f40: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4f4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4f4f44: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f4f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f4f48: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f4f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4f4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4f50: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f4f54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f4f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4f58: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4f5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4f60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4f64: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4f68: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f4f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f4f6c: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x4f4f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4f70: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f4f74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f4f78: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4f7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4f7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4f84: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4f88: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f4f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f4f8c: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4f4f8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4f90: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f4f94: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f4f98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4f9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4f9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4fa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4fa4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4fa8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4f4fa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f4fac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4FACu;
    SET_GPR_U32(ctx, 31, 0x4F4FB4u);
    ctx->pc = 0x4F4FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4FACu;
    // 0x4f4fb0: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4FACu, 0x4F4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4FB4u;
label_4f4fb4:
    // 0x4f4fb4: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4f4fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f4fb8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4FB8u;
    SET_GPR_U32(ctx, 31, 0x4F4FC0u);
    ctx->pc = 0x4F4FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4FB8u;
    // 0x4f4fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4FB8u, 0x4F4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4FC0u;
label_4f4fc0:
    // 0x4f4fc0: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4f4fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f4fc4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4FC4u;
    SET_GPR_U32(ctx, 31, 0x4F4FCCu);
    ctx->pc = 0x4F4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4FC4u;
    // 0x4f4fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4FC4u, 0x4F4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4FCCu;
label_4f4fcc:
    // 0x4f4fcc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4f4fd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f4fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4fd4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4f4fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4fd8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4f4fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f4fdc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4fe0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f4fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4fe4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4fe8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4fec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f4fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f4ff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4ff4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f4ff8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4ffc: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4f4ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f5000: 0x8fc70124  lw          $a3, 0x124($fp)
    ctx->pc = 0x4f5000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
    // 0x4f5004: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5008: 0x8fc80128  lw          $t0, 0x128($fp)
    ctx->pc = 0x4f5008u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x4f500c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5010: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4f5010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4f5014: 0x8fc7012c  lw          $a3, 0x12C($fp)
    ctx->pc = 0x4f5014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x4f5018: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f501c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4f501cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4f5020: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4f5020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4f5024: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4f5024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f5028: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f502c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5030: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f5030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f5034: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f5034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f5038: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4f5038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4f503c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4f503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x4f5040: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4f5040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4f5044: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4f5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5048: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4f5048u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4f504c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5050: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5050u;
    SET_GPR_U32(ctx, 31, 0x4F5058u);
    ctx->pc = 0x4F5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5050u;
    // 0x4f5054: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5050u, 0x4F5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5058u;
label_4f5058:
    // 0x4f5058: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5058u;
    SET_GPR_U32(ctx, 31, 0x4F5060u);
    ctx->pc = 0x4F505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5058u;
    // 0x4f505c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5058u, 0x4F5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5060u;
label_4f5060:
    // 0x4f5060: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5060u;
    SET_GPR_U32(ctx, 31, 0x4F5068u);
    ctx->pc = 0x4F5064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5060u;
    // 0x4f5064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5060u, 0x4F5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5068u;
label_4f5068:
    // 0x4f5068: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f506c: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f506cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5070: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f5070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5074: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5078: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f5078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f507c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f507cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5080: 0x87a70004  lh          $a3, 0x4($sp)
    ctx->pc = 0x4f5080u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5084: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f5084u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f5088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f508c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f508cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f5090: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f5090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5094: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f5094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f5098: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f5098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f509c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f50a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f50a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f50a4: 0x87a80008  lh          $t0, 0x8($sp)
    ctx->pc = 0x4f50a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f50a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f50a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f50ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f50b0: 0x97a90000  lhu         $t1, 0x0($sp)
    ctx->pc = 0x4f50b0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f50b4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f50b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f50b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f50bc: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f50bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f50c0: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f50c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f50c4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4f50c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4f50c8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f50cc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4f50ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f50d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f50d4: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x4f50d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f50d8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f50d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f50dc: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x4f50dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f50e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f50e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f50e4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4f50e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f50e8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4f50e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f50ec: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f50ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f50f0: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4f50f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4f50f4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4f50f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f50f8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4f50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x4f50fc: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4f50fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f5100: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x4f5100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5104: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4f5104u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4f5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f510c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f510cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f5110: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x4f5110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x4f5114: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f5114u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5118: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x4f5118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4f511c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4f511cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f5120: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f5120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f5124: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4f5124u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5128: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x4f5128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f512c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4f512cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f5130: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x4f5130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x4f5134: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F5134u;
    SET_GPR_U32(ctx, 31, 0x4F513Cu);
    ctx->pc = 0x4F5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5134u;
    // 0x4f5138: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F5134u, 0x4F513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F513Cu;
label_4f513c:
    // 0x4f513c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4F513Cu;
    SET_GPR_U32(ctx, 31, 0x4F5144u);
    ctx->pc = 0x4F5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F513Cu;
    // 0x4f5140: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4F513Cu, 0x4F5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5144u;
label_4f5144:
    // 0x4f5144: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F5144u;
    {
        const bool branch_taken_0x4f5144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5144) {
            ctx->pc = 0x4F5148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5144u;
            // 0x4f5148: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5168u;
            goto label_4f5168;
        }
    }
    ctx->pc = 0x4F514Cu;
    // 0x4f514c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5150: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4F5150u;
    SET_GPR_U32(ctx, 31, 0x4F5158u);
    ctx->pc = 0x4F5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5150u;
    // 0x4f5154: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4F5150u, 0x4F5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5158u;
label_4f5158:
    // 0x4f5158: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f5158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f515c: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4F515Cu;
    SET_GPR_U32(ctx, 31, 0x4F5164u);
    ctx->pc = 0x4F5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F515Cu;
    // 0x4f5160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4F515Cu, 0x4F5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5164u;
label_4f5164:
    // 0x4f5164: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4f5164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5168:
    // 0x4f5168: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4f5168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f516c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4f516cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f5170: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4f5170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f5174: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4f5174u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f5178: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4f5178u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4f517c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4f517cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f5180: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4f5180u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4f5184: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4f5184u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4f5188: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4f5188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4f518c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F518Cu;
        // 0x4f5190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F518Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5194u;
    // 0x4f5194: 0x0  nop
    ctx->pc = 0x4f5194u;
    // NOP
    ctx->pc = 0x4f5198u;
}
