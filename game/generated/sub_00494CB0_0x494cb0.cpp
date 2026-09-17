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

// Function: sub_00494CB0
// Address: 0x494cb0 - 0x4954f8
void sub_00494CB0_0x494cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494CB0_0x494cb0");
#endif

    switch (ctx->pc) {
        case 0x494cc0u: goto label_494cc0;
        case 0x494cc8u: goto label_494cc8;
        case 0x494e58u: goto label_494e58;
        case 0x494fe8u: goto label_494fe8;
        case 0x495030u: goto label_495030;
        case 0x495260u: goto label_495260;
        case 0x4952a8u: goto label_4952a8;
        case 0x4954d8u: goto label_4954d8;
        case 0x4954e0u: goto label_4954e0;
        case 0x4954e8u: goto label_4954e8;
        case 0x4954f0u: goto label_4954f0;
        default: break;
    }

    ctx->pc = 0x494cb0u;

    // 0x494cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494cb4: 0x81252c0  j           func_494B00
    ctx->pc = 0x494CB4u;
    ctx->pc = 0x494CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494CB4u;
    // 0x494cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494B00u, 0x494CB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x494CBCu;
    // 0x494cbc: 0x0  nop
    ctx->pc = 0x494cbcu;
    // NOP
label_494cc0:
    // 0x494cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x494CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494CC0u;
        // 0x494cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494CC8u;
label_494cc8:
    // 0x494cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x494cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x494ccc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x494cccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x494cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x494cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x494cd4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x494cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x494cd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x494cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x494cdc: 0x258c0abc  addiu       $t4, $t4, 0xABC
    ctx->pc = 0x494cdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2748));
    // 0x494ce0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x494ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x494ce4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x494ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x494ce8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x494ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x494cec: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x494cecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x494cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x494cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x494cf4: 0x25ce0ac0  addiu       $t6, $t6, 0xAC0
    ctx->pc = 0x494cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2752));
    // 0x494cf8: 0x26100ac4  addiu       $s0, $s0, 0xAC4
    ctx->pc = 0x494cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2756));
    // 0x494cfc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x494cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x494d00: 0x8482011a  lh          $v0, 0x11A($a0)
    ctx->pc = 0x494d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x494d04: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x494d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x494d08: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x494d08u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x494d0c: 0x24722494  addiu       $s2, $v1, 0x2494
    ctx->pc = 0x494d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x494d10: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494d14: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x494d14u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x494d18: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494d18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494d1c: 0x2474249c  addiu       $s4, $v1, 0x249C
    ctx->pc = 0x494d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x494d20: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x494d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x494d24: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494d24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x494d28: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x494d28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x494d2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494d2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494d30: 0x24732498  addiu       $s3, $v1, 0x2498
    ctx->pc = 0x494d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x494d34: 0x8482011e  lh          $v0, 0x11E($a0)
    ctx->pc = 0x494d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x494d38: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x494d38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x494d3c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494d40: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x494d40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494d44: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x494d44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x494d48: 0x63c00  sll         $a3, $a2, 16
    ctx->pc = 0x494d48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494d4c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494d50: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494d50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x494d54: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494d54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494d58: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x494d58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x494d5c: 0x84820122  lh          $v0, 0x122($a0)
    ctx->pc = 0x494d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 290)));
    // 0x494d60: 0x95c50000  lhu         $a1, 0x0($t6)
    ctx->pc = 0x494d60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494d64: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494d68: 0xa4662324  sh          $a2, 0x2324($v1)
    ctx->pc = 0x494d68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8996), (uint16_t)GPR_U32(ctx, 6));
    // 0x494d6c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x494d6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x494d70: 0xa4652326  sh          $a1, 0x2326($v1)
    ctx->pc = 0x494d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8998), (uint16_t)GPR_U32(ctx, 5));
    // 0x494d74: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x494d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x494d78: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494d78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494d7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x494d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x494d80: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x494d80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494d84: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x494d84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x494d88: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x494d88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494d8c: 0xa4662328  sh          $a2, 0x2328($v1)
    ctx->pc = 0x494d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9000), (uint16_t)GPR_U32(ctx, 6));
    // 0x494d90: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x494d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494d94: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x494d94u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x494d98: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x494d98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x494d9c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x494d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x494da0: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x494da0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494da4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494da8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x494da8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494dac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494dacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494db0: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x494db0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x494db4: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x494db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x494db8: 0x22a8825  or          $s1, $s1, $t2
    ctx->pc = 0x494db8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 10));
    // 0x494dbc: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x494dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x494dc0: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x494dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x494dc4: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x494dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x494dc8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x494dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x494dcc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x494dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x494dd0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494dd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494dd8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494ddc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x494ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x494de0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494de4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x494de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x494de8: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x494de8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x494dec: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x494decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x494df0: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494df0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494df4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x494df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x494df8: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x494df8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494dfc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494e00: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x494e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
    // 0x494e04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494e08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494e0c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x494e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x494e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494e14: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x494e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x494e18: 0x1e37824  and         $t7, $t7, $v1
    ctx->pc = 0x494e18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x494e1c: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x494e1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x494e20: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x494e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x494e24: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x494e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x494e28: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x494e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494e2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x494e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x494e30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x494e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x494e34: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x494e34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x494e38: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x494e38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x494e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x494e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x494e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494e48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x494e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494e4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x494e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494e50: 0x3e00008  jr          $ra
    ctx->pc = 0x494E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494E50u;
        // 0x494e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494E58u;
