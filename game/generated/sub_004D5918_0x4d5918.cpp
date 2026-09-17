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

// Function: sub_004D5918
// Address: 0x4d5918 - 0x4d6420
void sub_004D5918_0x4d5918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5918_0x4d5918");
#endif

    switch (ctx->pc) {
        case 0x4d5930u: goto label_4d5930;
        case 0x4d5940u: goto label_4d5940;
        case 0x4d5b78u: goto label_4d5b78;
        case 0x4d5b88u: goto label_4d5b88;
        case 0x4d5b9cu: goto label_4d5b9c;
        case 0x4d5be0u: goto label_4d5be0;
        case 0x4d5bf0u: goto label_4d5bf0;
        case 0x4d5c04u: goto label_4d5c04;
        case 0x4d5c48u: goto label_4d5c48;
        case 0x4d5c58u: goto label_4d5c58;
        case 0x4d5c6cu: goto label_4d5c6c;
        case 0x4d5ca4u: goto label_4d5ca4;
        case 0x4d5cb4u: goto label_4d5cb4;
        case 0x4d5cc8u: goto label_4d5cc8;
        case 0x4d5d3cu: goto label_4d5d3c;
        case 0x4d5de0u: goto label_4d5de0;
        case 0x4d5df4u: goto label_4d5df4;
        case 0x4d5e20u: goto label_4d5e20;
        case 0x4d5ec8u: goto label_4d5ec8;
        case 0x4d5f18u: goto label_4d5f18;
        case 0x4d5f94u: goto label_4d5f94;
        case 0x4d5fb0u: goto label_4d5fb0;
        case 0x4d6064u: goto label_4d6064;
        case 0x4d6074u: goto label_4d6074;
        case 0x4d61dcu: goto label_4d61dc;
        case 0x4d61ecu: goto label_4d61ec;
        case 0x4d6200u: goto label_4d6200;
        case 0x4d6220u: goto label_4d6220;
        case 0x4d6230u: goto label_4d6230;
        case 0x4d6244u: goto label_4d6244;
        case 0x4d6264u: goto label_4d6264;
        case 0x4d6274u: goto label_4d6274;
        case 0x4d6288u: goto label_4d6288;
        case 0x4d6310u: goto label_4d6310;
        case 0x4d6318u: goto label_4d6318;
        case 0x4d6320u: goto label_4d6320;
        case 0x4d6358u: goto label_4d6358;
        case 0x4d63c8u: goto label_4d63c8;
        default: break;
    }

    ctx->pc = 0x4d5918u;

    // 0x4d5918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d591c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d591cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5928: 0x8135902  j           func_4D6408
    ctx->pc = 0x4D5928u;
    ctx->pc = 0x4D592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5928u;
    // 0x4d592c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6408u;
    goto label_4d6408;
    ctx->pc = 0x4D5930u;
label_4d5930:
    // 0x4d5930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5938: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5938u;
        // 0x4d593c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D5940u;
label_4d5940:
    // 0x4d5940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d5940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d5944: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d5948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d594c: 0x24511078  addiu       $s1, $v0, 0x1078
    ctx->pc = 0x4d594cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
    // 0x4d5950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d5950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d5954: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4d5954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5958: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d5958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d595c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d595cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d5960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d5964: 0x2663015e  addiu       $v1, $s3, 0x15E
    ctx->pc = 0x4d5964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4d5968: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d5968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d596c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d5970: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d5970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d5974: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d5974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d5978: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4d597c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d597cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4d5980: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d5980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d5984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d5988: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d5988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d598c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d598cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d5990: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d5994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5998: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d599c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d59a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d59a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d59a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d59a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d59a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d59ac: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d59acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d59b0: 0x96650164  lhu         $a1, 0x164($s3)
    ctx->pc = 0x4d59b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4d59b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d59b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d59bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d59bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d59c0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d59c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d59c4: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4d59c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d59c8: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4d59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4d59cc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d59ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d59d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D59D0u;
    {
        const bool branch_taken_0x4d59d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D59D0u;
        // 0x4d59d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d59d0) {
            ctx->pc = 0x4D5A08u;
            goto label_4d5a08;
        }
    }
    ctx->pc = 0x4D59D8u;
    // 0x4d59d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d59d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d59dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d59dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d59e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d59e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d59e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d59e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d59e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d59e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d59ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d59ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d59f0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d59f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d59f4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d59f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d59f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d59f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d59fc: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D59FCu;
    ctx->pc = 0x4D5A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D59FCu;
    // 0x4d5a00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5A04u;
    // 0x4d5a04: 0x0  nop
    ctx->pc = 0x4d5a04u;
    // NOP
