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

// Function: sub_0030E3D8
// Address: 0x30e3d8 - 0x30e530
void sub_0030E3D8_0x30e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E3D8_0x30e3d8");
#endif

    switch (ctx->pc) {
        case 0x30e400u: goto label_30e400;
        case 0x30e48cu: goto label_30e48c;
        case 0x30e4e8u: goto label_30e4e8;
        default: break;
    }

    ctx->pc = 0x30e3d8u;

    // 0x30e3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30e3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30e3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e3e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30e3ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30e3f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3f8: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30e3fc: 0x0  nop
    ctx->pc = 0x30e3fcu;
    // NOP
label_30e400:
    // 0x30e400: 0x3c0210ab  lui         $v0, 0x10AB
    ctx->pc = 0x30e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4267 << 16));
    // 0x30e404: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30e404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e408: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e40c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30e410: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e414: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x30e414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e418: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e41c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x30e41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e420: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x30e420u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30e424: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x30e424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30e428: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e42c: 0x26111ab0  addiu       $s1, $s0, 0x1AB0
    ctx->pc = 0x30e42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6832));
    // 0x30e430: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x30e430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30e434: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30e434u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30e438: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x30e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30e43c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30e440: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30e440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30e444: 0x26111ac0  addiu       $s1, $s0, 0x1AC0
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6848));
    // 0x30e448: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e448u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e44c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e450: 0x26111ad0  addiu       $s1, $s0, 0x1AD0
    ctx->pc = 0x30e450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6864));
    // 0x30e454: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30e454u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30e458: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e458u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e45c: 0x26111ae0  addiu       $s1, $s0, 0x1AE0
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6880));
    // 0x30e460: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x30e460u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x30e464: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e464u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e468: 0x26111af0  addiu       $s1, $s0, 0x1AF0
    ctx->pc = 0x30e468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6896));
    // 0x30e46c: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x30e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x30e470: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e470u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e474: 0x26111b00  addiu       $s1, $s0, 0x1B00
    ctx->pc = 0x30e474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6912));
    // 0x30e478: 0xfe2a0008  sd          $t2, 0x8($s1)
    ctx->pc = 0x30e478u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 10));
    // 0x30e47c: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x30e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
    // 0x30e480: 0x26111b10  addiu       $s1, $s0, 0x1B10
    ctx->pc = 0x30e480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6928));
    // 0x30e484: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30E484u;
    SET_GPR_U32(ctx, 31, 0x30E48Cu);
    ctx->pc = 0x30E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E484u;
    // 0x30e488: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30E484u, 0x30E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E48Cu;
label_30e48c:
    // 0x30e48c: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30e490: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e494: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x30e494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30e498: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30e498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30e49c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e4a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30e4a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e4a8: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x30e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x30e4ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30e4b0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e4b4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e4b8: 0x26111b20  addiu       $s1, $s0, 0x1B20
    ctx->pc = 0x30e4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6944));
    // 0x30e4bc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x30e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30e4c0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x30e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x30e4c4: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e4c8: 0x26111b30  addiu       $s1, $s0, 0x1B30
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6960));
    // 0x30e4cc: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x30e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30e4d0: 0x3c032400  lui         $v1, 0x2400
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9216 << 16));
    // 0x30e4d4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30e4d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e4dc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30e4e0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x30e4e4: 0x26111b40  addiu       $s1, $s0, 0x1B40
    ctx->pc = 0x30e4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6976));
label_30e4e8:
    // 0x30e4e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30e4ec: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30e4f0: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e4f4: 0x0  nop
    ctx->pc = 0x30e4f4u;
    // NOP
    // 0x30e4f8: 0x0  nop
    ctx->pc = 0x30e4f8u;
    // NOP
    // 0x30e4fc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30E4FCu;
    {
        const bool branch_taken_0x30e4fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4FCu;
        // 0x30e500: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4fc) {
            ctx->pc = 0x30E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e4e8;
        }
    }
    ctx->pc = 0x30E504u;
    // 0x30e504: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e508: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30e508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e50c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x30E50Cu;
    {
        const bool branch_taken_0x30e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E50Cu;
        // 0x30e510: 0x241022c0  addiu       $s0, $zero, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e50c) {
            ctx->pc = 0x30E400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e400;
        }
    }
    ctx->pc = 0x30E514u;
    // 0x30e514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30e514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30e518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e51c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30e51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30e520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30e524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e528: 0x3e00008  jr          $ra
    ctx->pc = 0x30E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E528u;
        // 0x30e52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E530u;
}
