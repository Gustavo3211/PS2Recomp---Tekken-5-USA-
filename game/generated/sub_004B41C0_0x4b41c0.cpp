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

// Function: sub_004B41C0
// Address: 0x4b41c0 - 0x4b4510
void sub_004B41C0_0x4b41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B41C0_0x4b41c0");
#endif

    switch (ctx->pc) {
        case 0x4b41e0u: goto label_4b41e0;
        case 0x4b41f8u: goto label_4b41f8;
        case 0x4b426cu: goto label_4b426c;
        case 0x4b4310u: goto label_4b4310;
        case 0x4b43fcu: goto label_4b43fc;
        case 0x4b4404u: goto label_4b4404;
        case 0x4b440cu: goto label_4b440c;
        case 0x4b4414u: goto label_4b4414;
        case 0x4b441cu: goto label_4b441c;
        case 0x4b4424u: goto label_4b4424;
        case 0x4b442cu: goto label_4b442c;
        case 0x4b4444u: goto label_4b4444;
        case 0x4b44b8u: goto label_4b44b8;
        case 0x4b44c8u: goto label_4b44c8;
        case 0x4b44d8u: goto label_4b44d8;
        case 0x4b44e8u: goto label_4b44e8;
        default: break;
    }

    ctx->pc = 0x4b41c0u;

    // 0x4b41c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b41c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b41c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b41c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b41c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b41cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b41ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b41d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b41d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b41d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b41d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b41d8: 0x812d4c2  j           func_4B5308
    ctx->pc = 0x4B41D8u;
    ctx->pc = 0x4B41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B41D8u;
    // 0x4b41dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5308u, 0x4B41D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B41E0u;
label_4b41e0:
    // 0x4b41e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b41e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b41e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b41e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b41e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b41e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b41ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b41ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b41f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B41F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41F0u;
        // 0x4b41f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B41F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B41F8u;
label_4b41f8:
    // 0x4b41f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b41f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b41fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b4200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b4204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b420c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b420cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b4210: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b4210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b4214: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b4214u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b4218: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b421c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b421cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b4224: 0x26690d3c  addiu       $t1, $s3, 0xD3C
    ctx->pc = 0x4b4224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 3388));
    // 0x4b4228: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b422c: 0x264a0d40  addiu       $t2, $s2, 0xD40
    ctx->pc = 0x4b422cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b4230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b4234: 0x3463046e  ori         $v1, $v1, 0x46E
    ctx->pc = 0x4b4234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1134);
    // 0x4b4238: 0x34420444  ori         $v0, $v0, 0x444
    ctx->pc = 0x4b4238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1092);
    // 0x4b423c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4b423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4240: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4b4240u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b4244: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4b4244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4248: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4b4248u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b424c: 0x26b001b6  addiu       $s0, $s5, 0x1B6
    ctx->pc = 0x4b424cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 438));
    // 0x4b4250: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b4250u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b4254: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b4254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b4258: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b4258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b425c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b425cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b4260: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4b4260u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4b4264: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4B4264u;
    SET_GPR_U32(ctx, 31, 0x4B426Cu);
    ctx->pc = 0x4B4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4264u;
    // 0x4b4268: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4B4264u, 0x4B426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B426Cu;
label_4b426c:
    // 0x4b426c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b426cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b4270: 0x26a80162  addiu       $t0, $s5, 0x162
    ctx->pc = 0x4b4270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 354));
    // 0x4b4274: 0xa6a30160  sh          $v1, 0x160($s5)
    ctx->pc = 0x4b4274u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4278: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b4278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b427c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B427Cu;
    {
        const bool branch_taken_0x4b427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B427Cu;
        // 0x4b4280: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b427c) {
            ctx->pc = 0x4B4308u;
            goto label_4b4308;
        }
    }
    ctx->pc = 0x4B4284u;
    // 0x4b4284: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b4284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b4288: 0x24a40d30  addiu       $a0, $a1, 0xD30
    ctx->pc = 0x4b4288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b428c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b428cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4294: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b4294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b4298: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b4298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b429c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b429cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b42a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b42a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b42a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b42a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b42ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b42acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b42b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b42b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b42b4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4b42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x4b42b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b42bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b42bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b42c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b42c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b42c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b42c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b42c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b42cc: 0x346600ff  ori         $a2, $v1, 0xFF
    ctx->pc = 0x4b42ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x4b42d0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b42d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b42d4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x4b42d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x4b42d8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x4b42d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4b42dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b42e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b42e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b42e4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b42e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b42e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b42e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b42ec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b42ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b42f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b42f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b42f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b42f8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4b42f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b42fc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b42fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4300: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b4304: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4b4304u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b4308:
    // 0x4b4308: 0xc12564a  jal         func_495928
    ctx->pc = 0x4B4308u;
    SET_GPR_U32(ctx, 31, 0x4B4310u);
    ctx->pc = 0x4B430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4308u;
    // 0x4b430c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4B4308u, 0x4B4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4310u;
