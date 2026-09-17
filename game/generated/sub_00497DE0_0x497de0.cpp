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

// Function: sub_00497DE0
// Address: 0x497de0 - 0x497f28
void sub_00497DE0_0x497de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497DE0_0x497de0");
#endif

    switch (ctx->pc) {
        case 0x497e64u: goto label_497e64;
        case 0x497ec8u: goto label_497ec8;
        default: break;
    }

    ctx->pc = 0x497de0u;

    // 0x497de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x497de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x497de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x497de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x497de8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x497de8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x497dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x497decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x497df0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x497df0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x497df4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x497df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x497df8: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x497df8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x497dfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x497dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x497e00: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x497e00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x497e04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x497e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x497e08: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x497e08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x497e0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x497e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x497e10: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x497e10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x497e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x497e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x497e18: 0x26310b18  addiu       $s1, $s1, 0xB18
    ctx->pc = 0x497e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2840));
    // 0x497e1c: 0x26100b10  addiu       $s0, $s0, 0xB10
    ctx->pc = 0x497e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x497e20: 0x26940b0e  addiu       $s4, $s4, 0xB0E
    ctx->pc = 0x497e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2830));
    // 0x497e24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x497e24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B18u));
    // 0x497e28: 0x26730b0c  addiu       $s3, $s3, 0xB0C
    ctx->pc = 0x497e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2828));
    // 0x497e2c: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x497e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x497e30: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x497e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x497e34: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x497e34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x497e38: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x497e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x497e3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x497e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497e40: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x497e40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x497e44: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x497e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497e48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x497e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x497e4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497e54: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x497e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x497e58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497e5c: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x497E5Cu;
    SET_GPR_U32(ctx, 31, 0x497E64u);
    ctx->pc = 0x497E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497E5Cu;
    // 0x497e60: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x497E5Cu, 0x497E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497E64u;
label_497e64:
    // 0x497e64: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x497e64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497e68: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x497e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497e6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x497e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x497e70: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x497e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x497e74: 0x31823  negu        $v1, $v1
    ctx->pc = 0x497e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x497e78: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x497e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x497e7c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x497e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x497e80: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x497e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x497e84: 0xa6442218  sh          $a0, 0x2218($s2)
    ctx->pc = 0x497e84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8728), (uint16_t)GPR_U32(ctx, 4));
    // 0x497e88: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x497e88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497e8c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x497e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x497e90: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x497e90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x497e94: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x497e94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x497e98: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x497e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x497e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x497e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497ea0: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x497ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497ea4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x497ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x497ea8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x497ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497eac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x497eacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x497eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x497eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x497eb4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x497eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x497eb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497ebc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497ec0: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x497EC0u;
    SET_GPR_U32(ctx, 31, 0x497EC8u);
    ctx->pc = 0x497EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497EC0u;
    // 0x497ec4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x497EC0u, 0x497EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497EC8u;
label_497ec8:
    // 0x497ec8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x497ec8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497ecc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x497eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497ed0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x497ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x497ed4: 0x24c60b12  addiu       $a2, $a2, 0xB12
    ctx->pc = 0x497ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2834));
    // 0x497ed8: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x497ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x497edc: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x497edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x497ee0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x497ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x497ee4: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x497ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x497ee8: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x497ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x497eec: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x497eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x497ef0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x497ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x497ef4: 0xa645221a  sh          $a1, 0x221A($s2)
    ctx->pc = 0x497ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8730), (uint16_t)GPR_U32(ctx, 5));
    // 0x497ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497efc: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x497efcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x497f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x497f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497f04: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x497f04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497f08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x497f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x497f0c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x497f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x497f10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x497f10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x497f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497f18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x497f18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x497f1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x497f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497f20: 0x3e00008  jr          $ra
    ctx->pc = 0x497F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F20u;
        // 0x497f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497F28u;
}
