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

// Function: sub_004F46B0
// Address: 0x4f46b0 - 0x4f4b48
void sub_004F46B0_0x4f46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F46B0_0x4f46b0");
#endif

    switch (ctx->pc) {
        case 0x4f46e8u: goto label_4f46e8;
        case 0x4f470cu: goto label_4f470c;
        case 0x4f4888u: goto label_4f4888;
        case 0x4f4898u: goto label_4f4898;
        case 0x4f49b0u: goto label_4f49b0;
        case 0x4f49bcu: goto label_4f49bc;
        case 0x4f49c8u: goto label_4f49c8;
        case 0x4f4a4cu: goto label_4f4a4c;
        case 0x4f4a54u: goto label_4f4a54;
        case 0x4f4a5cu: goto label_4f4a5c;
        case 0x4f4b04u: goto label_4f4b04;
        case 0x4f4b14u: goto label_4f4b14;
        default: break;
    }

    ctx->pc = 0x4f46b0u;

    // 0x4f46b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4f46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4f46b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4f46b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4f46b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4f46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4f46bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4f46bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4f46c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f46c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f46c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4f46c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4f46c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4f46c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4f46cc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4f46ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4f46d0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4f46d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4f46d4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4f46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4f46d8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4f46d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4f46dc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4f46dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4f46e0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F46E0u;
    SET_GPR_U32(ctx, 31, 0x4F46E8u);
    ctx->pc = 0x4F46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F46E0u;
    // 0x4f46e4: 0x267101b4  addiu       $s1, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F46E0u, 0x4F46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F46E8u;
label_4f46e8:
    // 0x4f46e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4f46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4f46ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f46ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f46f0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f46f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f46f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4f46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4f46f8: 0x440006b  bltz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4F46F8u;
    {
        const bool branch_taken_0x4f46f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46F8u;
        // 0x4f46fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f46f8) {
            ctx->pc = 0x4F48A8u;
            goto label_4f48a8;
        }
    }
    ctx->pc = 0x4F4700u;
    // 0x4f4700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4704: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F4704u;
    SET_GPR_U32(ctx, 31, 0x4F470Cu);
    ctx->pc = 0x4F4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4704u;
    // 0x4f4708: 0x26150050  addiu       $s5, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F4704u, 0x4F470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F470Cu;
label_4f470c:
    // 0x4f470c: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4f470cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4f4710: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f4710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4714: 0x261e0054  addiu       $fp, $s0, 0x54
    ctx->pc = 0x4f4714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x4f4718: 0x2442ff50  addiu       $v0, $v0, -0xB0
    ctx->pc = 0x4f4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x4f471c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f471cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4720: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4724: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4f4724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4728: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4f4728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4f472c: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x4f472cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4f4730: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f4730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f4734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4738: 0x946381b8  lhu         $v1, -0x7E48($v1)
    ctx->pc = 0x4f4738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934968)));
    // 0x4f473c: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x4f473cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4f4740: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f4740u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f4744: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4748: 0xa663000c  sh          $v1, 0xC($s3)
    ctx->pc = 0x4f4748u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f474c: 0x26640134  addiu       $a0, $s3, 0x134
    ctx->pc = 0x4f474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 308));
    // 0x4f4750: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x4f4750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x4f4754: 0x26760014  addiu       $s6, $s3, 0x14
    ctx->pc = 0x4f4754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4f4758: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f4758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f475c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4760: 0x946381c8  lhu         $v1, -0x7E38($v1)
    ctx->pc = 0x4f4760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934984)));
    // 0x4f4764: 0x26620130  addiu       $v0, $s3, 0x130
    ctx->pc = 0x4f4764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x4f4768: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f476c: 0x26740018  addiu       $s4, $s3, 0x18
    ctx->pc = 0x4f476cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4f4770: 0xa663015a  sh          $v1, 0x15A($s3)
    ctx->pc = 0x4f4770u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4774: 0x26630132  addiu       $v1, $s3, 0x132
    ctx->pc = 0x4f4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 306));
    // 0x4f4778: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4f4778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4f477c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f477cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f4780: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4f4780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4f4784: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x4f4784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f4788: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x4f4788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f478c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4f478cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4790: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x4f4790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x4f4794: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x4f4794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x4f4798: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x4f4798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x4f479c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f47a0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f47a4: 0x2529d680  addiu       $t1, $t1, -0x2980
    ctx->pc = 0x4f47a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4f47a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f47a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f47ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f47acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f47b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f47b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f47b4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4f47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f47b8: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f47b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f47bc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f47c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f47c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f47c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f47c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f47c8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f47c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f47cc: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f47d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f47d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f47d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f47d8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f47d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f47dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f47dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f47e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f47e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f47e4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f47e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f47e8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4f47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4f47ec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f47ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f47f0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f47f4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f47f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f47f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f47f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f47fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4800: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f4800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f4804: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f4804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f4808: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f4808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f480c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4f480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f4810: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4f4810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f4814: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f4814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f4818: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x4f4818u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f481c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f481cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4820: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f4820u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4824: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f4824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f4828: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f4828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f482c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f4830: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4f4830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f4834: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4f4834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f4838: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f483c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f4840: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4844: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f4844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4848: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f4848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f484c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4f484cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f4850: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4f4850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4f4854: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x4f4854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4858: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x4f4858u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f485c: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4f485cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f4860: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f4860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4864: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4f4864u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4868: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x4f4868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f486c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4f486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f4870: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4f4870u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4874: 0x96620118  lhu         $v0, 0x118($s3)
    ctx->pc = 0x4f4874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4f4878: 0xa52224a0  sh          $v0, 0x24A0($t1)
    ctx->pc = 0x4f4878u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f487c: 0x9663011c  lhu         $v1, 0x11C($s3)
    ctx->pc = 0x4f487cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x4f4880: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F4880u;
    SET_GPR_U32(ctx, 31, 0x4F4888u);
    ctx->pc = 0x4F4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4880u;
    // 0x4f4884: 0xa52324a2  sh          $v1, 0x24A2($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 9378), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F4880u, 0x4F4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4888u;