label_494e58:
    // 0x494e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x494e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x494e5c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x494e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x494e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x494e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x494e64: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x494e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x494e68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x494e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x494e6c: 0x258c0abc  addiu       $t4, $t4, 0xABC
    ctx->pc = 0x494e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2748));
    // 0x494e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x494e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x494e74: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x494e74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x494e78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x494e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x494e7c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x494e7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x494e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x494e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x494e84: 0x25ce0ac0  addiu       $t6, $t6, 0xAC0
    ctx->pc = 0x494e84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2752));
    // 0x494e88: 0x26100ac4  addiu       $s0, $s0, 0xAC4
    ctx->pc = 0x494e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2756));
    // 0x494e8c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x494e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x494e90: 0x8482011a  lh          $v0, 0x11A($a0)
    ctx->pc = 0x494e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x494e94: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x494e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x494e98: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x494e98u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x494e9c: 0x24722494  addiu       $s2, $v1, 0x2494
    ctx->pc = 0x494e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x494ea0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494ea4: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x494ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x494ea8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494ea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494eac: 0x2474249c  addiu       $s4, $v1, 0x249C
    ctx->pc = 0x494eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x494eb0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x494eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x494eb4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494eb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x494eb8: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x494eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x494ebc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494ec0: 0x24732498  addiu       $s3, $v1, 0x2498
    ctx->pc = 0x494ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x494ec4: 0x8482011e  lh          $v0, 0x11E($a0)
    ctx->pc = 0x494ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x494ec8: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x494ec8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x494ecc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494ed0: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x494ed0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494ed4: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x494ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x494ed8: 0x63c00  sll         $a3, $a2, 16
    ctx->pc = 0x494ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494edc: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494edcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494ee0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x494ee4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494ee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494ee8: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x494ee8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x494eec: 0x84820122  lh          $v0, 0x122($a0)
    ctx->pc = 0x494eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 290)));
    // 0x494ef0: 0x95c50000  lhu         $a1, 0x0($t6)
    ctx->pc = 0x494ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494ef4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x494ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x494ef8: 0xa4662324  sh          $a2, 0x2324($v1)
    ctx->pc = 0x494ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8996), (uint16_t)GPR_U32(ctx, 6));
    // 0x494efc: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x494efcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x494f00: 0xa4652326  sh          $a1, 0x2326($v1)
    ctx->pc = 0x494f00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8998), (uint16_t)GPR_U32(ctx, 5));
    // 0x494f04: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x494f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x494f08: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494f08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494f0c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x494f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x494f10: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x494f10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494f14: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x494f14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x494f18: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x494f18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494f1c: 0xa4662328  sh          $a2, 0x2328($v1)
    ctx->pc = 0x494f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9000), (uint16_t)GPR_U32(ctx, 6));
    // 0x494f20: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x494f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494f24: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x494f24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x494f28: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x494f28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x494f2c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x494f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x494f30: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x494f30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494f34: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494f38: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x494f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494f3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494f40: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x494f40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x494f44: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x494f44u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x494f48: 0x22a8825  or          $s1, $s1, $t2
    ctx->pc = 0x494f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 10));
    // 0x494f4c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x494f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x494f50: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x494f50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x494f54: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x494f54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x494f58: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x494f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x494f5c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x494f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x494f60: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494f64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494f68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494f6c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x494f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x494f70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494f74: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x494f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x494f78: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x494f78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x494f7c: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x494f7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x494f80: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494f80u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494f84: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x494f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x494f88: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x494f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494f8c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x494f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x494f90: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x494f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
    // 0x494f94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494f94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494f98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494f9c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x494f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x494fa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494fa4: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x494fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x494fa8: 0x1e37824  and         $t7, $t7, $v1
    ctx->pc = 0x494fa8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x494fac: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x494facu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x494fb0: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x494fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x494fb4: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x494fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x494fb8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x494fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x494fbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x494fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x494fc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x494fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x494fc4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x494fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x494fc8: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x494fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x494fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x494fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x494fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494fd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x494fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494fdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x494fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x494FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FE0u;
        // 0x494fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494FE8u;
