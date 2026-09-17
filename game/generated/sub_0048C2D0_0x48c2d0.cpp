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

// Function: sub_0048C2D0
// Address: 0x48c2d0 - 0x48c8a0
void sub_0048C2D0_0x48c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C2D0_0x48c2d0");
#endif

    switch (ctx->pc) {
        case 0x48c308u: goto label_48c308;
        case 0x48c344u: goto label_48c344;
        case 0x48c504u: goto label_48c504;
        case 0x48c514u: goto label_48c514;
        case 0x48c528u: goto label_48c528;
        case 0x48c53cu: goto label_48c53c;
        case 0x48c54cu: goto label_48c54c;
        case 0x48c560u: goto label_48c560;
        case 0x48c6f0u: goto label_48c6f0;
        default: break;
    }

    ctx->pc = 0x48c2d0u;

    // 0x48c2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48c2d4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x48c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x48c2d8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x48c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x48c2dc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x48c2dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c2e0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x48c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x48c2e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x48c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x48c2e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x48c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x48c2ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x48c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x48c2f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x48c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x48c2f4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x48c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x48c2f8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x48c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x48c2fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x48c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x48c300: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48C300u;
    SET_GPR_U32(ctx, 31, 0x48C308u);
    ctx->pc = 0x48C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C300u;
    // 0x48c304: 0x3c1effff  lui         $fp, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48C300u, 0x48C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C308u;
label_48c308:
    // 0x48c308: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48c308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x48c30c: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x48c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x48c310: 0x24565b38  addiu       $s6, $v0, 0x5B38
    ctx->pc = 0x48c310u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 23352));
    // 0x48c314: 0x26e801b6  addiu       $t0, $s7, 0x1B6
    ctx->pc = 0x48c314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 438));
    // 0x48c318: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x48c318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48c31c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x48c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B38u));
    // 0x48c320: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c324: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c32c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x48c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x48c330: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x48c330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48c334: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48C334u;
    {
        const bool branch_taken_0x48c334 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C334u;
        // 0x48c338: 0x96c20000  lhu         $v0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c334) {
            ctx->pc = 0x48C350u;
            goto label_48c350;
        }
    }
    ctx->pc = 0x48C33Cu;
    // 0x48c33c: 0xc122fde  jal         func_48BF78
    ctx->pc = 0x48C33Cu;
    SET_GPR_U32(ctx, 31, 0x48C344u);
    ctx->pc = 0x48C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C33Cu;
    // 0x48c340: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BF78u, 0x48C33Cu, 0x48C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C344u;
label_48c344:
    // 0x48c344: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x48C344u;
    {
        const bool branch_taken_0x48c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C344u;
        // 0x48c348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c344) {
            ctx->pc = 0x48C870u;
            goto label_48c870;
        }
    }
    ctx->pc = 0x48C34Cu;
    // 0x48c34c: 0x0  nop
    ctx->pc = 0x48c34cu;
    // NOP
label_48c350:
    // 0x48c350: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x48c350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x48c354: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x48C354u;
    {
        const bool branch_taken_0x48c354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c354) {
            ctx->pc = 0x48C358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48C354u;
            // 0x48c358: 0x8ef50140  lw          $s5, 0x140($s7) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48C390u;
            goto label_48c390;
        }
    }
    ctx->pc = 0x48C35Cu;
    // 0x48c35c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x48c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c360: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x48c360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48c364: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48c364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c368: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x48c368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48c36c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x48c36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c370: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x48c370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48c374: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x48c374u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c378: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x48c378u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48c37c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x48c37cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c380: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x48c380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48c384: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x48c384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x48c388: 0x812564a  j           func_495928
    ctx->pc = 0x48C388u;
    ctx->pc = 0x48C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C388u;
    // 0x48c38c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    sub_00495928_0x495928(rdram, ctx, runtime); return;
    ctx->pc = 0x48C390u;