label_4f4888:
    // 0x4f4888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f4888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f488c: 0xa66201b6  sh          $v0, 0x1B6($s3)
    ctx->pc = 0x4f488cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4890: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F4890u;
    SET_GPR_U32(ctx, 31, 0x4F4898u);
    ctx->pc = 0x4F4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4890u;
    // 0x4f4894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F4890u, 0x4F4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4898u;
label_4f4898:
    // 0x4f4898: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f4898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f489c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f48a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4F48A0u;
    {
        const bool branch_taken_0x4f48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F48A0u;
        // 0x4f48a4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f48a0) {
            ctx->pc = 0x4F48E0u;
            goto label_4f48e0;
        }
    }
    ctx->pc = 0x4F48A8u;
label_4f48a8:
    // 0x4f48a8: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x4f48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4f48ac: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x4f48acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x4f48b0: 0x26660132  addiu       $a2, $s3, 0x132
    ctx->pc = 0x4f48b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 306));
    // 0x4f48b4: 0x26670134  addiu       $a3, $s3, 0x134
    ctx->pc = 0x4f48b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 308));
    // 0x4f48b8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4f48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4f48bc: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x4f48bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4f48c0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4f48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4f48c4: 0x26760014  addiu       $s6, $s3, 0x14
    ctx->pc = 0x4f48c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4f48c8: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x4f48c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x4f48cc: 0x26740018  addiu       $s4, $s3, 0x18
    ctx->pc = 0x4f48ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4f48d0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x4f48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x4f48d4: 0x26150050  addiu       $s5, $s0, 0x50
    ctx->pc = 0x4f48d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x4f48d8: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4f48d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f48dc: 0x261e0054  addiu       $fp, $s0, 0x54
    ctx->pc = 0x4f48dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_4f48e0:
    // 0x4f48e0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x4f48e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f48e4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f48e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f48e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f48ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f48f0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f48f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f48f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f48f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f48f8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x4f48f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f48fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f48fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4900: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4f4900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4904: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f4908: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x4f4908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f490c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f4910: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4914: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4918: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4f4918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f491c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f491cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f4920: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4924: 0x87a70000  lh          $a3, 0x0($sp)
    ctx->pc = 0x4f4924u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4928: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f492c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f492cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f4930: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4f4930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4f4934: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4938: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f4938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f493c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4940: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f4940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f4944: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4f4944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4f4948: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f494c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f4950: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4954: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4958: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4f4958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f495c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f495cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f4960: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f4964: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f4964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f4968: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4f4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f496c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f496cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4970: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4974: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f497c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4980: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f4980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f4984: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4f4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f4988: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4f4988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4f498c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f4990: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4f4990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4994: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4998: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f499c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f49a0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f49a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f49a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f49a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f49a8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F49A8u;
    SET_GPR_U32(ctx, 31, 0x4F49B0u);
    ctx->pc = 0x4F49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F49A8u;
    // 0x4f49ac: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F49A8u, 0x4F49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F49B0u;
label_4f49b0:
    // 0x4f49b0: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4f49b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f49b4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F49B4u;
    SET_GPR_U32(ctx, 31, 0x4F49BCu);
    ctx->pc = 0x4F49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F49B4u;
    // 0x4f49b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F49B4u, 0x4F49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F49BCu;
