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

// Function: sub_004F05B0
// Address: 0x4f05b0 - 0x4f0888
void sub_004F05B0_0x4f05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F05B0_0x4f05b0");
#endif

    switch (ctx->pc) {
        case 0x4f06c0u: goto label_4f06c0;
        case 0x4f071cu: goto label_4f071c;
        case 0x4f0770u: goto label_4f0770;
        case 0x4f078cu: goto label_4f078c;
        case 0x4f07b4u: goto label_4f07b4;
        case 0x4f07bcu: goto label_4f07bc;
        default: break;
    }

    ctx->pc = 0x4f05b0u;

    // 0x4f05b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f05b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f05b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f05bc: 0x24551210  addiu       $s5, $v0, 0x1210
    ctx->pc = 0x4f05bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4f05c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f05c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4f05c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f05c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f05cc: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4f05ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4f05d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4f05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4f05d4: 0x26de0014  addiu       $fp, $s6, 0x14
    ctx->pc = 0x4f05d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4f05d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f05dc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f05e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f05e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f05e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f05e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f05ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f05ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f05f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4f05f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4f05f4: 0x8c661228  lw          $a2, 0x1228($v1)
    ctx->pc = 0x4f05f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4f05f8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4f05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f05fc: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x4f05fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x4f0600: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0604: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f0608: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f060c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4f060cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4f0610: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0614: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4f0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4f0618: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4f0618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f061c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4f061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4f0620: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0624: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f0624u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f0628: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4f0628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4f062c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f062cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f0630: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4f0630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4f0634: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f0634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0638: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4f0638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x4f063c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F063Cu;
    {
        const bool branch_taken_0x4f063c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4F0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F063Cu;
        // 0x4f0640: 0x26d30120  addiu       $s3, $s6, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f063c) {
            ctx->pc = 0x4F0678u;
            goto label_4f0678;
        }
    }
    ctx->pc = 0x4F0644u;
    // 0x4f0644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f064c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f064cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0650: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f0650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0654: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0658: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f065c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f065cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0660: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f0660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f0664: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f0664u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0668: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f0668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f066c: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F066Cu;
    ctx->pc = 0x4F0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F066Cu;
    // 0x4f0670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0674u;
    // 0x4f0674: 0x0  nop
    ctx->pc = 0x4f0674u;
    // NOP
label_4f0678:
    // 0x4f0678: 0x26d40166  addiu       $s4, $s6, 0x166
    ctx->pc = 0x4f0678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 358));
    // 0x4f067c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f067cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0684: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f0684u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f0688: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f0688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f068c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x4f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x4f0690: 0x26521214  addiu       $s2, $s2, 0x1214
    ctx->pc = 0x4f0690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4628));
    // 0x4f0694: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4f0694u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0698: 0x2631121c  addiu       $s1, $s1, 0x121C
    ctx->pc = 0x4f0698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    // 0x4f069c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f069cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f06a0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f06a4: 0x26101220  addiu       $s0, $s0, 0x1220
    ctx->pc = 0x4f06a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
    // 0x4f06a8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4f06a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f06ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f06acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f06b0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f06b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f06b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f06b8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F06B8u;
    SET_GPR_U32(ctx, 31, 0x4F06C0u);
    ctx->pc = 0x4F06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F06B8u;
    // 0x4f06bc: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F06B8u, 0x4F06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F06C0u;
label_4f06c0:
    // 0x4f06c0: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4f06c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f06c4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f06c8: 0x26c50128  addiu       $a1, $s6, 0x128
    ctx->pc = 0x4f06c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4f06cc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f06d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f06d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f06d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f06d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f06d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f06d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f06dc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f06e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f06e4: 0x2442fd80  addiu       $v0, $v0, -0x280
    ctx->pc = 0x4f06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x4f06e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f06ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f06f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f06f4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f06f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f06fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f0700: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4f0700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f0704: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f0704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0708: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f070c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f0710: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0714: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0714u;
    SET_GPR_U32(ctx, 31, 0x4F071Cu);
    ctx->pc = 0x4F0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0714u;
    // 0x4f0718: 0xafc50000  sw          $a1, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0714u, 0x4F071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F071Cu;