label_4d5a08:
    // 0x4d5a08: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d5a0c: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4d5a0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4d5a10: 0x8c46108c  lw          $a2, 0x108C($v0)
    ctx->pc = 0x4d5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F108Cu));
    // 0x4d5a14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d5a18: 0x24561080  addiu       $s6, $v0, 0x1080
    ctx->pc = 0x4d5a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
    // 0x4d5a1c: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d5a1cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4d5a20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d5a24: 0x27d51084  addiu       $s5, $fp, 0x1084
    ctx->pc = 0x4d5a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4228));
    // 0x4d5a28: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4d5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1080u));
    // 0x4d5a2c: 0x26f41088  addiu       $s4, $s7, 0x1088
    ctx->pc = 0x4d5a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4232));
    // 0x4d5a30: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5a34: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4d5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d5a38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5a38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5a40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5a44: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4d5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d5a48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5a4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d5a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d5a50: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d5a50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4d5a54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5a58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d5a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d5a5c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d5a5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d5a60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4d5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4d5a64: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4d5a64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d5a68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5a6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5a70: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5a74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d5a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d5a78: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d5a7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d5a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d5a80: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4d5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4d5a84: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4d5a84u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d5a88: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5a8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5a90: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5a94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d5a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d5a98: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d5a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4d5a9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d5a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d5aa0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4d5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4d5aa4: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4d5aa4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d5aa8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5aac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5ab0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4d5ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d5ab4: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4d5ab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4d5ab8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d5ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4d5abc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4d5ac0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4d5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4d5ac4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5ac8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5acc: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4d5accu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d5ad0: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4d5ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4d5ad4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4d5ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4d5ad8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d5adc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4d5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4d5ae0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d5ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d5ae4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5ae8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4d5ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d5aec: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4d5aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4d5af0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4d5af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4d5af4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4d5af8: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4d5af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4d5afc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5b00: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d5b00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d5b04: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4d5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4d5b08: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d5b08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d5b0c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d5b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5b10: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4d5b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4d5b14: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5b18: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4d5b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d5b1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5b20: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4d5b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5b24: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x4d5b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4d5b28: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4D5B28u;
    {
        const bool branch_taken_0x4d5b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5b28) {
            ctx->pc = 0x4D5B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5B28u;
            // 0x4d5b2c: 0x8662011c  lh          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5C10u;
            goto label_4d5c10;
        }
    }
    ctx->pc = 0x4D5B30u;
    // 0x4d5b30: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x4d5b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d5b34: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D5B34u;
    {
        const bool branch_taken_0x4d5b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5b34) {
            ctx->pc = 0x4D5B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5B34u;
            // 0x4d5b38: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5BA8u;
            goto label_4d5ba8;
        }
    }
    ctx->pc = 0x4D5B3Cu;
    // 0x4d5b3c: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x4d5b3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4d5b40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5b44: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d5b44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d5b48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5b4c: 0x2610107c  addiu       $s0, $s0, 0x107C
    ctx->pc = 0x4d5b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4220));
    // 0x4d5b50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5b54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5b5c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5b60: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d5b64: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5b68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5b6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5b70: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D5B70u;
    SET_GPR_U32(ctx, 31, 0x4D5B78u);
    ctx->pc = 0x4D5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5B70u;
    // 0x4d5b74: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D5B70u, 0x4D5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5B78u;
label_4d5b78:
    // 0x4d5b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5b7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d5b80: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D5B80u;
    SET_GPR_U32(ctx, 31, 0x4D5B88u);
    ctx->pc = 0x4D5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5B80u;
    // 0x4d5b84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D5B80u, 0x4D5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5B88u;
label_4d5b88:
    // 0x4d5b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5b8c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5b90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d5b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5b94: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4D5B94u;
    SET_GPR_U32(ctx, 31, 0x4D5B9Cu);
    ctx->pc = 0x4D5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5B94u;
    // 0x4d5b98: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4D5B94u, 0x4D5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5B9Cu;
label_4d5b9c:
    // 0x4d5b9c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4D5B9Cu;
    {
        const bool branch_taken_0x4d5b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5B9Cu;
        // 0x4d5ba0: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5b9c) {
            ctx->pc = 0x4D5CCCu;
            goto label_4d5ccc;
        }
    }
    ctx->pc = 0x4D5BA4u;
    // 0x4d5ba4: 0x0  nop
    ctx->pc = 0x4d5ba4u;
    // NOP
