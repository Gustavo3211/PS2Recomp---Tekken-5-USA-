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

// Function: sub_0030E278
// Address: 0x30e278 - 0x30e3d8
void sub_0030E278_0x30e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E278_0x30e278");
#endif

    switch (ctx->pc) {
        case 0x30e2a0u: goto label_30e2a0;
        case 0x30e2d8u: goto label_30e2d8;
        case 0x30e388u: goto label_30e388;
        default: break;
    }

    ctx->pc = 0x30e278u;

    // 0x30e278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30e280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30e284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30e28c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e290: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30e294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e298: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30e298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30e29c: 0x0  nop
    ctx->pc = 0x30e29cu;
    // NOP
label_30e2a0:
    // 0x30e2a0: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30e2a4: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30e2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e2a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e2ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30e2b0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x30e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30e2b4: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x30e2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30e2b8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e2bc: 0x26111530  addiu       $s1, $s0, 0x1530
    ctx->pc = 0x30e2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5424));
    // 0x30e2c0: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30e2c4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30e2c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30e2cc: 0x26111540  addiu       $s1, $s0, 0x1540
    ctx->pc = 0x30e2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5440));
    // 0x30e2d0: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30E2D0u;
    SET_GPR_U32(ctx, 31, 0x30E2D8u);
    ctx->pc = 0x30E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2D0u;
    // 0x30e2d4: 0xfe250008  sd          $a1, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30E2D0u, 0x30E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E2D8u;
label_30e2d8:
    // 0x30e2d8: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30e2dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e2e0: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x30e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x30e2e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30e2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30e2e8: 0x34840a00  ori         $a0, $a0, 0xA00
    ctx->pc = 0x30e2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2560);
    // 0x30e2ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30e2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30e2f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e2f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30e2f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e2fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e300: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30e300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30e304: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x30e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30e308: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30e308u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e30c: 0x26111550  addiu       $s1, $s0, 0x1550
    ctx->pc = 0x30e30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5456));
    // 0x30e310: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e310u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e314: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30e318: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e31c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x30e31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e320: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30e324: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x30e324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30e328: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30e32c: 0x3c082400  lui         $t0, 0x2400
    ctx->pc = 0x30e32cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9216 << 16));
    // 0x30e330: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30e330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e334: 0x240a0027  addiu       $t2, $zero, 0x27
    ctx->pc = 0x30e334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x30e338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30e33c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e340: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e344: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e34c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30e34cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e350: 0x26111560  addiu       $s1, $s0, 0x1560
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5472));
    // 0x30e354: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e354u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e358: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x30e358u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x30e35c: 0x26111570  addiu       $s1, $s0, 0x1570
    ctx->pc = 0x30e35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5488));
    // 0x30e360: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e360u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e364: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30e364u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30e368: 0x26111580  addiu       $s1, $s0, 0x1580
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5504));
    // 0x30e36c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e370: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e370u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e374: 0x26111590  addiu       $s1, $s0, 0x1590
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x30e378: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30e378u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30e37c: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x30e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x30e380: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x30e380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x30e384: 0x261115a0  addiu       $s1, $s0, 0x15A0
    ctx->pc = 0x30e384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5536));
label_30e388:
    // 0x30e388: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30e388u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30e38c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x30e38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x30e390: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e390u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e394: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30e394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30e398: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30e398u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30e39c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e3a0: 0x541fff9  bgez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30E3A0u;
    {
        const bool branch_taken_0x30e3a0 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x30E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3A0u;
        // 0x30e3a4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3a0) {
            ctx->pc = 0x30E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e388;
        }
    }
    ctx->pc = 0x30E3A8u;
    // 0x30e3a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e3ac: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30e3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e3b0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x30E3B0u;
    {
        const bool branch_taken_0x30e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3B0u;
        // 0x30e3b4: 0x241022c0  addiu       $s0, $zero, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3b0) {
            ctx->pc = 0x30E2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e2a0;
        }
    }
    ctx->pc = 0x30E3B8u;
    // 0x30e3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30e3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30e3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e3c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30e3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e3c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30e3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30e3c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3CCu;
        // 0x30e3d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E3D4u;
    // 0x30e3d4: 0x0  nop
    ctx->pc = 0x30e3d4u;
    // NOP
    ctx->pc = 0x30e3d8u;
}