label_4b4310:
    // 0x4b4310: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x4B4310u;
    {
        const bool branch_taken_0x4b4310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4310u;
        // 0x4b4314: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4310) {
            ctx->pc = 0x4B44E8u;
            goto label_4b44e8;
        }
    }
    ctx->pc = 0x4B4318u;
    // 0x4b4318: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b4318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b431c: 0x26310d30  addiu       $s1, $s1, 0xD30
    ctx->pc = 0x4b431cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x4b4320: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b4320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4324: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b4324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4328: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b4328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b432c: 0x26b4015e  addiu       $s4, $s5, 0x15E
    ctx->pc = 0x4b432cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 350));
    // 0x4b4330: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b4330u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b4334: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4338: 0x25290d44  addiu       $t1, $t1, 0xD44
    ctx->pc = 0x4b4338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3396));
    // 0x4b433c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b433cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4340: 0x26730d3c  addiu       $s3, $s3, 0xD3C
    ctx->pc = 0x4b4340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3388));
    // 0x4b4344: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b4348: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b434c: 0x26520d40  addiu       $s2, $s2, 0xD40
    ctx->pc = 0x4b434cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b4350: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b4350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4354: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b4354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4358: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b4358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b435c: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x4b435cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x4b4360: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x4b4360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x4b4364: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x4b4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x4b4368: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4b4368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b436c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b4370: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b4370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b4374: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4378: 0x26100d34  addiu       $s0, $s0, 0xD34
    ctx->pc = 0x4b4378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x4b437c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b437cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b4380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4384: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b4384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4388: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b438c: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4b438cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4b4390: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b4390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b4394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4398: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b4398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b439c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b43a0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b43a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b43a4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4b43a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4b43a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b43ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b43acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b43b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b43b4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b43b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b43b8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4b43b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b43bc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4b43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b43c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b43c4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4b43c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b43c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b43c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b43cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b43ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b43d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b43d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b43d4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b43d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b43d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b43d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b43dc: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4b43dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4b43e0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4b43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4b43e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b43e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b43e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b43ec: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4b43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4b43f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4b43f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b43f4: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B43F4u;
    SET_GPR_U32(ctx, 31, 0x4B43FCu);
    ctx->pc = 0x4B43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B43F4u;
    // 0x4b43f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B43F4u, 0x4B43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B43FCu;
label_4b43fc:
    // 0x4b43fc: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B43FCu;
    SET_GPR_U32(ctx, 31, 0x4B4404u);
    ctx->pc = 0x4B4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B43FCu;
    // 0x4b4400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B43FCu, 0x4B4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4404u;
label_4b4404:
    // 0x4b4404: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B4404u;
    SET_GPR_U32(ctx, 31, 0x4B440Cu);
    ctx->pc = 0x4B4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4404u;
    // 0x4b4408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B4404u, 0x4B440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B440Cu;
label_4b440c:
    // 0x4b440c: 0xc12c03a  jal         func_4B00E8
    ctx->pc = 0x4B440Cu;
    SET_GPR_U32(ctx, 31, 0x4B4414u);
    ctx->pc = 0x4B4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B440Cu;
    // 0x4b4410: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B00E8u, 0x4B440Cu, 0x4B4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4414u;
label_4b4414:
    // 0x4b4414: 0xc12c188  jal         func_4B0620
    ctx->pc = 0x4B4414u;
    SET_GPR_U32(ctx, 31, 0x4B441Cu);
    ctx->pc = 0x4B4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4414u;
    // 0x4b4418: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0620u, 0x4B4414u, 0x4B441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B441Cu;
label_4b441c:
    // 0x4b441c: 0xc12c27c  jal         func_4B09F0
    ctx->pc = 0x4B441Cu;
    SET_GPR_U32(ctx, 31, 0x4B4424u);
    ctx->pc = 0x4B4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B441Cu;
    // 0x4b4420: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09F0u, 0x4B441Cu, 0x4B4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4424u;
label_4b4424:
    // 0x4b4424: 0xc12c478  jal         func_4B11E0
    ctx->pc = 0x4B4424u;
    SET_GPR_U32(ctx, 31, 0x4B442Cu);
    ctx->pc = 0x4B4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4424u;
    // 0x4b4428: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B11E0u, 0x4B4424u, 0x4B442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B442Cu;
label_4b442c:
    // 0x4b442c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4430: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b4430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4434: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4b4434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4438: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4b4438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b443c: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B443Cu;
    SET_GPR_U32(ctx, 31, 0x4B4444u);
    ctx->pc = 0x4B4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B443Cu;
    // 0x4b4440: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B443Cu, 0x4B4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4444u;
