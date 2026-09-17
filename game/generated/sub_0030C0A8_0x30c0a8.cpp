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

// Function: sub_0030C0A8
// Address: 0x30c0a8 - 0x30c1e0
void sub_0030C0A8_0x30c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0A8_0x30c0a8");
#endif

    switch (ctx->pc) {
        case 0x30c190u: goto label_30c190;
        default: break;
    }

    ctx->pc = 0x30c0a8u;

    // 0x30c0a8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x30c0a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0ac: 0x8c980368  lw          $t8, 0x368($a0)
    ctx->pc = 0x30c0acu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30c0b0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x30c0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x30c0b4: 0x8c8f0040  lw          $t7, 0x40($a0)
    ctx->pc = 0x30c0b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30c0b8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x30c0b8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0bc: 0x8c8c0044  lw          $t4, 0x44($a0)
    ctx->pc = 0x30c0bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30c0c0: 0x8c8a0058  lw          $t2, 0x58($a0)
    ctx->pc = 0x30c0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x30c0c4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x30c0c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30c0c8: 0x11a00042  beqz        $t5, . + 4 + (0x42 << 2)
    ctx->pc = 0x30C0C8u;
    {
        const bool branch_taken_0x30c0c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0C8u;
        // 0x30c0cc: 0x8c89000c  lw          $t1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0c8) {
            ctx->pc = 0x30C1D4u;
            goto label_30c1d4;
        }
    }
    ctx->pc = 0x30C0D0u;
    // 0x30c0d0: 0xb1140  sll         $v0, $t3, 5
    ctx->pc = 0x30c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x30c0d4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x30c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30c0d8: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x30c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x30c0dc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x30c0dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30c0e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30c0e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30c0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30c0e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30c0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c0ec: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x30c0ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c0f0: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x30c0f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x30c0f4: 0xa43b8  dsll        $t0, $t2, 14
    ctx->pc = 0x30c0f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << 14);
    // 0x30c0f8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x30c0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c0fc: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x30c0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x30c100: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30c100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30c104: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c108: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30c108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30c10c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x30c10cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x30c110: 0xf26b8  dsll        $a0, $t7, 26
    ctx->pc = 0x30c110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << 26);
    // 0x30c114: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x30c114u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30c118: 0xc37b8  dsll        $a2, $t4, 30
    ctx->pc = 0x30c118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << 30);
    // 0x30c11c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30c120: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30c120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30c124: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x30c124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x30c128: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x30c128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c12c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x30c12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30c130: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x30c130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30c134: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30c134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30c138: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x30c138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x30c13c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30c140: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30c140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30c144: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x30c144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x30c148: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x30c148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x30c14c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x30c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x30c150: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x30c150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x30c154: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30c158: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x30c158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x30c15c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30c15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30c160: 0x3052821  addu        $a1, $t8, $a1
    ctx->pc = 0x30c160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x30c164: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x30c164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c168: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x30c168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x30c16c: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x30c16cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x30c170: 0x465025  or          $t2, $v0, $a2
    ctx->pc = 0x30c170u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30c174: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x30c174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x30c178: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x30c178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30c17c: 0x3401cf40  ori         $at, $zero, 0xCF40
    ctx->pc = 0x30c17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53056);
    // 0x30c180: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x30c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x30c184: 0x240c004c  addiu       $t4, $zero, 0x4C
    ctx->pc = 0x30c184u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30c188: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x30c188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x30c18c: 0x0  nop
    ctx->pc = 0x30c18cu;
    // NOP
label_30c190:
    // 0x30c190: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x30c190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x30c194: 0x24a509f0  addiu       $a1, $a1, 0x9F0
    ctx->pc = 0x30c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2544));
    // 0x30c198: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x30c198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30c19c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30c19cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x30c1a0: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x30c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x30c1a4: 0x1cd182b  sltu        $v1, $t6, $t5
    ctx->pc = 0x30c1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x30c1a8: 0xfd0c0008  sd          $t4, 0x8($t0)
    ctx->pc = 0x30c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 12));
    // 0x30c1ac: 0x24480070  addiu       $t0, $v0, 0x70
    ctx->pc = 0x30c1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x30c1b0: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x30c1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x30c1b4: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x30c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x30c1b8: 0x24480530  addiu       $t0, $v0, 0x530
    ctx->pc = 0x30c1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x30c1bc: 0xfd090000  sd          $t1, 0x0($t0)
    ctx->pc = 0x30c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x30c1c0: 0xfd0c0008  sd          $t4, 0x8($t0)
    ctx->pc = 0x30c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 12));
    // 0x30c1c4: 0x24480550  addiu       $t0, $v0, 0x550
    ctx->pc = 0x30c1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x30c1c8: 0xfd0a0000  sd          $t2, 0x0($t0)
    ctx->pc = 0x30c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 10));
    // 0x30c1cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30C1CCu;
    {
        const bool branch_taken_0x30c1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1CCu;
        // 0x30c1d0: 0xfd0b0008  sd          $t3, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1cc) {
            ctx->pc = 0x30C190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c190;
        }
    }
    ctx->pc = 0x30C1D4u;
label_30c1d4:
    // 0x30c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C1DCu;
    // 0x30c1dc: 0x0  nop
    ctx->pc = 0x30c1dcu;
    // NOP
    ctx->pc = 0x30c1e0u;
}