label_494fe8:
    // 0x494fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x494fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x494fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x494fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x494ff0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x494ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x494ff4: 0x26100abc  addiu       $s0, $s0, 0xABC
    ctx->pc = 0x494ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2748));
    // 0x494ff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x494ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x494ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x494ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x495004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x495004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x495008: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x495008u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49500c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x495010: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x495010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x495014: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x495014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x495018: 0x26350018  addiu       $s5, $s1, 0x18
    ctx->pc = 0x495018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x49501c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495020: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x495020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x495024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x495024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x495028: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x495028u;
    SET_GPR_U32(ctx, 31, 0x495030u);
    ctx->pc = 0x49502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495028u;
    // 0x49502c: 0x26520ac0  addiu       $s2, $s2, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x495028u, 0x495030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495030u;
label_495030:
    // 0x495030: 0x8623011a  lh          $v1, 0x11A($s1)
    ctx->pc = 0x495030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x495034: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x495034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x495038: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x495038u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49503c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x49503cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x495040: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495044: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x495044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495048: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x495048u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49504c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x49504cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x495050: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x495050u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x495054: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x495054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x495058: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x495058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x49505c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x49505cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x495060: 0x25ef0ac4  addiu       $t7, $t7, 0xAC4
    ctx->pc = 0x495060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2756));
    // 0x495064: 0x25ce0ab0  addiu       $t6, $t6, 0xAB0
    ctx->pc = 0x495064u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2736));
    // 0x495068: 0x8623011e  lh          $v1, 0x11E($s1)
    ctx->pc = 0x495068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x49506c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49506cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x495070: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x495070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x495074: 0x25ad0ab8  addiu       $t5, $t5, 0xAB8
    ctx->pc = 0x495074u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2744));
    // 0x495078: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49507c: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x49507cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x495080: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x495080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x495084: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x495084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x495088: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x495088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x49508c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x49508cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x495090: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x495090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x495094: 0x86230122  lh          $v1, 0x122($s1)
    ctx->pc = 0x495094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 290)));
    // 0x495098: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x495098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x49509c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x49509cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4950a0: 0x24b8249c  addiu       $t8, $a1, 0x249C
    ctx->pc = 0x4950a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 9372));
    // 0x4950a4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4950a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4950a8: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4950a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4950ac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4950acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4950b0: 0x96530000  lhu         $s3, 0x0($s2)
    ctx->pc = 0x4950b0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4950b4: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4950b4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4950b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4950b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4950bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4950bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4950c0: 0x24b72494  addiu       $s7, $a1, 0x2494
    ctx->pc = 0x4950c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 9364));
    // 0x4950c4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x4950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x4950c8: 0x24b62498  addiu       $s6, $a1, 0x2498
    ctx->pc = 0x4950c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x4950cc: 0x85ec0000  lh          $t4, 0x0($t7)
    ctx->pc = 0x4950ccu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4950d0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4950d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4950d4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4950d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4950d8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4950d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4950dc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4950dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4950e0: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x4950e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x4950e4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4950e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4950e8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x4950e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4950ec: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x4950ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4950f0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4950f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4950f4: 0xa4b32326  sh          $s3, 0x2326($a1)
    ctx->pc = 0x4950f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8998), (uint16_t)GPR_U32(ctx, 19));
    // 0x4950f8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4950f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4950fc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4950fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495100: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495104: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x495104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x495108: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x495108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x49510c: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x49510cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x495110: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x495110u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x495114: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x495114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x495118: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x495118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x49511c: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x49511cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x495120: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x495120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x495124: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x495124u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x495128: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x495128u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x49512c: 0xa4a22324  sh          $v0, 0x2324($a1)
    ctx->pc = 0x49512cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8996), (uint16_t)GPR_U32(ctx, 2));
    // 0x495130: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x495130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x495134: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x495134u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x495138: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x495138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49513c: 0xa4a22328  sh          $v0, 0x2328($a1)
    ctx->pc = 0x49513cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9000), (uint16_t)GPR_U32(ctx, 2));
    // 0x495140: 0x86230130  lh          $v1, 0x130($s1)
    ctx->pc = 0x495140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x495144: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x495144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x495148: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x495148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x49514c: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x49514cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x495150: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x495150u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x495154: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x495154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x495158: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x495158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49515c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x49515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x495160: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x495160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x495164: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x495164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x495168: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x495168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x49516c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49516cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495170: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x495170u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x495174: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x495174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x495178: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x495178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49517c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x495180: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x495180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x495184: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x495184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x495188: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x495188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49518c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49518cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x495190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x495190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x495194: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x495194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x495198: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49519c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4951a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4951a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4951a4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4951a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4951a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4951a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4951ac: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x4951acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4951b0: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x4951b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4951b4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4951b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4951b8: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x4951b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4951bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4951bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4951c0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4951c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4951c4: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4951c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4951c8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4951c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4951cc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4951ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4951d0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4951d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4951d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4951d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4951d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4951d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4951dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4951dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4951e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4951e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4951e4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4951e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4951e8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4951e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4951ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4951ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4951f0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4951f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4951f4: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x4951f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4951f8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4951f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4951fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4951fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x495200: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x495200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x495204: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x495204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x495208: 0x95e70000  lhu         $a3, 0x0($t7)
    ctx->pc = 0x495208u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x49520c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x49520cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x495210: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x495210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x495214: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x495214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495218: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49521c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49521cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x495220: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x495220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x495224: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x495224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x495228: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x495228u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x49522c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x49522cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x495230: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x495230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x495234: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x495234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x495238: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x495238u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x49523c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x495240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x495240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x495244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495248: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x495248u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49524c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x49524cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x495250: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x495250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x495254: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x495254u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x495258: 0x3e00008  jr          $ra
    ctx->pc = 0x495258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495258u;
        // 0x49525c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495260u;