label_4b4444:
    // 0x4b4444: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b4448: 0x24840d60  addiu       $a0, $a0, 0xD60
    ctx->pc = 0x4b4448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
    // 0x4b444c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b444cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4450: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b4454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b4454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4458: 0xa4430136  sh          $v1, 0x136($v0)
    ctx->pc = 0x4b4458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 310), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b445c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b445cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b4460: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4b4460u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b4464: 0xa4a30138  sh          $v1, 0x138($a1)
    ctx->pc = 0x4b4464u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4468: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4b4468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b446c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4470: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b4470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b4474: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4474u;
    {
        const bool branch_taken_0x4b4474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4474u;
        // 0x4b4478: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4474) {
            ctx->pc = 0x4B44C0u;
            goto label_4b44c0;
        }
    }
    ctx->pc = 0x4B447Cu;
    // 0x4b447c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B447Cu;
    {
        const bool branch_taken_0x4b447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b447c) {
            ctx->pc = 0x4B4480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B447Cu;
            // 0x4b4480: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4498u;
            goto label_4b4498;
        }
    }
    ctx->pc = 0x4B4484u;
    // 0x4b4484: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4484u;
    {
        const bool branch_taken_0x4b4484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4484u;
        // 0x4b4488: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4484) {
            ctx->pc = 0x4B44B0u;
            goto label_4b44b0;
        }
    }
    ctx->pc = 0x4B448Cu;
    // 0x4b448c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4B448Cu;
    {
        const bool branch_taken_0x4b448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B448Cu;
        // 0x4b4490: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b448c) {
            ctx->pc = 0x4B44F0u;
            goto label_4b44f0;
        }
    }
    ctx->pc = 0x4B4494u;
    // 0x4b4494: 0x0  nop
    ctx->pc = 0x4b4494u;
    // NOP
label_4b4498:
    // 0x4b4498: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B4498u;
    {
        const bool branch_taken_0x4b4498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4498u;
        // 0x4b449c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4498) {
            ctx->pc = 0x4B44D0u;
            goto label_4b44d0;
        }
    }
    ctx->pc = 0x4B44A0u;
    // 0x4b44a0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B44A0u;
    {
        const bool branch_taken_0x4b44a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44A0u;
        // 0x4b44a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44a0) {
            ctx->pc = 0x4B44E0u;
            goto label_4b44e0;
        }
    }
    ctx->pc = 0x4B44A8u;
    // 0x4b44a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B44A8u;
    {
        const bool branch_taken_0x4b44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44A8u;
        // 0x4b44ac: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44a8) {
            ctx->pc = 0x4B44F0u;
            goto label_4b44f0;
        }
    }
    ctx->pc = 0x4B44B0u;
label_4b44b0:
    // 0x4b44b0: 0xc12d144  jal         func_4B4510
    ctx->pc = 0x4B44B0u;
    SET_GPR_U32(ctx, 31, 0x4B44B8u);
    ctx->pc = 0x4B44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B44B0u;
    // 0x4b44b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4510u, 0x4B44B0u, 0x4B44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B44B8u;
label_4b44b8:
    // 0x4b44b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4B44B8u;
    {
        const bool branch_taken_0x4b44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44B8u;
        // 0x4b44bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44b8) {
            ctx->pc = 0x4B44ECu;
            goto label_4b44ec;
        }
    }
    ctx->pc = 0x4B44C0u;
label_4b44c0:
    // 0x4b44c0: 0xc12d15c  jal         func_4B4570
    ctx->pc = 0x4B44C0u;
    SET_GPR_U32(ctx, 31, 0x4B44C8u);
    ctx->pc = 0x4B44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B44C0u;
    // 0x4b44c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4570u, 0x4B44C0u, 0x4B44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B44C8u;
label_4b44c8:
    // 0x4b44c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B44C8u;
    {
        const bool branch_taken_0x4b44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44C8u;
        // 0x4b44cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44c8) {
            ctx->pc = 0x4B44ECu;
            goto label_4b44ec;
        }
    }
    ctx->pc = 0x4B44D0u;
label_4b44d0:
    // 0x4b44d0: 0xc12d180  jal         func_4B4600
    ctx->pc = 0x4B44D0u;
    SET_GPR_U32(ctx, 31, 0x4B44D8u);
    ctx->pc = 0x4B44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B44D0u;
    // 0x4b44d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4600u, 0x4B44D0u, 0x4B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B44D8u;
label_4b44d8:
    // 0x4b44d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B44D8u;
    {
        const bool branch_taken_0x4b44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44D8u;
        // 0x4b44dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44d8) {
            ctx->pc = 0x4B44ECu;
            goto label_4b44ec;
        }
    }
    ctx->pc = 0x4B44E0u;
label_4b44e0:
    // 0x4b44e0: 0xc12d198  jal         func_4B4660
    ctx->pc = 0x4B44E0u;
    SET_GPR_U32(ctx, 31, 0x4B44E8u);
    ctx->pc = 0x4B44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B44E0u;
    // 0x4b44e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4660u, 0x4B44E0u, 0x4B44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B44E8u;
label_4b44e8:
    // 0x4b44e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b44e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b44ec:
    // 0x4b44ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b44ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4b44f0:
    // 0x4b44f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b44f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b44f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b44f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b44f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b44f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b44fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b44fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b4500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b4500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4504: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4504u;
        // 0x4b4508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B450Cu;
    // 0x4b450c: 0x0  nop
    ctx->pc = 0x4b450cu;
    // NOP
    ctx->pc = 0x4b4510u;
}
