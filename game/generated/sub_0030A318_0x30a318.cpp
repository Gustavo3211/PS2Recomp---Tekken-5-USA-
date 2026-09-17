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

// Function: sub_0030A318
// Address: 0x30a318 - 0x30a4b0
void sub_0030A318_0x30a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A318_0x30a318");
#endif

    switch (ctx->pc) {
        case 0x30a3c8u: goto label_30a3c8;
        default: break;
    }

    ctx->pc = 0x30a318u;

    // 0x30a318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a31c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30a31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a324: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x30a324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x30a328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30a32c: 0x2411004e  addiu       $s1, $zero, 0x4E
    ctx->pc = 0x30a32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x30a330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30a334: 0x3c120003  lui         $s2, 0x3
    ctx->pc = 0x30a334u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
    // 0x30a338: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30a33c: 0x24130047  addiu       $s3, $zero, 0x47
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30a340: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30a344: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x30a344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30a348: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30a34c: 0x3c15108f  lui         $s5, 0x108F
    ctx->pc = 0x30a34cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4239 << 16));
    // 0x30a350: 0x36b54000  ori         $s5, $s5, 0x4000
    ctx->pc = 0x30a350u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16384);
    // 0x30a354: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x30a354u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x30a358: 0x36b58008  ori         $s5, $s5, 0x8008
    ctx->pc = 0x30a358u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32776);
    // 0x30a35c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x30a360: 0x3416bb00  ori         $s6, $zero, 0xBB00
    ctx->pc = 0x30a360u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47872);
    // 0x30a364: 0x34198000  ori         $t9, $zero, 0x8000
    ctx->pc = 0x30a364u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a368: 0x19cc78  dsll        $t9, $t9, 17
    ctx->pc = 0x30a368u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 17);
    // 0x30a36c: 0x24180018  addiu       $t8, $zero, 0x18
    ctx->pc = 0x30a36cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30a370: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x30a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x30a374: 0x240f7200  addiu       $t7, $zero, 0x7200
    ctx->pc = 0x30a374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x30a378: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x30a378u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x30a37c: 0x35ef6c00  ori         $t7, $t7, 0x6C00
    ctx->pc = 0x30a37cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)27648);
    // 0x30a380: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x30a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x30a384: 0x240e004c  addiu       $t6, $zero, 0x4C
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30a388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30a38c: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x30a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x30a390: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30a390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30a394: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a398: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30a398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30a39c: 0x8cc50368  lw          $a1, 0x368($a2)
    ctx->pc = 0x30a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x30a3a0: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x30a3a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a3a4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30a3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30a3a8: 0x340dff00  ori         $t5, $zero, 0xFF00
    ctx->pc = 0x30a3a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30a3ac: 0xd6c3c  dsll32      $t5, $t5, 16
    ctx->pc = 0x30a3acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 16));
    // 0x30a3b0: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x30a3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30a3b4: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x30a3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30a3b8: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x30a3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30a3bc: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x30a3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30a3c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a3c4: 0x0  nop
    ctx->pc = 0x30a3c4u;
    // NOP
label_30a3c8:
    // 0x30a3c8: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x30a3cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x30a3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x30a3d0: 0xfc750000  sd          $s5, 0x0($v1)
    ctx->pc = 0x30a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 21));
    // 0x30a3d4: 0x3403bb10  ori         $v1, $zero, 0xBB10
    ctx->pc = 0x30a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47888);
    // 0x30a3d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a3dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30a3e0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x30a3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x30a3e4: 0xfc34bb08  sd          $s4, -0x44F8($at)
    ctx->pc = 0x30a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294949640), GPR_U64(ctx, 20));
    // 0x30a3e8: 0xfc720000  sd          $s2, 0x0($v1)
    ctx->pc = 0x30a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 18));
    // 0x30a3ec: 0xfc730008  sd          $s3, 0x8($v1)
    ctx->pc = 0x30a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 19));
    // 0x30a3f0: 0x3403bb20  ori         $v1, $zero, 0xBB20
    ctx->pc = 0x30a3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47904);
    // 0x30a3f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a3f8: 0xfc710008  sd          $s1, 0x8($v1)
    ctx->pc = 0x30a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 17));
    // 0x30a3fc: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x30a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x30a400: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30a404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a408: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30a40c: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x30a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x30a410: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30a410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30a414: 0x3403bb30  ori         $v1, $zero, 0xBB30
    ctx->pc = 0x30a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47920);
    // 0x30a418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a41c: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x30a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x30a420: 0xfc780008  sd          $t8, 0x8($v1)
    ctx->pc = 0x30a420u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 24));
    // 0x30a424: 0x3403bb40  ori         $v1, $zero, 0xBB40
    ctx->pc = 0x30a424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47936);
    // 0x30a428: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a42c: 0xfc6e0008  sd          $t6, 0x8($v1)
    ctx->pc = 0x30a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 14));
    // 0x30a430: 0x9cc20010  lwu         $v0, 0x10($a2)
    ctx->pc = 0x30a430u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x30a434: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a438: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x30a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x30a43c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30a440: 0x3403bb50  ori         $v1, $zero, 0xBB50
    ctx->pc = 0x30a440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47952);
    // 0x30a444: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a448: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30a448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30a44c: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x30a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x30a450: 0x3403bb60  ori         $v1, $zero, 0xBB60
    ctx->pc = 0x30a450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47968);
    // 0x30a454: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a458: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30a458u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30a45c: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x30a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x30a460: 0x3403bb70  ori         $v1, $zero, 0xBB70
    ctx->pc = 0x30a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47984);
    // 0x30a464: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a468: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x30a468u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x30a46c: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x30a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x30a470: 0x3403bb80  ori         $v1, $zero, 0xBB80
    ctx->pc = 0x30a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x30a474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a478: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30a478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30a47c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x30a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x30a480: 0x4e1ffd1  bgez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x30A480u;
    {
        const bool branch_taken_0x30a480 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x30A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A480u;
        // 0x30a484: 0xfc690008  sd          $t1, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a480) {
            ctx->pc = 0x30A3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A488u;
    // 0x30a488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30a488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30a48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30a490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a494: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30a494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a498: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30a498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a49c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30a49cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30a4a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x30a4a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x30A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4A4u;
        // 0x30a4a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A4ACu;
    // 0x30a4ac: 0x0  nop
    ctx->pc = 0x30a4acu;
    // NOP
    ctx->pc = 0x30a4b0u;
}