label_4d5ba8:
    // 0x4d5ba8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5bac: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d5bacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d5bb0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5bb4: 0x2610107c  addiu       $s0, $s0, 0x107C
    ctx->pc = 0x4d5bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4220));
    // 0x4d5bb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5bbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5bc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5bc4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5bc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5bc8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d5bcc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5bd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5bd4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5bd8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D5BD8u;
    SET_GPR_U32(ctx, 31, 0x4D5BE0u);
    ctx->pc = 0x4D5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5BD8u;
    // 0x4d5bdc: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D5BD8u, 0x4D5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5BE0u;
label_4d5be0:
    // 0x4d5be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5be4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d5be8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D5BE8u;
    SET_GPR_U32(ctx, 31, 0x4D5BF0u);
    ctx->pc = 0x4D5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5BE8u;
    // 0x4d5bec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D5BE8u, 0x4D5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5BF0u;
label_4d5bf0:
    // 0x4d5bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5bf4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5bf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d5bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5bfc: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D5BFCu;
    SET_GPR_U32(ctx, 31, 0x4D5C04u);
    ctx->pc = 0x4D5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5BFCu;
    // 0x4d5c00: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D5BFCu, 0x4D5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5C04u;
label_4d5c04:
    // 0x4d5c04: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4D5C04u;
    {
        const bool branch_taken_0x4d5c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5C04u;
        // 0x4d5c08: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5c04) {
            ctx->pc = 0x4D5CCCu;
            goto label_4d5ccc;
        }
    }
    ctx->pc = 0x4D5C0Cu;
    // 0x4d5c0c: 0x0  nop
    ctx->pc = 0x4d5c0cu;
    // NOP
label_4d5c10:
    // 0x4d5c10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5c14: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d5c14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d5c18: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5c1c: 0x2610107c  addiu       $s0, $s0, 0x107C
    ctx->pc = 0x4d5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4220));
    // 0x4d5c20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5c24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5c28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5c2c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5c30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d5c34: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5c38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5c3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5c40: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D5C40u;
    SET_GPR_U32(ctx, 31, 0x4D5C48u);
    ctx->pc = 0x4D5C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5C40u;
    // 0x4d5c44: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D5C40u, 0x4D5C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5C48u;
label_4d5c48:
    // 0x4d5c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5c4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d5c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d5c50: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D5C50u;
    SET_GPR_U32(ctx, 31, 0x4D5C58u);
    ctx->pc = 0x4D5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5C50u;
    // 0x4d5c54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D5C50u, 0x4D5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5C58u;
label_4d5c58:
    // 0x4d5c58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5c5c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5c60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d5c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5c64: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D5C64u;
    SET_GPR_U32(ctx, 31, 0x4D5C6Cu);
    ctx->pc = 0x4D5C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5C64u;
    // 0x4d5c68: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D5C64u, 0x4D5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5C6Cu;
label_4d5c6c:
    // 0x4d5c6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5c70: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4d5c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4d5c74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5c78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5c7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5c80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5c88: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5c8c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d5c90: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d5c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d5c94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5c98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5c9c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D5C9Cu;
    SET_GPR_U32(ctx, 31, 0x4D5CA4u);
    ctx->pc = 0x4D5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5C9Cu;
    // 0x4d5ca0: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D5C9Cu, 0x4D5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5CA4u;
label_4d5ca4:
    // 0x4d5ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ca8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d5cac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D5CACu;
    SET_GPR_U32(ctx, 31, 0x4D5CB4u);
    ctx->pc = 0x4D5CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5CACu;
    // 0x4d5cb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D5CACu, 0x4D5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5CB4u;
label_4d5cb4:
    // 0x4d5cb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5cb8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5cbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d5cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5cc0: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D5CC0u;
    SET_GPR_U32(ctx, 31, 0x4D5CC8u);
    ctx->pc = 0x4D5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5CC0u;
    // 0x4d5cc4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D5CC0u, 0x4D5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5CC8u;
