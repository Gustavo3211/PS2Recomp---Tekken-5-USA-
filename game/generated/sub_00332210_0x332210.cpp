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

// Function: sub_00332210
// Address: 0x332210 - 0x3322e8
void sub_00332210_0x332210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332210_0x332210");
#endif

    ctx->pc = 0x332210u;

    // 0x332210: 0x240a0246  addiu       $t2, $zero, 0x246
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x332214: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x332214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x332218: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33221c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x332220: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x332220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x332224: 0x34635510  ori         $v1, $v1, 0x5510
    ctx->pc = 0x332224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21776);
    // 0x332228: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x332228u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x33222c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x33222cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x332230: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x332230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x332234: 0xfcaa0010  sd          $t2, 0x10($a1)
    ctx->pc = 0x332234u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 10));
    // 0x332238: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x332238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x33223c: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x33223cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x332240: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x332240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x332244: 0x9c880028  lwu         $t0, 0x28($a0)
    ctx->pc = 0x332244u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x332248: 0x340bfe00  ori         $t3, $zero, 0xFE00
    ctx->pc = 0x332248u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x33224c: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x33224cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
    // 0x332250: 0x9c830024  lwu         $v1, 0x24($a0)
    ctx->pc = 0x332250u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x332254: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x332254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x332258: 0x9c820020  lwu         $v0, 0x20($a0)
    ctx->pc = 0x332258u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x33225c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x33225cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x332260: 0x9c87002c  lwu         $a3, 0x2C($a0)
    ctx->pc = 0x332260u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x332264: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x332264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x332268: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x332268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x33226c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332270: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x332270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x332274: 0x31a3a  dsrl        $v1, $v1, 8
    ctx->pc = 0x332274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 8);
    // 0x332278: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x332278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x33227c: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x33227cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x332280: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x332280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x332284: 0x24080055  addiu       $t0, $zero, 0x55
    ctx->pc = 0x332284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x332288: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x332288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x33228c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x33228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x332290: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x332290u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x332294: 0x3c092400  lui         $t1, 0x2400
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)9216 << 16));
    // 0x332298: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x332298u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x33229c: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x33229cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x3322a0: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x3322a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
    // 0x3322a4: 0xfcaa0030  sd          $t2, 0x30($a1)
    ctx->pc = 0x3322a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 10));
    // 0x3322a8: 0xfca60020  sd          $a2, 0x20($a1)
    ctx->pc = 0x3322a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 6));
    // 0x3322ac: 0x9c830018  lwu         $v1, 0x18($a0)
    ctx->pc = 0x3322acu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3322b0: 0x9c860014  lwu         $a2, 0x14($a0)
    ctx->pc = 0x3322b0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3322b4: 0x9c820010  lwu         $v0, 0x10($a0)
    ctx->pc = 0x3322b4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3322b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3322b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3322bc: 0x9c87001c  lwu         $a3, 0x1C($a0)
    ctx->pc = 0x3322bcu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3322c0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3322c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3322c4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x3322c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x3322c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3322c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3322cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3322ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3322d0: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x3322d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x3322d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3322d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3322d8: 0xfca80048  sd          $t0, 0x48($a1)
    ctx->pc = 0x3322d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 8));
    // 0x3322dc: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x3322dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
    // 0x3322e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3322E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322E0u;
        // 0x3322e4: 0xfca90040  sd          $t1, 0x40($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3322E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3322E8u;
}