label_4f49bc:
    // 0x4f49bc: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4f49bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f49c0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F49C0u;
    SET_GPR_U32(ctx, 31, 0x4F49C8u);
    ctx->pc = 0x4F49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F49C0u;
    // 0x4f49c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F49C0u, 0x4F49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F49C8u;
label_4f49c8:
    // 0x4f49c8: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4f49c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f49cc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4f49ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f49d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f49d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f49d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f49d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f49d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f49dc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f49dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f49e0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f49e4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f49e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f49e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f49e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f49ec: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f49f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f49f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f49f4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4f49f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f49f8: 0x8e670124  lw          $a3, 0x124($s3)
    ctx->pc = 0x4f49f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x4f49fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f49fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4a00: 0x8e680128  lw          $t0, 0x128($s3)
    ctx->pc = 0x4f4a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x4f4a04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f4a08: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4f4a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4f4a0c: 0x8e67012c  lw          $a3, 0x12C($s3)
    ctx->pc = 0x4f4a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x4f4a10: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f4a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f4a14: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4f4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4f4a18: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4f4a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f4a1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f4a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f4a20: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4a24: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4f4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4f4a28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f4a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f4a2c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4f4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4f4a30: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4f4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x4f4a34: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4f4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4f4a38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4f4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4a3c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4f4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4f4a40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4a44: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4A44u;
    SET_GPR_U32(ctx, 31, 0x4F4A4Cu);
    ctx->pc = 0x4F4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4A44u;
    // 0x4f4a48: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4A44u, 0x4F4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4A4Cu;
label_4f4a4c:
    // 0x4f4a4c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4A4Cu;
    SET_GPR_U32(ctx, 31, 0x4F4A54u);
    ctx->pc = 0x4F4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4A4Cu;
    // 0x4f4a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4A4Cu, 0x4F4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4A54u;
label_4f4a54:
    // 0x4f4a54: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4A54u;
    SET_GPR_U32(ctx, 31, 0x4F4A5Cu);
    ctx->pc = 0x4F4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4A54u;
    // 0x4f4a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4A54u, 0x4F4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4A5Cu;
label_4f4a5c:
    // 0x4f4a5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f4a60: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f4a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f4a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4a68: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4a6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4a70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4a74: 0x87a70004  lh          $a3, 0x4($sp)
    ctx->pc = 0x4f4a74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4a78: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f4a7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4a80: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f4a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f4a84: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4a88: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f4a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f4a8c: 0x87a80008  lh          $t0, 0x8($sp)
    ctx->pc = 0x4f4a8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4a90: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f4a94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4a98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4a9c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4f4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f4aa0: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x4f4aa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4aa4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4aa8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4aac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4ab0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f4ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f4ab4: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f4ab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f4ab8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4f4ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4f4abc: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x4f4abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4ac0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f4ac4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4f4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f4ac8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f4acc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f4accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4ad0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4ad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4ad4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4f4ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f4ad8: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f4ad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f4adc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f4adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f4ae0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4f4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4f4ae4: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x4f4ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f4ae8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x4f4ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f4aec: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4f4aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4f4af0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4f4af0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4af4: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x4f4af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4af8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4f4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f4afc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4F4AFCu;
    SET_GPR_U32(ctx, 31, 0x4F4B04u);
    ctx->pc = 0x4F4B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4AFCu;
    // 0x4f4b00: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4F4AFCu, 0x4F4B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4B04u;
label_4f4b04:
    // 0x4f4b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F4B04u;
    {
        const bool branch_taken_0x4f4b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B04u;
        // 0x4f4b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4b04) {
            ctx->pc = 0x4F4B14u;
            goto label_4f4b14;
        }
    }
    ctx->pc = 0x4F4B0Cu;
    // 0x4f4b0c: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4F4B0Cu;
    SET_GPR_U32(ctx, 31, 0x4F4B14u);
    ctx->pc = 0x4F4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4B0Cu;
    // 0x4f4b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4F4B0Cu, 0x4F4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4B14u;
label_4f4b14:
    // 0x4f4b14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4f4b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f4b18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4f4b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f4b1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4f4b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f4b20: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4f4b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f4b24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4f4b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f4b28: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4f4b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f4b2c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4f4b2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f4b30: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4f4b30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4f4b34: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4f4b34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f4b38: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4f4b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4f4b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B3Cu;
        // 0x4f4b40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4B44u;
    // 0x4f4b44: 0x0  nop
    ctx->pc = 0x4f4b44u;
    // NOP
    ctx->pc = 0x4f4b48u;
}
