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

// Function: sub_004F5600
// Address: 0x4f5600 - 0x4f5b08
void sub_004F5600_0x4f5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5600_0x4f5600");
#endif

    switch (ctx->pc) {
        case 0x4f5638u: goto label_4f5638;
        case 0x4f565cu: goto label_4f565c;
        case 0x4f57ecu: goto label_4f57ec;
        case 0x4f57fcu: goto label_4f57fc;
        case 0x4f58a4u: goto label_4f58a4;
        case 0x4f58b0u: goto label_4f58b0;
        case 0x4f58bcu: goto label_4f58bc;
        case 0x4f5974u: goto label_4f5974;
        case 0x4f5980u: goto label_4f5980;
        case 0x4f598cu: goto label_4f598c;
        case 0x4f5a9cu: goto label_4f5a9c;
        case 0x4f5ab4u: goto label_4f5ab4;
        case 0x4f5ac8u: goto label_4f5ac8;
        case 0x4f5ad8u: goto label_4f5ad8;
        default: break;
    }

    ctx->pc = 0x4f5600u;

    // 0x4f5600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4f5600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4f5604: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4f5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4f5608: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4f5608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4f560c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f560cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5610: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4f5610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4f5614: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4f5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4f5618: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4f5618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4f561c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4f561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4f5620: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4f5620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4f5624: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4f5624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4f5628: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4f5628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4f562c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4f562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4f5630: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F5630u;
    SET_GPR_U32(ctx, 31, 0x4F5638u);
    ctx->pc = 0x4F5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5630u;
    // 0x4f5634: 0x263501b4  addiu       $s5, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F5630u, 0x4F5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5638u;
label_4f5638:
    // 0x4f5638: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4f5638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4f563c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f563cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5640: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f5640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f5644: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4f5644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4f5648: 0x4400073  bltz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x4F5648u;
    {
        const bool branch_taken_0x4f5648 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5648u;
        // 0x4f564c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5648) {
            ctx->pc = 0x4F5818u;
            goto label_4f5818;
        }
    }
    ctx->pc = 0x4F5650u;
    // 0x4f5650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f5650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5654: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F5654u;
    SET_GPR_U32(ctx, 31, 0x4F565Cu);
    ctx->pc = 0x4F5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5654u;
    // 0x4f5658: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F5654u, 0x4F565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F565Cu;
label_4f565c:
    // 0x4f565c: 0x2402053e  addiu       $v0, $zero, 0x53E
    ctx->pc = 0x4f565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1342));
    // 0x4f5660: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x4f5660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5664: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4f5664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5668: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x4f5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x4f566c: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x4f566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x4f5670: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f5674: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x4f5674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4f5678: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4f5678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4f567c: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x4f567cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4f5680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5684: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4f5684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4f5688: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f568c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x4f568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x4f5690: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f5690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f5694: 0x262c0120  addiu       $t4, $s1, 0x120
    ctx->pc = 0x4f5694u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4f5698: 0x26340018  addiu       $s4, $s1, 0x18
    ctx->pc = 0x4f5698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4f569c: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x4f569cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f56a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f56a4: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x4f56a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f56a8: 0xafac0014  sw          $t4, 0x14($sp)
    ctx->pc = 0x4f56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 12));
    // 0x4f56ac: 0x263e0130  addiu       $fp, $s1, 0x130
    ctx->pc = 0x4f56acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x4f56b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f56b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f56b4: 0x26370132  addiu       $s7, $s1, 0x132
    ctx->pc = 0x4f56b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 306));
    // 0x4f56b8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f56b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f56bc: 0x26360134  addiu       $s6, $s1, 0x134
    ctx->pc = 0x4f56bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
    // 0x4f56c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f56c4: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x4f56c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x4f56c8: 0x2529d680  addiu       $t1, $t1, -0x2980
    ctx->pc = 0x4f56c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4f56cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f56d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f56d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f56d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f56d8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f56dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4f56dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4f56e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f56e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f56e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f56e8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f56e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f56ec: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f56f0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f56f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f56f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f56f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f56f8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f56f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f56fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f56fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f5700: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f5700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f5704: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4f5704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5708: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f5708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f570c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f570cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f5710: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f5710u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f5714: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x4f5714u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f5718: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f571c: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f571cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5720: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5724: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5724u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5728: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f5728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f572c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f572cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f5730: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f5730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f5734: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f5734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f5738: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f573c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5740: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5744: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f5744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f5748: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4f5748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4f574c: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f5750: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f5750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f5754: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4f5754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5758: 0x8fac0018  lw          $t4, 0x18($sp)
    ctx->pc = 0x4f5758u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f575c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5760: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5764: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f5764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f5768: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f5768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f576c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f576cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f5770: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4f5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5774: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f5774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f5778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f5778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f577c: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4f577cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f5780: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5784: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x4f5784u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5788: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f578c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f5790: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f5790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f5794: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f5794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f5798: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f5798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f579c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4f579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f57a0: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4f57a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f57a4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f57a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f57a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f57a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f57ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f57acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f57b0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f57b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f57b4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4f57b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4f57b8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f57bc: 0xa7c50000  sh          $a1, 0x0($fp)
    ctx->pc = 0x4f57bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f57c0: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x4f57c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f57c4: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4f57c4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f57c8: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x4f57c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f57cc: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x4f57ccu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f57d0: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x4f57d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4f57d4: 0xa52224a0  sh          $v0, 0x24A0($t1)
    ctx->pc = 0x4f57d4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f57d8: 0x9623011c  lhu         $v1, 0x11C($s1)
    ctx->pc = 0x4f57d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4f57dc: 0xa52324a2  sh          $v1, 0x24A2($t1)
    ctx->pc = 0x4f57dcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9378), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f57e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4f57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f57e4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F57E4u;
    SET_GPR_U32(ctx, 31, 0x4F57ECu);
    ctx->pc = 0x4F57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F57E4u;
    // 0x4f57e8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F57E4u, 0x4F57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F57ECu;