label_48c390:
    // 0x48c390: 0x86a201b4  lh          $v0, 0x1B4($s5)
    ctx->pc = 0x48c390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x48c394: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x48C394u;
    {
        const bool branch_taken_0x48c394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C394u;
        // 0x48c398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c394) {
            ctx->pc = 0x48C458u;
            goto label_48c458;
        }
    }
    ctx->pc = 0x48C39Cu;
    // 0x48c39c: 0x3c06007c  lui         $a2, 0x7C
    ctx->pc = 0x48c39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)124 << 16));
    // 0x48c3a0: 0xa6e201b8  sh          $v0, 0x1B8($s7)
    ctx->pc = 0x48c3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c3a4: 0x24c65b3c  addiu       $a2, $a2, 0x5B3C
    ctx->pc = 0x48c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23356));
    // 0x48c3a8: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x48c3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x48c3ac: 0x86a201b6  lh          $v0, 0x1B6($s5)
    ctx->pc = 0x48c3acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 438)));
    // 0x48c3b0: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x48c3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x48c3b4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x48c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48c3b8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c3bc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x48c3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B3Cu));
    // 0x48c3c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c3c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c3c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c3cc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x48c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x48c3d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c3d4: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x48c3d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48c3d8: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x48c3d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48c3dc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c3e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48c3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48c3e4: 0x30840006  andi        $a0, $a0, 0x6
    ctx->pc = 0x48c3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
    // 0x48c3e8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x48c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x48c3ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c3ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c3f0: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x48c3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x48c3f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x48c3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c3f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48c3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48c3fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x48c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x48c400: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x48c400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c404: 0x3042dff9  andi        $v0, $v0, 0xDFF9
    ctx->pc = 0x48c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57337);
    // 0x48c408: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48c408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c40c: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x48c40cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48c410: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c414: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c418: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48c418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48c41c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x48c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x48c420: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x48c420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48c424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48c428: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c42c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48c42cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48c430: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c434: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x48c434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x48c438: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x48c438u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x48c43c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x48c43cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48c440: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x48c440u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c444: 0x96e30118  lhu         $v1, 0x118($s7)
    ctx->pc = 0x48c444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 280)));
    // 0x48c448: 0xa4e324a0  sh          $v1, 0x24A0($a3)
    ctx->pc = 0x48c448u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x48c44c: 0x96e2011c  lhu         $v0, 0x11C($s7)
    ctx->pc = 0x48c44cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 284)));
    // 0x48c450: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x48C450u;
    {
        const bool branch_taken_0x48c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C450u;
        // 0x48c454: 0xa4e224a2  sh          $v0, 0x24A2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 9378), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c450) {
            ctx->pc = 0x48C86Cu;
            goto label_48c86c;
        }
    }
    ctx->pc = 0x48C458u;