label_4d5cc8:
    // 0x4d5cc8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4d5cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4d5ccc:
    // 0x4d5ccc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d5cd0: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4d5cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4d5cd4: 0x94471080  lhu         $a3, 0x1080($v0)
    ctx->pc = 0x4d5cd4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F1080u));
    // 0x4d5cd8: 0x97c51084  lhu         $a1, 0x1084($fp)
    ctx->pc = 0x4d5cd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4228)));
    // 0x4d5cdc: 0x26282494  addiu       $t0, $s1, 0x2494
    ctx->pc = 0x4d5cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4d5ce0: 0x96e61088  lhu         $a2, 0x1088($s7)
    ctx->pc = 0x4d5ce0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4232)));
    // 0x4d5ce4: 0x26292498  addiu       $t1, $s1, 0x2498
    ctx->pc = 0x4d5ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4d5ce8: 0x262a249c  addiu       $t2, $s1, 0x249C
    ctx->pc = 0x4d5ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4d5cec: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4d5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d5cf0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d5cf4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d5cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5cf8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d5cfc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4d5cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4d5d00: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4d5d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4d5d04: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4d5d04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4d5d08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d5d08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d5d0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d5d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d5d10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d5d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5d14: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4d5d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4d5d18: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d5d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d5d1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d5d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d5d20: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4d5d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4d5d24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d5d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d5d28: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d5d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d5d2c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4d5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4d5d30: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d5d34: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4D5D34u;
    SET_GPR_U32(ctx, 31, 0x4D5D3Cu);
    ctx->pc = 0x4D5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5D34u;
    // 0x4d5d38: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4D5D34u, 0x4D5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5D3Cu;
label_4d5d3c:
    // 0x4d5d3c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d5d40: 0x24441078  addiu       $a0, $v0, 0x1078
    ctx->pc = 0x4d5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
    // 0x4d5d44: 0x862224a0  lh          $v0, 0x24A0($s1)
    ctx->pc = 0x4d5d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4d5d48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1078u));
    // 0x4d5d4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d5d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d5d50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5d54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5d58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d5d5c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d5d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d5d60: 0x2442f556  addiu       $v0, $v0, -0xAAA
    ctx->pc = 0x4d5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964566));
    // 0x4d5d64: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D5D64u;
    {
        const bool branch_taken_0x4d5d64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d5d64) {
            ctx->pc = 0x4D5D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5D64u;
            // 0x4d5d68: 0x266301bc  addiu       $v1, $s3, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5DA0u;
            goto label_4d5da0;
        }
    }
    ctx->pc = 0x4D5D6Cu;
    // 0x4d5d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d5d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d5d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d5d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5d80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d5d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5d84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d5d84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d5d88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d5d88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d5d8c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d5d8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d5d90: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d5d90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d5d94: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d5d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d5d98: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D5D98u;
    ctx->pc = 0x4D5D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5D98u;
    // 0x4d5d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5DA0u;
label_4d5da0:
    // 0x4d5da0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5da4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d5da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d5da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5db0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d5db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d5db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5db8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d5db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d5dbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d5dbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5dc0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d5dc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d5dc4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d5dc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d5dc8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d5dc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d5dcc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d5dccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d5dd0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d5dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d5dd4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d5dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5dd8: 0x8135778  j           func_4D5DE0
    ctx->pc = 0x4D5DD8u;
    ctx->pc = 0x4D5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5DD8u;
    // 0x4d5ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5DE0u;
    goto label_4d5de0;
    ctx->pc = 0x4D5DE0u;
label_4d5de0:
    // 0x4d5de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d5de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d5de8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d5dec: 0xc12e90a  jal         func_4BA428
    ctx->pc = 0x4D5DECu;
    SET_GPR_U32(ctx, 31, 0x4D5DF4u);
    ctx->pc = 0x4D5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5DECu;
    // 0x4d5df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA428u, 0x4D5DECu, 0x4D5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5DF4u;
label_4d5df4:
    // 0x4d5df4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4d5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4d5df8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4d5df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4d5dfc: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4d5dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d5e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5e08: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d5e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d5e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5e10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d5e14: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d5e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5e18: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D5E18u;
    ctx->pc = 0x4D5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5E18u;
    // 0x4d5e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5E20u;