label_4f57ec:
    // 0x4f57ec: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x4f57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x4f57f0: 0xa622015a  sh          $v0, 0x15A($s1)
    ctx->pc = 0x4f57f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f57f4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F57F4u;
    SET_GPR_U32(ctx, 31, 0x4F57FCu);
    ctx->pc = 0x4F57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F57F4u;
    // 0x4f57f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F57F4u, 0x4F57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F57FCu;
label_4f57fc:
    // 0x4f57fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f5800: 0xa62301b6  sh          $v1, 0x1B6($s1)
    ctx->pc = 0x4f5800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5804: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4f5804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f5808: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f5808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f580c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4F580Cu;
    {
        const bool branch_taken_0x4f580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F580Cu;
        // 0x4f5810: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f580c) {
            ctx->pc = 0x4F5850u;
            goto label_4f5850;
        }
    }
    ctx->pc = 0x4F5814u;
    // 0x4f5814: 0x0  nop
    ctx->pc = 0x4f5814u;
    // NOP
label_4f5818:
    // 0x4f5818: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x4f5818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4f581c: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x4f581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x4f5820: 0x262c0120  addiu       $t4, $s1, 0x120
    ctx->pc = 0x4f5820u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4f5824: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x4f5824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x4f5828: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4f5828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4f582c: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4f582cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4f5830: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4f5830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4f5834: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x4f5834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4f5838: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x4f5838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x4f583c: 0x26340018  addiu       $s4, $s1, 0x18
    ctx->pc = 0x4f583cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4f5840: 0xafac0014  sw          $t4, 0x14($sp)
    ctx->pc = 0x4f5840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 12));
    // 0x4f5844: 0x263e0130  addiu       $fp, $s1, 0x130
    ctx->pc = 0x4f5844u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x4f5848: 0x26370132  addiu       $s7, $s1, 0x132
    ctx->pc = 0x4f5848u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 306));
    // 0x4f584c: 0x26360134  addiu       $s6, $s1, 0x134
    ctx->pc = 0x4f584cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
label_4f5850:
    // 0x4f5850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5854: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f5854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5858: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4f5858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f585c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5860: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5864: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4f5864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5868: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f586c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4f586cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f5870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5874: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f5874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f5878: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f5878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f587c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f587cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f5880: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4f5880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f5884: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5888: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f5888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f588c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4f588cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4f5890: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4f5890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f5894: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5898: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f5898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f589c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F589Cu;
    SET_GPR_U32(ctx, 31, 0x4F58A4u);
    ctx->pc = 0x4F58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F589Cu;
    // 0x4f58a0: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F589Cu, 0x4F58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F58A4u;
label_4f58a4:
    // 0x4f58a4: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x4f58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f58a8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F58A8u;
    SET_GPR_U32(ctx, 31, 0x4F58B0u);
    ctx->pc = 0x4F58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F58A8u;
    // 0x4f58ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F58A8u, 0x4F58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F58B0u;
label_4f58b0:
    // 0x4f58b0: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x4f58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f58b4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F58B4u;
    SET_GPR_U32(ctx, 31, 0x4F58BCu);
    ctx->pc = 0x4F58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F58B4u;
    // 0x4f58b8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F58B4u, 0x4F58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F58BCu;
label_4f58bc:
    // 0x4f58bc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f58bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f58c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f58c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f58c8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f58c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f58cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f58d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f58d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f58d4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4f58d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f58d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f58d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f58dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f58dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f58e0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f58e4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f58e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f58e8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f58e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f58ec: 0x8e270124  lw          $a3, 0x124($s1)
    ctx->pc = 0x4f58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x4f58f0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f58f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f58f4: 0x8e280128  lw          $t0, 0x128($s1)
    ctx->pc = 0x4f58f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x4f58f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f58fc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4f58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4f5900: 0x8e27012c  lw          $a3, 0x12C($s1)
    ctx->pc = 0x4f5900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x4f5904: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f5908: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4f5908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4f590c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4f590cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f5910: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f5910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f5914: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5918: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f591c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f591cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f5920: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f5920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5924: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4f5924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4f5928: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4f5928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4f592c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f592cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f5930: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f5934: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5938: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f5938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f593c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f593cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f5940: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x4f5940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5944: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f5948: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f5948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f594c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5950: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f5950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f5954: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f5954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f5958: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4f5958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f595c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f5960: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f5960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f5964: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5968: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f5968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f596c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F596Cu;
    SET_GPR_U32(ctx, 31, 0x4F5974u);
    ctx->pc = 0x4F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F596Cu;
    // 0x4f5970: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F596Cu, 0x4F5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5974u;