label_48c458:
    // 0x48c458: 0x26a3015a  addiu       $v1, $s5, 0x15A
    ctx->pc = 0x48c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 346));
    // 0x48c45c: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x48c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x48c460: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48c460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c464: 0x3c12007c  lui         $s2, 0x7C
    ctx->pc = 0x48c464u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)124 << 16));
    // 0x48c468: 0x86e5011a  lh          $a1, 0x11A($s7)
    ctx->pc = 0x48c468u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 282)));
    // 0x48c46c: 0x26525b40  addiu       $s2, $s2, 0x5B40
    ctx->pc = 0x48c46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23360));
    // 0x48c470: 0xa6e2015a  sh          $v0, 0x15A($s7)
    ctx->pc = 0x48c470u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c474: 0x3c13007c  lui         $s3, 0x7C
    ctx->pc = 0x48c474u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)124 << 16));
    // 0x48c478: 0xbe2825  or          $a1, $a1, $fp
    ctx->pc = 0x48c478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 30));
    // 0x48c47c: 0x3c11007c  lui         $s1, 0x7C
    ctx->pc = 0x48c47cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)124 << 16));
    // 0x48c480: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48c480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c484: 0x26e30014  addiu       $v1, $s7, 0x14
    ctx->pc = 0x48c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x48c488: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48c48c: 0x26315b48  addiu       $s1, $s1, 0x5B48
    ctx->pc = 0x48c48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23368));
    // 0x48c490: 0xa6e2015c  sh          $v0, 0x15C($s7)
    ctx->pc = 0x48c490u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c494: 0x26735b44  addiu       $s3, $s3, 0x5B44
    ctx->pc = 0x48c494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23364));
    // 0x48c498: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x48c498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x48c49c: 0x3c10007c  lui         $s0, 0x7C
    ctx->pc = 0x48c49cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)124 << 16));
    // 0x48c4a0: 0x26105b3c  addiu       $s0, $s0, 0x5B3C
    ctx->pc = 0x48c4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23356));
    // 0x48c4a4: 0x26f40010  addiu       $s4, $s7, 0x10
    ctx->pc = 0x48c4a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x48c4a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x48c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B40u));
    // 0x48c4ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x48c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B44u));
    // 0x48c4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c4b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7C5B48u));
    // 0x48c4b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x48c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x48c4bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c4c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x48c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x48c4c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c4c8: 0x86e2011e  lh          $v0, 0x11E($s7)
    ctx->pc = 0x48c4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 286)));
    // 0x48c4cc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c4d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c4d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x48c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x48c4d8: 0x86e20122  lh          $v0, 0x122($s7)
    ctx->pc = 0x48c4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 290)));
    // 0x48c4dc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c4e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48c4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48c4e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x48c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x48c4e8: 0x96a20120  lhu         $v0, 0x120($s5)
    ctx->pc = 0x48c4e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 288)));
    // 0x48c4ec: 0xa6e20120  sh          $v0, 0x120($s7)
    ctx->pc = 0x48c4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c4f0: 0x96a30118  lhu         $v1, 0x118($s5)
    ctx->pc = 0x48c4f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x48c4f4: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x48c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c4f8: 0xa6e30118  sh          $v1, 0x118($s7)
    ctx->pc = 0x48c4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x48c4fc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48C4FCu;
    SET_GPR_U32(ctx, 31, 0x48C504u);
    ctx->pc = 0x48C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C4FCu;
    // 0x48c500: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48C4FCu, 0x48C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C504u;
label_48c504:
    // 0x48c504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x48c504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c508: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x48c508u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x48c50c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x48C50Cu;
    SET_GPR_U32(ctx, 31, 0x48C514u);
    ctx->pc = 0x48C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C50Cu;
    // 0x48c510: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x48C50Cu, 0x48C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C514u;
label_48c514:
    // 0x48c514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48c514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c518: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x48c518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48c51c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48c51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c520: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x48C520u;
    SET_GPR_U32(ctx, 31, 0x48C528u);
    ctx->pc = 0x48C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C520u;
    // 0x48c524: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x48C520u, 0x48C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C528u;
label_48c528:
    // 0x48c528: 0x96a2011c  lhu         $v0, 0x11C($s5)
    ctx->pc = 0x48c528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x48c52c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x48c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c530: 0xa6e2011c  sh          $v0, 0x11C($s7)
    ctx->pc = 0x48c530u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c534: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48C534u;
    SET_GPR_U32(ctx, 31, 0x48C53Cu);
    ctx->pc = 0x48C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C534u;
    // 0x48c538: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48C534u, 0x48C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C53Cu;
label_48c53c:
    // 0x48c53c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x48c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c540: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x48c540u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x48c544: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x48C544u;
    SET_GPR_U32(ctx, 31, 0x48C54Cu);
    ctx->pc = 0x48C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C544u;
    // 0x48c548: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x48C544u, 0x48C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C54Cu;
label_48c54c:
    // 0x48c54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c550: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x48c550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48c554: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c558: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x48C558u;
    SET_GPR_U32(ctx, 31, 0x48C560u);
    ctx->pc = 0x48C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C558u;
    // 0x48c55c: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x48C558u, 0x48C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C560u;