label_4f071c:
    // 0x4f071c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4f071cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0720: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f0720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f0724: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4f0724u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0728: 0x34c60cf3  ori         $a2, $a2, 0xCF3
    ctx->pc = 0x4f0728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3315);
    // 0x4f072c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4f072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0730: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f0730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0738: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4f0738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f073c: 0x30620cf3  andi        $v0, $v1, 0xCF3
    ctx->pc = 0x4f073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3315);
    // 0x4f0740: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f0740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4f0744: 0x972024  and         $a0, $a0, $s7
    ctx->pc = 0x4f0744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x4f0748: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f0748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f074c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4f074cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4f0750: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0754: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f0754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f0758: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f0758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f075c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f0760: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0764: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4f0764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4f0768: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F0768u;
    SET_GPR_U32(ctx, 31, 0x4F0770u);
    ctx->pc = 0x4F076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0768u;
    // 0x4f076c: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F0768u, 0x4F0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0770u;
label_4f0770:
    // 0x4f0770: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4f0770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0774: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f0774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f0778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f0778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f077c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f077cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0780: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f0780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f0784: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0784u;
    SET_GPR_U32(ctx, 31, 0x4F078Cu);
    ctx->pc = 0x4F0788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0784u;
    // 0x4f0788: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0784u, 0x4F078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F078Cu;
label_4f078c:
    // 0x4f078c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4f078cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0790: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f0790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0798: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f079c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f079cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f07a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f07a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f07a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f07ac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F07ACu;
    SET_GPR_U32(ctx, 31, 0x4F07B4u);
    ctx->pc = 0x4F07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F07ACu;
    // 0x4f07b0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F07ACu, 0x4F07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F07B4u;
label_4f07b4:
    // 0x4f07b4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F07B4u;
    SET_GPR_U32(ctx, 31, 0x4F07BCu);
    ctx->pc = 0x4F07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F07B4u;
    // 0x4f07b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F07B4u, 0x4F07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F07BCu;
label_4f07bc:
    // 0x4f07bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4f07bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f07c0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f07c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f07c4: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x4f07c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4f07c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f07c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f07cc: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4f07ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f07d0: 0x2442f30d  addiu       $v0, $v0, -0xCF3
    ctx->pc = 0x4f07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963981));
    // 0x4f07d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4f07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f07d8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f07d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f07dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4f07dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f07e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f07e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f07e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f07e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f07e8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f07ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f07ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f07f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f07f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f07f4: 0x86c60164  lh          $a2, 0x164($s6)
    ctx->pc = 0x4f07f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 356)));
    // 0x4f07f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f07f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f07fc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4f07fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4f0800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f0800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0804: 0xf73825  or          $a3, $a3, $s7
    ctx->pc = 0x4f0804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 23));
    // 0x4f0808: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f080c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f0810: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f0810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0814: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f0814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f0818: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f0818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f081c: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4f081cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f0820: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f0820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0824: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4f0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4f0828: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f082c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f0830: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f0830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f0834: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f083c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f0840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0844: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f0844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0848: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f0848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f084c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0850: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4f0850u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4f0854: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f0854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0858: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4f0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f085c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f085cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f0860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0864: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f0864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f0868: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f0868u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f086c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f086cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0874: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4f0874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4f0878: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f0878u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f087c: 0x813c222  j           func_4F0888
    ctx->pc = 0x4F087Cu;
    ctx->pc = 0x4F0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F087Cu;
    // 0x4f0880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0888u;
    sub_004F0888_0x4f0888(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0884u;
    // 0x4f0884: 0x0  nop
    ctx->pc = 0x4f0884u;
    // NOP
    ctx->pc = 0x4f0888u;
}