label_4f5974:
    // 0x4f5974: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4f5974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f5978: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5978u;
    SET_GPR_U32(ctx, 31, 0x4F5980u);
    ctx->pc = 0x4F597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5978u;
    // 0x4f597c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5978u, 0x4F5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5980u;
label_4f5980:
    // 0x4f5980: 0x27ac0008  addiu       $t4, $sp, 0x8
    ctx->pc = 0x4f5980u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f5984: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5984u;
    SET_GPR_U32(ctx, 31, 0x4F598Cu);
    ctx->pc = 0x4F5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5984u;
    // 0x4f5988: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5984u, 0x4F598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F598Cu;
label_4f598c:
    // 0x4f598c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f598cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5990: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4f5990u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5994: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x4f5994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5998: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4f5998u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f599c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4f599cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f59a0: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4f59a0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f59a4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4f59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f59a8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4f59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f59ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f59b0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f59b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f59b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f59b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f59b8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4f59b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4f59bc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4f59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f59c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f59c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f59c4: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4f59c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f59c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f59cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f59d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f59d4: 0x8fac0018  lw          $t4, 0x18($sp)
    ctx->pc = 0x4f59d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f59d8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f59d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f59dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f59dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f59e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4f59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4f59e4: 0x87a70008  lh          $a3, 0x8($sp)
    ctx->pc = 0x4f59e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f59e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f59ec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4f59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f59f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f59f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f59f4: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x4f59f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f59f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f59f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f59fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f59fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f5a00: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f5a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f5a04: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f5a08: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4f5a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4f5a0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f5a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f5a10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f5a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4f5a14: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f5a18: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4f5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5a1c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5a20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5a24: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4f5a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f5a28: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f5a28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f5a2c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4f5a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4f5a30: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4f5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4f5a34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f5a38: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5a3c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f5a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f5a40: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f5a44: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x4f5a44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5a48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f5a4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5a50: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5a54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f5a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f5a5c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f5a60: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x4f5a60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5a64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f5a68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5a6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5a74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f5a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f5a78: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4f5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4f5a7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4f5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f5a80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4f5a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f5a84: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x4f5a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x4f5a88: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4f5a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4f5a8c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4f5a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f5a90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f5a94: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F5A94u;
    SET_GPR_U32(ctx, 31, 0x4F5A9Cu);
    ctx->pc = 0x4F5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5A94u;
    // 0x4f5a98: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F5A94u, 0x4F5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5A9Cu;
label_4f5a9c:
    // 0x4f5a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f5a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5aa0: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x4f5aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5aa4: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x4f5aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5aa8: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4f5aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4f5aac: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4F5AACu;
    SET_GPR_U32(ctx, 31, 0x4F5AB4u);
    ctx->pc = 0x4F5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5AACu;
    // 0x4f5ab0: 0xa630002a  sh          $s0, 0x2A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4F5AACu, 0x4F5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5AB4u;
label_4f5ab4:
    // 0x4f5ab4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F5AB4u;
    {
        const bool branch_taken_0x4f5ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5ab4) {
            ctx->pc = 0x4F5AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5AB4u;
            // 0x4f5ab8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5ADCu;
            goto label_4f5adc;
        }
    }
    ctx->pc = 0x4F5ABCu;
    // 0x4f5abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f5abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ac0: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4F5AC0u;
    SET_GPR_U32(ctx, 31, 0x4F5AC8u);
    ctx->pc = 0x4F5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5AC0u;
    // 0x4f5ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4F5AC0u, 0x4F5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5AC8u;
label_4f5ac8:
    // 0x4f5ac8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5AC8u;
    {
        const bool branch_taken_0x4f5ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5ac8) {
            ctx->pc = 0x4F5ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5AC8u;
            // 0x4f5acc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5ADCu;
            goto label_4f5adc;
        }
    }
    ctx->pc = 0x4F5AD0u;
    // 0x4f5ad0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4F5AD0u;
    SET_GPR_U32(ctx, 31, 0x4F5AD8u);
    ctx->pc = 0x4F5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5AD0u;
    // 0x4f5ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4F5AD0u, 0x4F5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5AD8u;
label_4f5ad8:
    // 0x4f5ad8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4f5ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5adc:
    // 0x4f5adc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4f5adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f5ae0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4f5ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f5ae4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4f5ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f5ae8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4f5ae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f5aec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4f5aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f5af0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4f5af0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f5af4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4f5af4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4f5af8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4f5af8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f5afc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4f5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4f5b00: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B00u;
        // 0x4f5b04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5B08u;
}