label_48c560:
    // 0x48c560: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x48c560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c564: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x48c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x48c568: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x48c568u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x48c56c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x48c56cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c570: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x48c570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x48c574: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c578: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x48c578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c57c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c57cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c580: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x48c580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c588: 0x862a0000  lh          $t2, 0x0($s1)
    ctx->pc = 0x48c588u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c58c: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c590: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x48c590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c594: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x48c594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x48c598: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x48c598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x48c59c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x48c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x48c5a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x48c5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x48c5a4: 0x2529d680  addiu       $t1, $t1, -0x2980
    ctx->pc = 0x48c5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x48c5a8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x48c5a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x48c5ac: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x48c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x48c5b0: 0x252d2494  addiu       $t5, $t1, 0x2494
    ctx->pc = 0x48c5b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 9364));
    // 0x48c5b4: 0x964b0000  lhu         $t3, 0x0($s2)
    ctx->pc = 0x48c5b4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c5b8: 0x25302324  addiu       $s0, $t1, 0x2324
    ctx->pc = 0x48c5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 8996));
    // 0x48c5bc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c5c0: 0x252e249c  addiu       $t6, $t1, 0x249C
    ctx->pc = 0x48c5c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 9372));
    // 0x48c5c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c5c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c5c8: 0x25292498  addiu       $t1, $t1, 0x2498
    ctx->pc = 0x48c5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9368));
    // 0x48c5cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x48c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x48c5d0: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x48c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x48c5d4: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x48c5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x48c5d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48c5d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48c5dc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x48c5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x48c5e0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x48c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x48c5e4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x48c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x48c5e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x48c5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x48c5ec: 0x2484f9a6  addiu       $a0, $a0, -0x65A
    ctx->pc = 0x48c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965670));
    // 0x48c5f0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x48c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x48c5f4: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x48c5f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c5f8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c5fc: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x48c5fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48c600: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c604: 0xa60b0000  sh          $t3, 0x0($s0)
    ctx->pc = 0x48c604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x48c608: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x48c608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x48c60c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c610: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x48c610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x48c614: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48c614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48c618: 0x15e5025  or          $t2, $t2, $fp
    ctx->pc = 0x48c618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 30));
    // 0x48c61c: 0x2442f9a8  addiu       $v0, $v0, -0x658
    ctx->pc = 0x48c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965672));
    // 0x48c620: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x48c620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x48c624: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x48c624u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48c628: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x48c628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x48c62c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x48c62cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x48c630: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48c630u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48c634: 0x19e6025  or          $t4, $t4, $fp
    ctx->pc = 0x48c634u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 30));
    // 0x48c638: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x48c638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c63c: 0x17e5825  or          $t3, $t3, $fp
    ctx->pc = 0x48c63cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 30));
    // 0x48c640: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x48c640u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x48c644: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x48c644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48c648: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48c648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48c64c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48c64cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48c650: 0x15e5025  or          $t2, $t2, $fp
    ctx->pc = 0x48c650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 30));
    // 0x48c654: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x48c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48c658: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c65c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c65cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c660: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c664: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c668: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x48c668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x48c66c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x48c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x48c670: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x48c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48c674: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c678: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x48c678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c67c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c680: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c684: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c688: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x48c688u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48c68c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c690: 0xbe2825  or          $a1, $a1, $fp
    ctx->pc = 0x48c690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 30));
    // 0x48c694: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x48c694u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x48c698: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x48c698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x48c69c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x48c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x48c6a0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x48c6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48c6a4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x48c6a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c6a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c6ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c6b0: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x48c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x48c6b4: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c6b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c6bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c6bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c6c0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x48c6c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x48c6c4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x48c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x48c6c8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x48c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x48c6cc: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x48c6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x48c6d0: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x48c6d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x48c6d4: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x48c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x48c6d8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x48c6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c6dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c6e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c6e4: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x48c6e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x48c6e8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x48C6E8u;
    SET_GPR_U32(ctx, 31, 0x48C6F0u);
    ctx->pc = 0x48C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C6E8u;
    // 0x48c6ec: 0xadca0000  sw          $t2, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x48C6E8u, 0x48C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C6F0u;
