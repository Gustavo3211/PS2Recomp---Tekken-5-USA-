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

// Function: sub_004D3DA0
// Address: 0x4d3da0 - 0x4d3ff0
void sub_004D3DA0_0x4d3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3DA0_0x4d3da0");
#endif

    switch (ctx->pc) {
        case 0x4d3f04u: goto label_4d3f04;
        case 0x4d3f0cu: goto label_4d3f0c;
        case 0x4d3f14u: goto label_4d3f14;
        default: break;
    }

    ctx->pc = 0x4d3da0u;

    // 0x4d3da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d3da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d3da4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d3da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d3dac: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d3dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d3db0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d3db4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d3db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d3db8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d3db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d3dbc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d3dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d3dc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d3dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d3dc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d3dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3dc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d3dcc: 0x2652104c  addiu       $s2, $s2, 0x104C
    ctx->pc = 0x4d3dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4172));
    // 0x4d3dd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d3dd4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4d3dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4d3dd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d3dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d3ddc: 0x26311050  addiu       $s1, $s1, 0x1050
    ctx->pc = 0x4d3ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4176));
    // 0x4d3de0: 0x8c43105c  lw          $v1, 0x105C($v0)
    ctx->pc = 0x4d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F105Cu));
    // 0x4d3de4: 0x26101054  addiu       $s0, $s0, 0x1054
    ctx->pc = 0x4d3de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4180));
    // 0x4d3de8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F104Cu));
    // 0x4d3dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3df0: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x4d3df0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4d3df4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d3df8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d3df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d3dfc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d3dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1050u));
    // 0x4d3e00: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d3e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3e04: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3e08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d3e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d3e0c: 0x2475d680  addiu       $s5, $v1, -0x2980
    ctx->pc = 0x4d3e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4d3e10: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d3e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d3e14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d3e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d3e18: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4d3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4d3e1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d3e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d3e20: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d3e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3e24: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3e28: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4d3e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d3e2c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d3e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d3e30: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4d3e30u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3e34: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d3e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d3e38: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d3e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d3e3c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d3e40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d3e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d3e44: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d3e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3e48: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3e4c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d3e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d3e50: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d3e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d3e54: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d3e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d3e58: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d3e5c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d3e5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d3e60: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4d3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4d3e64: 0x860a0000  lh          $t2, 0x0($s0)
    ctx->pc = 0x4d3e64u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d3e68: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4d3e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4d3e6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d3e6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d3e70: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d3e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d3e74: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x4d3e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x4d3e78: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4d3e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4d3e7c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4d3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4d3e80: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4d3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4d3e84: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4d3e84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3e88: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4d3e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4d3e8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d3e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d3e90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d3e94: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4d3e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4d3e98: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d3e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4d3e9c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d3ea0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4d3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4d3ea4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d3ea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d3ea8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4d3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4d3eac: 0xa6a52334  sh          $a1, 0x2334($s5)
    ctx->pc = 0x4d3eacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9012), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d3eb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d3eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d3eb4: 0xa6a32336  sh          $v1, 0x2336($s5)
    ctx->pc = 0x4d3eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d3eb8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d3eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d3ebc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4d3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4d3ec0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x4d3ec0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4d3ec4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4d3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4d3ec8: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4d3ec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4d3ecc: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d3ed0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d3ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d3ed4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4d3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4d3ed8: 0xa6a22338  sh          $v0, 0x2338($s5)
    ctx->pc = 0x4d3ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d3edc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d3edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3ee0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3ee4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d3ee8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d3ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3eec: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3eecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3ef0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d3ef4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d3ef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3ef8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4d3ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4d3efc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3EFCu;
    SET_GPR_U32(ctx, 31, 0x4D3F04u);
    ctx->pc = 0x4D3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3EFCu;
    // 0x4d3f00: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3EFCu, 0x4D3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3F04u;
label_4d3f04:
    // 0x4d3f04: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3F04u;
    SET_GPR_U32(ctx, 31, 0x4D3F0Cu);
    ctx->pc = 0x4D3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3F04u;
    // 0x4d3f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3F04u, 0x4D3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3F0Cu;
label_4d3f0c:
    // 0x4d3f0c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3F0Cu;
    SET_GPR_U32(ctx, 31, 0x4D3F14u);
    ctx->pc = 0x4D3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3F0Cu;
    // 0x4d3f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3F0Cu, 0x4D3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3F14u;
label_4d3f14:
    // 0x4d3f14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3f18: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x4d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x4d3f1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4d3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d3f20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d3f24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4d3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d3f28: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d3f2c: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x4d3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x4d3f30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d3f34: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4d3f38: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x4d3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x4d3f3c: 0xaea32340  sw          $v1, 0x2340($s5)
    ctx->pc = 0x4d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9024), GPR_U32(ctx, 3));
    // 0x4d3f40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d3f44: 0xaea42344  sw          $a0, 0x2344($s5)
    ctx->pc = 0x4d3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9028), GPR_U32(ctx, 4));
    // 0x4d3f48: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4d3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4d3f4c: 0xaea52348  sw          $a1, 0x2348($s5)
    ctx->pc = 0x4d3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9032), GPR_U32(ctx, 5));
    // 0x4d3f50: 0x968201b6  lhu         $v0, 0x1B6($s4)
    ctx->pc = 0x4d3f50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 438)));
    // 0x4d3f54: 0xa6a22332  sh          $v0, 0x2332($s5)
    ctx->pc = 0x4d3f54u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d3f58: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4d3f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3f5c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4D3F5Cu;
    {
        const bool branch_taken_0x4d3f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3F5Cu;
        // 0x4d3f60: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3f5c) {
            ctx->pc = 0x4D3F90u;
            goto label_4d3f90;
        }
    }
    ctx->pc = 0x4D3F64u;
    // 0x4d3f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d3f68: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4D3F68u;
    {
        const bool branch_taken_0x4d3f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3F68u;
        // 0x4d3f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3f68) {
            ctx->pc = 0x4D3FC0u;
            goto label_4d3fc0;
        }
    }
    ctx->pc = 0x4D3F70u;
    // 0x4d3f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3f78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3f7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d3f80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d3f84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d3f88: 0x3e00008  jr          $ra
    ctx->pc = 0x4D3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3F88u;
        // 0x4d3f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3F90u;
label_4d3f90:
    // 0x4d3f90: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d3f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3f94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d3f9c: 0xa6a2232c  sh          $v0, 0x232C($s5)
    ctx->pc = 0x4d3f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9004), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d3fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3fac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d3fb0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d3fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d3fb8: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4D3FB8u;
    ctx->pc = 0x4D3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3FB8u;
    // 0x4d3fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4D3FC0u;
label_4d3fc0:
    // 0x4d3fc0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d3fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d3fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3fc8: 0xa6a2232e  sh          $v0, 0x232E($s5)
    ctx->pc = 0x4d3fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d3fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3fd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3fd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d3fdc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d3fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d3fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d3fe4: 0x8122e2c  j           func_48B8B0
    ctx->pc = 0x4D3FE4u;
    ctx->pc = 0x4D3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3FE4u;
    // 0x4d3fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B8B0u, 0x4D3FE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D3FECu;
    // 0x4d3fec: 0x0  nop
    ctx->pc = 0x4d3fecu;
    // NOP
    ctx->pc = 0x4d3ff0u;
}