label_4d5e20:
    // 0x4d5e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d5e24: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d5e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d5e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d5e2c: 0x24a51078  addiu       $a1, $a1, 0x1078
    ctx->pc = 0x4d5e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4216));
    // 0x4d5e30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d5e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5e34: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d5e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5e38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1078u));
    // 0x4d5e3c: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x4d5e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4d5e40: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x4d5e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4d5e44: 0x24e801bc  addiu       $t0, $a3, 0x1BC
    ctx->pc = 0x4d5e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4d5e48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d5e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5e50: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d5e54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5e58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d5e5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5e60: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d5e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d5e64: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x4d5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x4d5e68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d5e6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5e70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d5e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d5e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5e78: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d5e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d5e7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d5e80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d5e84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5e88: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d5e8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d5e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d5e90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d5e94: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d5e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d5e98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d5e9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4d5ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d5ea4: 0x94637a72  lhu         $v1, 0x7A72($v1)
    ctx->pc = 0x4d5ea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31346)));
    // 0x4d5ea8: 0xa4e9014a  sh          $t1, 0x14A($a3)
    ctx->pc = 0x4d5ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 9));
    // 0x4d5eac: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x4d5eacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d5eb0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4d5eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d5eb4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d5eb8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4d5eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5ebc: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D5EBCu;
    ctx->pc = 0x4D5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5EBCu;
    // 0x4d5ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5EC4u;
    // 0x4d5ec4: 0x0  nop
    ctx->pc = 0x4d5ec4u;
    // NOP
label_4d5ec8:
    // 0x4d5ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d5ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d5ecc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d5eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d5ed4: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4d5ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4d5ed8: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4d5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4d5edc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d5edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d5ee0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d5ee4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4d5ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d5ee8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D5EE8u;
    {
        const bool branch_taken_0x4d5ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5EE8u;
        // 0x4d5eec: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5ee8) {
            ctx->pc = 0x4D5F00u;
            goto label_4d5f00;
        }
    }
    ctx->pc = 0x4D5EF0u;
    // 0x4d5ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d5ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5ef4: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D5EF4u;
    ctx->pc = 0x4D5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5EF4u;
    // 0x4d5ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5EFCu;
    // 0x4d5efc: 0x0  nop
    ctx->pc = 0x4d5efcu;
    // NOP
label_4d5f00:
    // 0x4d5f00: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d5f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d5f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d5f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5f08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d5f0c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d5f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5f10: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D5F10u;
    ctx->pc = 0x4D5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5F10u;
    // 0x4d5f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D5F18u;
label_4d5f18:
    // 0x4d5f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d5f1c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d5f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d5f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d5f24: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4d5f24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4d5f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d5f2c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d5f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d5f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d5f34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d5f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5f38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d5f3c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d5f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d5f40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d5f44: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4d5f44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5f48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d5f4c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4d5f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4d5f50: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d5f50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d5f54: 0x26311078  addiu       $s1, $s1, 0x1078
    ctx->pc = 0x4d5f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4216));
    // 0x4d5f58: 0x96420162  lhu         $v0, 0x162($s2)
    ctx->pc = 0x4d5f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4d5f5c: 0x2673107c  addiu       $s3, $s3, 0x107C
    ctx->pc = 0x4d5f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4220));
    // 0x4d5f60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5f64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4d5f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5f68: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4d5f68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4d5f6c: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x4d5f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x4d5f70: 0x8c641080  lw          $a0, 0x1080($v1)
    ctx->pc = 0x4d5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1080u));
    // 0x4d5f74: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4d5f74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4d5f78: 0x96430016  lhu         $v1, 0x16($s2)
    ctx->pc = 0x4d5f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4d5f7c: 0x8d051084  lw          $a1, 0x1084($t0)
    ctx->pc = 0x4d5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1084u));
    // 0x4d5f80: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4d5f80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5f84: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4d5f84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4d5f88: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x4d5f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x4d5f8c: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4D5F8Cu;
    SET_GPR_U32(ctx, 31, 0x4D5F94u);
    ctx->pc = 0x4D5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5F8Cu;
    // 0x4d5f90: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4D5F8Cu, 0x4D5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5F94u;
label_4d5f94:
    // 0x4d5f94: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d5f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d5f98: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d5f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d5f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5fa0: 0xa603233c  sh          $v1, 0x233C($s0)
    ctx->pc = 0x4d5fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d5fa4: 0xa602233a  sh          $v0, 0x233A($s0)
    ctx->pc = 0x4d5fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5fa8: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4D5FA8u;
    SET_GPR_U32(ctx, 31, 0x4D5FB0u);
    ctx->pc = 0x4D5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5FA8u;
    // 0x4d5fac: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4D5FA8u, 0x4D5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5FB0u;