label_48c6f0:
    // 0x48c6f0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x48c6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48c6f4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x48c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x48c6f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x48c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48c6fc: 0x24c6f9a8  addiu       $a2, $a2, -0x658
    ctx->pc = 0x48c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965672));
    // 0x48c700: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48c700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c708: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c70c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c710: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x48c710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x48c714: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48c714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48c718: 0x2463f9a6  addiu       $v1, $v1, -0x65A
    ctx->pc = 0x48c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965670));
    // 0x48c71c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x48c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48c720: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48c720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F9A6u));
    // 0x48c724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48c728: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48c728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c72c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c730: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c734: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c738: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x48c738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x48c73c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x48c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48c740: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x48c740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c744: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48c748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48c748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48c74c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c750: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x48c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x48c754: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c758: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x48c758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x48c75c: 0x8ea20124  lw          $v0, 0x124($s5)
    ctx->pc = 0x48c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x48c760: 0xaee20124  sw          $v0, 0x124($s7)
    ctx->pc = 0x48c760u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 292), GPR_U32(ctx, 2));
    // 0x48c764: 0x8ea30128  lw          $v1, 0x128($s5)
    ctx->pc = 0x48c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x48c768: 0xaee30128  sw          $v1, 0x128($s7)
    ctx->pc = 0x48c768u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 296), GPR_U32(ctx, 3));
    // 0x48c76c: 0x8ea4012c  lw          $a0, 0x12C($s5)
    ctx->pc = 0x48c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x48c770: 0xaee4012c  sw          $a0, 0x12C($s7)
    ctx->pc = 0x48c770u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 300), GPR_U32(ctx, 4));
    // 0x48c774: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x48c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48c778: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x48c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c77c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c780: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x48c780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c784: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c78c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c790: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x48c790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c794: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c798: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c79c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x48c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x48c7a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c7a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c7a8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x48c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48c7ac: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x48c7acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c7b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c7b4: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c7b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c7bc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c7c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48c7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48c7c4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x48c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x48c7c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c7cc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x48c7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48c7d0: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x48c7d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c7d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48c7d8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c7dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c7dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c7e0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x48c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x48c7e4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48c7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48c7e8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x48c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x48c7ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c7f0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x48c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c7f4: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x48c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x48c7f8: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x48c7f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c7fc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c800: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c804: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x48c804u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48c808: 0xfe3825  or          $a3, $a3, $fp
    ctx->pc = 0x48c808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 30));
    // 0x48c80c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x48c80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x48c810: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x48c810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x48c814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48c814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c818: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x48c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x48c81c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x48c81cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c820: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c824: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c828: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x48c828u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x48c82c: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x48c82cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x48c830: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x48c830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x48c834: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x48c834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x48c838: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x48c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c83c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x48c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x48c840: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x48c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x48c844: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c848: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x48c848u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48c84c: 0xde3025  or          $a2, $a2, $fp
    ctx->pc = 0x48c84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 30));
    // 0x48c850: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x48c850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x48c854: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x48c854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x48c858: 0xa6e30130  sh          $v1, 0x130($s7)
    ctx->pc = 0x48c858u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x48c85c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x48c85cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c860: 0xa6e20132  sh          $v0, 0x132($s7)
    ctx->pc = 0x48c860u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c864: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x48c864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c868: 0xa6e30134  sh          $v1, 0x134($s7)
    ctx->pc = 0x48c868u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 308), (uint16_t)GPR_U32(ctx, 3));
label_48c86c:
    // 0x48c86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c870:
    // 0x48c870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c874: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x48c874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48c878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x48c878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c87c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x48c87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48c880: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x48c880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c884: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x48c884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48c888: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x48c888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c88c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x48c88cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48c890: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x48c890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48c894: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x48c894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x48c898: 0x3e00008  jr          $ra
    ctx->pc = 0x48C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C898u;
        // 0x48c89c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C8A0u;
}