label_495260:
    // 0x495260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x495260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x495264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x495264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x495268: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x495268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49526c: 0x26100abc  addiu       $s0, $s0, 0xABC
    ctx->pc = 0x49526cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2748));
    // 0x495270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x495270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x495274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x495274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49527c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x495280: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x495280u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x495284: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x495284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x495288: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x495288u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x49528c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x495290: 0x26350018  addiu       $s5, $s1, 0x18
    ctx->pc = 0x495290u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x495294: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x495294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495298: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x495298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x49529c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4952a0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4952A0u;
    SET_GPR_U32(ctx, 31, 0x4952A8u);
    ctx->pc = 0x4952A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4952A0u;
    // 0x4952a4: 0x26520ac0  addiu       $s2, $s2, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4952A0u, 0x4952A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952A8u;
label_4952a8:
    // 0x4952a8: 0x8623011a  lh          $v1, 0x11A($s1)
    ctx->pc = 0x4952a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x4952ac: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4952acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4952b0: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x4952b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4952b4: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4952b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4952b8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4952b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4952bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4952bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4952c0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4952c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4952c4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4952c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4952c8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4952c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4952cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4952ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4952d0: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x4952d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x4952d4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4952d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4952d8: 0x25ef0ac4  addiu       $t7, $t7, 0xAC4
    ctx->pc = 0x4952d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2756));
    // 0x4952dc: 0x25ce0ab0  addiu       $t6, $t6, 0xAB0
    ctx->pc = 0x4952dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2736));
    // 0x4952e0: 0x8623011e  lh          $v1, 0x11E($s1)
    ctx->pc = 0x4952e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x4952e4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4952e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4952e8: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4952e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4952ec: 0x25ad0ab8  addiu       $t5, $t5, 0xAB8
    ctx->pc = 0x4952ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2744));
    // 0x4952f0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4952f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4952f4: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x4952f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4952f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4952f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4952fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4952fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x495300: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x495300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x495304: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x495304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x495308: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x495308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49530c: 0x86230122  lh          $v1, 0x122($s1)
    ctx->pc = 0x49530cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 290)));
    // 0x495310: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x495310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x495314: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x495314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x495318: 0x24b8249c  addiu       $t8, $a1, 0x249C
    ctx->pc = 0x495318u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 9372));
    // 0x49531c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495320: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x495320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x495324: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x495324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x495328: 0x96530000  lhu         $s3, 0x0($s2)
    ctx->pc = 0x495328u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49532c: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x49532cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x495330: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x495330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x495334: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x495334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x495338: 0x24b72494  addiu       $s7, $a1, 0x2494
    ctx->pc = 0x495338u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 9364));
    // 0x49533c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x49533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x495340: 0x24b62498  addiu       $s6, $a1, 0x2498
    ctx->pc = 0x495340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    // 0x495344: 0x85ec0000  lh          $t4, 0x0($t7)
    ctx->pc = 0x495344u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x495348: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x495348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49534c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49534cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495350: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495354: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x495354u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x495358: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x495358u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x49535c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x49535cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x495360: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x495360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x495364: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x495364u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x495368: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x495368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49536c: 0xa4b32326  sh          $s3, 0x2326($a1)
    ctx->pc = 0x49536cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8998), (uint16_t)GPR_U32(ctx, 19));
    // 0x495370: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x495370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x495374: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x495374u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495378: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49537c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x49537cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x495380: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x495380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x495384: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x495384u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x495388: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x495388u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x49538c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49538cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x495390: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x495390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x495394: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x495394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x495398: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x495398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49539c: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x49539cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x4953a0: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x4953a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x4953a4: 0xa4a22324  sh          $v0, 0x2324($a1)
    ctx->pc = 0x4953a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8996), (uint16_t)GPR_U32(ctx, 2));
    // 0x4953a8: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x4953a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x4953ac: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4953acu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4953b0: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4953b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4953b4: 0xa4a22328  sh          $v0, 0x2328($a1)
    ctx->pc = 0x4953b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9000), (uint16_t)GPR_U32(ctx, 2));
    // 0x4953b8: 0x86230130  lh          $v1, 0x130($s1)
    ctx->pc = 0x4953b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4953bc: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x4953bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4953c0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x4953c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x4953c4: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x4953c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x4953c8: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x4953c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x4953cc: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4953ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4953d0: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4953d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4953d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4953d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4953d8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4953d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4953dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4953dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4953e0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4953e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4953e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4953e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4953e8: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4953e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4953ec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4953ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4953f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4953f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4953f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4953f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4953f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4953f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4953fc: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4953fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x495400: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x495400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x495404: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x495404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x495408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x495408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49540c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x495410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x495414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x495418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x495418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49541c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x49541cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x495420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x495420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495424: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x495424u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x495428: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x495428u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49542c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49542cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x495430: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x495430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x495434: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x495434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x495438: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x495438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x49543c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x49543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x495440: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x495440u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x495444: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495448: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x495448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x49544c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49544cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x495450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x495454: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x495454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495458: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x495458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49545c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x49545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x495460: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x495460u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x495464: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x495464u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x495468: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x495468u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49546c: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x49546cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495470: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x495470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x495474: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x495474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x495478: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x495478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49547c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x49547cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x495480: 0x95e70000  lhu         $a3, 0x0($t7)
    ctx->pc = 0x495480u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x495484: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x495484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x495488: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x495488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x49548c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49548cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x495490: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x495490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x495494: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x495494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x495498: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x495498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49549c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x49549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4954a0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4954a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4954a4: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x4954a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x4954a8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4954a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4954ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4954acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4954b0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4954b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4954b4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4954b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4954b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4954b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4954bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4954bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4954c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4954c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4954c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4954c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4954c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4954c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4954cc: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x4954ccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x4954d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4954D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4954D0u;
        // 0x4954d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954D8u;
label_4954d8:
    // 0x4954d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4954D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954E0u;
label_4954e0:
    // 0x4954e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4954E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954E8u;
label_4954e8:
    // 0x4954e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4954E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954F0u;
label_4954f0:
    // 0x4954f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4954F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954F8u;
}