label_4d5fb0:
    // 0x4d5fb0: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x4d5fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4d5fb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d5fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5fbc: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x4d5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x4d5fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5fc4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d5fc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5fcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5fd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d5fd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d5fd4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5fd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5fdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d5fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d5fe0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5fe4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d5fe8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d5fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d5fec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d5fecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5ff0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5ff4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d5ff8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d5ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6000: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6004: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d6004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d6008: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d600c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4d6010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d6010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d6014: 0x94637a70  lhu         $v1, 0x7A70($v1)
    ctx->pc = 0x4d6014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31344)));
    // 0x4d6018: 0xa64001bc  sh          $zero, 0x1BC($s2)
    ctx->pc = 0x4d6018u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d601c: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x4d601cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d6020: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6024: 0x813580c  j           func_4D6030
    ctx->pc = 0x4D6024u;
    ctx->pc = 0x4D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6024u;
    // 0x4d6028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6030u;
    goto label_4d6030;
    ctx->pc = 0x4D602Cu;
    // 0x4d602c: 0x0  nop
    ctx->pc = 0x4d602cu;
    // NOP
label_4d6030:
    // 0x4d6030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d6030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d6034: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4d6038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d603c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d6040: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d6040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d6044: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d6048: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d6048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d604c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d6050: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d6050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d6054: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d6054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d6058: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d6058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4d605c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D605Cu;
    SET_GPR_U32(ctx, 31, 0x4D6064u);
    ctx->pc = 0x4D6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D605Cu;
    // 0x4d6060: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D605Cu, 0x4D6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6064u;
label_4d6064:
    // 0x4d6064: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x4D6064u;
    {
        const bool branch_taken_0x4d6064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6064u;
        // 0x4d6068: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6064) {
            ctx->pc = 0x4D6328u;
            goto label_4d6328;
        }
    }
    ctx->pc = 0x4D606Cu;
    // 0x4d606c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D606Cu;
    SET_GPR_U32(ctx, 31, 0x4D6074u);
    ctx->pc = 0x4D6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D606Cu;
    // 0x4d6070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D606Cu, 0x4D6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6074u;
label_4d6074:
    // 0x4d6074: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x4D6074u;
    {
        const bool branch_taken_0x4d6074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6074u;
        // 0x4d6078: 0x27c40008  addiu       $a0, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6074) {
            ctx->pc = 0x4D6328u;
            goto label_4d6328;
        }
    }
    ctx->pc = 0x4D607Cu;
    // 0x4d607c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d607cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d6080: 0x26101078  addiu       $s0, $s0, 0x1078
    ctx->pc = 0x4d6080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4216));
    // 0x4d6084: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d6084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d6088: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d6088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1078u));
    // 0x4d608c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4d608cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6090: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x4d6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x4d6094: 0x27d70160  addiu       $s7, $fp, 0x160
    ctx->pc = 0x4d6094u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
    // 0x4d6098: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d609c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d60a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d60a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d60a4: 0x27d60162  addiu       $s6, $fp, 0x162
    ctx->pc = 0x4d60a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 354));
    // 0x4d60a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d60ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d60acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d60b0: 0x27c60166  addiu       $a2, $fp, 0x166
    ctx->pc = 0x4d60b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 358));
    // 0x4d60b4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d60b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d60b8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d60b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d60bc: 0x26731080  addiu       $s3, $s3, 0x1080
    ctx->pc = 0x4d60bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
    // 0x4d60c0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d60c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d60c4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d60c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d60c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d60cc: 0x26941084  addiu       $s4, $s4, 0x1084
    ctx->pc = 0x4d60ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4228));
    // 0x4d60d0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d60d4: 0x26b51088  addiu       $s5, $s5, 0x1088
    ctx->pc = 0x4d60d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4232));
    // 0x4d60d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d60dc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d60dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d60e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d60e4: 0x2631107c  addiu       $s1, $s1, 0x107C
    ctx->pc = 0x4d60e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4220));
    // 0x4d60e8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d60e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d60ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d60f0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d60f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d60f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d60f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4d60fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d6100: 0x94637a74  lhu         $v1, 0x7A74($v1)
    ctx->pc = 0x4d6100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31348)));
    // 0x4d6104: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x4d6104u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d6108: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d6108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d610c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6110: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x4d6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x4d6114: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d611c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6120: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d6124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6128: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d6128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d612c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d612cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d6130: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6134: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6138: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d613c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d613cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6140: 0xa7c0015e  sh          $zero, 0x15E($fp)
    ctx->pc = 0x4d6140u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d6144: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6148: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d6148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d614c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d6150: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d6150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4d6154: 0x24217ac8  addiu       $at, $at, 0x7AC8
    ctx->pc = 0x4d6154u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31432));
    // 0x4d6158: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d6158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4d615c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d615cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d6160: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d6164: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4d6164u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d6168: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4d6168u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d616c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d6170: 0xa6c40000  sh          $a0, 0x0($s6)
    ctx->pc = 0x4d6170u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4d6174: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d6174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d6178: 0xa7c30164  sh          $v1, 0x164($fp)
    ctx->pc = 0x4d6178u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d617c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4d617cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4d6180: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x4d6180u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4d6184: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d6184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d6188: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4d6188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d618c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d6190: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d6194: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6198: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d619c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d619cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d61a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d61a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d61a4: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4d61a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4d61a8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d61a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d61ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4d61acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d61b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d61b4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4d61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4d61b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d61b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d61bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d61bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d61c0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4d61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4d61c4: 0x87c20120  lh          $v0, 0x120($fp)
    ctx->pc = 0x4d61c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x4d61c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d61c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d61cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d61ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d61d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d61d4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D61D4u;
    SET_GPR_U32(ctx, 31, 0x4D61DCu);
    ctx->pc = 0x4D61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D61D4u;
    // 0x4d61d8: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D61D4u, 0x4D61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D61DCu;
label_4d61dc:
    // 0x4d61dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d61dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d61e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d61e4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D61E4u;
    SET_GPR_U32(ctx, 31, 0x4D61ECu);
    ctx->pc = 0x4D61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D61E4u;
    // 0x4d61e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D61E4u, 0x4D61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D61ECu;
label_4d61ec:
    // 0x4d61ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d61f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4d61f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d61f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d61f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d61f8: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4D61F8u;
    SET_GPR_U32(ctx, 31, 0x4D6200u);
    ctx->pc = 0x4D61FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D61F8u;
    // 0x4d61fc: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4D61F8u, 0x4D6200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6200u;
label_4d6200:
    // 0x4d6200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6204: 0x87c20118  lh          $v0, 0x118($fp)
    ctx->pc = 0x4d6204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x4d6208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d620c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6210: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6214: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d6218: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D6218u;
    SET_GPR_U32(ctx, 31, 0x4D6220u);
    ctx->pc = 0x4D621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6218u;
    // 0x4d621c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D6218u, 0x4D6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6220u;
label_4d6220:
    // 0x4d6220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d6220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6224: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d6224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d6228: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D6228u;
    SET_GPR_U32(ctx, 31, 0x4D6230u);
    ctx->pc = 0x4D622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6228u;
    // 0x4d622c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D6228u, 0x4D6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6230u;
label_4d6230:
    // 0x4d6230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6234: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4d6234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6238: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d6238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d623c: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D623Cu;
    SET_GPR_U32(ctx, 31, 0x4D6244u);
    ctx->pc = 0x4D6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D623Cu;
    // 0x4d6240: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D623Cu, 0x4D6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6244u;
label_4d6244:
    // 0x4d6244: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d6244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6248: 0x87c2011c  lh          $v0, 0x11C($fp)
    ctx->pc = 0x4d6248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 284)));
    // 0x4d624c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6250: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6258: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d625c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D625Cu;
    SET_GPR_U32(ctx, 31, 0x4D6264u);
    ctx->pc = 0x4D6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D625Cu;
    // 0x4d6260: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D625Cu, 0x4D6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6264u;
label_4d6264:
    // 0x4d6264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d6264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d6268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d626c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D626Cu;
    SET_GPR_U32(ctx, 31, 0x4D6274u);
    ctx->pc = 0x4D6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D626Cu;
    // 0x4d6270: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D626Cu, 0x4D6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6274u;
label_4d6274:
    // 0x4d6274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6278: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4d6278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d627c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6280: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D6280u;
    SET_GPR_U32(ctx, 31, 0x4D6288u);
    ctx->pc = 0x4D6284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6280u;
    // 0x4d6284: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D6280u, 0x4D6288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6288u;
label_4d6288:
    // 0x4d6288: 0x27c40124  addiu       $a0, $fp, 0x124
    ctx->pc = 0x4d6288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 292));
    // 0x4d628c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d628cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d6290: 0x27c50128  addiu       $a1, $fp, 0x128
    ctx->pc = 0x4d6290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 296));
    // 0x4d6294: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d6294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d6298: 0x27c7012c  addiu       $a3, $fp, 0x12C
    ctx->pc = 0x4d6298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 300));
    // 0x4d629c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d62a0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4d62a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4d62a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d62a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d62a8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d62a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d62ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d62acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d62b0: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4d62b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4d62b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d62b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d62b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d62bc: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x4d62bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4d62c0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d62c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d62c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d62c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d62cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d62ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d62d0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d62d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d62d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d62d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d62d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d62dc: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4d62dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d62e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d62e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d62e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d62e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d62ec: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d62ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d62f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d62f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d62f4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4d62f8: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4d62f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d62fc: 0xa4c8232e  sh          $t0, 0x232E($a2)
    ctx->pc = 0x4d62fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 8));
    // 0x4d6300: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4d6300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d6304: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4d6304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d6308: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4D6308u;
    SET_GPR_U32(ctx, 31, 0x4D6310u);
    ctx->pc = 0x4D630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6308u;
    // 0x4d630c: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4D6308u, 0x4D6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6310u;
label_4d6310:
    // 0x4d6310: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D6310u;
    SET_GPR_U32(ctx, 31, 0x4D6318u);
    ctx->pc = 0x4D6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6310u;
    // 0x4d6314: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D6310u, 0x4D6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6318u;
label_4d6318:
    // 0x4d6318: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D6318u;
    SET_GPR_U32(ctx, 31, 0x4D6320u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D6318u, 0x4D6320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6320u;
label_4d6320:
    // 0x4d6320: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4d6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d6324: 0xa7c201bc  sh          $v0, 0x1BC($fp)
    ctx->pc = 0x4d6324u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d6328:
    // 0x4d6328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d632c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d632cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d633c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d633cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6340: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d6340u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6344: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d6344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d6348: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d6348u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d634c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d6350: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6350u;
        // 0x4d6354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D6358u;
label_4d6358:
    // 0x4d6358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d6358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d635c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d635cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d6360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6364: 0x24a51078  addiu       $a1, $a1, 0x1078
    ctx->pc = 0x4d6364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4216));
    // 0x4d6368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d6368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d636c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d636cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d6374: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4d6374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4d6378: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d6378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d637c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d637cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6380: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d6380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1078u));
    // 0x4d6384: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d6384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d6388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d638c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6390: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d6390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d6394: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6398: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d6398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d639c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4d639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4d63a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d63a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d63a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d63a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d63a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d63ac: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d63acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d63b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D63B0u;
    {
        const bool branch_taken_0x4d63b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d63b0) {
            ctx->pc = 0x4D63B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D63B0u;
            // 0x4d63b4: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D63CCu;
            goto label_4d63cc;
        }
    }
    ctx->pc = 0x4D63B8u;
    // 0x4d63b8: 0x96230164  lhu         $v1, 0x164($s1)
    ctx->pc = 0x4d63b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x4d63bc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4d63c0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4D63C0u;
    SET_GPR_U32(ctx, 31, 0x4D63C8u);
    ctx->pc = 0x4D63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D63C0u;
    // 0x4d63c4: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4D63C0u, 0x4D63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D63C8u;
label_4d63c8:
    // 0x4d63c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d63c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d63cc:
    // 0x4d63cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d63d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4d63d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4d63d4: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4d63d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4d63d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D63D8u;
    {
        const bool branch_taken_0x4d63d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D63D8u;
        // 0x4d63dc: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d63d8) {
            ctx->pc = 0x4D63F0u;
            goto label_4d63f0;
        }
    }
    ctx->pc = 0x4D63E0u;
    // 0x4d63e0: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4d63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4d63e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d63e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d63e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d63ec: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d63ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d63f0:
    // 0x4d63f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d63f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d63f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d63f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d63f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d63f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d63fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d63fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6400: 0x8135902  j           func_4D6408
    ctx->pc = 0x4D6400u;
    ctx->pc = 0x4D6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6400u;
    // 0x4d6404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6408u;
    goto label_4d6408;
    ctx->pc = 0x4D6408u;
label_4d6408:
    // 0x4d6408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d6408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d640c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d6410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d6410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6414: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4D6414u;
    ctx->pc = 0x4D6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6414u;
    // 0x4d6418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D641Cu;
    // 0x4d641c: 0x0  nop
    ctx->pc = 0x4d641cu;
    // NOP
    ctx->pc = 0x4d6420u;
}
