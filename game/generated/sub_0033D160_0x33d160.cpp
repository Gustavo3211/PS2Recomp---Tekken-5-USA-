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

// Function: sub_0033D160
// Address: 0x33d160 - 0x33d270
void sub_0033D160_0x33d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D160_0x33d160");
#endif

    switch (ctx->pc) {
        case 0x33d1b8u: goto label_33d1b8;
        case 0x33d258u: goto label_33d258;
        default: break;
    }

    ctx->pc = 0x33d160u;

    // 0x33d160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33d164: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x33d164u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33d170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33d170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33d174: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x33d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33d178: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x33d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x33d17c: 0x24902  srl         $t1, $v0, 4
    ctx->pc = 0x33d17cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x33d180: 0x8d8a0004  lw          $t2, 0x4($t4)
    ctx->pc = 0x33d180u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x33d184: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33D184u;
    {
        const bool branch_taken_0x33d184 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D184u;
        // 0x33d188: 0x24680040  addiu       $t0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d184) {
            ctx->pc = 0x33D228u;
            goto label_33d228;
        }
    }
    ctx->pc = 0x33D18Cu;
    // 0x33d18c: 0x3c0f0fff  lui         $t7, 0xFFF
    ctx->pc = 0x33d18cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4095 << 16));
    // 0x33d190: 0x24114000  addiu       $s1, $zero, 0x4000
    ctx->pc = 0x33d190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x33d194: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x33d194u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x33d198: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x33d198u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
    // 0x33d19c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33d19cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1a0: 0x3410c000  ori         $s0, $zero, 0xC000
    ctx->pc = 0x33d1a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x33d1a4: 0x10837c  dsll32      $s0, $s0, 13
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 13));
    // 0x33d1a8: 0x3c193000  lui         $t9, 0x3000
    ctx->pc = 0x33d1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)12288 << 16));
    // 0x33d1ac: 0x3c0d7000  lui         $t5, 0x7000
    ctx->pc = 0x33d1acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)28672 << 16));
    // 0x33d1b0: 0x3c18f000  lui         $t8, 0xF000
    ctx->pc = 0x33d1b0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)61440 << 16));
    // 0x33d1b4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x33d1b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
label_33d1b8:
    // 0x33d1b8: 0x2d224001  sltiu       $v0, $t1, 0x4001
    ctx->pc = 0x33d1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x33d1bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33d1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1c0: 0x122380b  movn        $a3, $t1, $v0
    ctx->pc = 0x33d1c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x33d1c4: 0x716e7389  pcpyld      $t6, $t3, $t6
    ctx->pc = 0x33d1c4u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 14)));
    // 0x33d1c8: 0x7d0e0000  sq          $t6, 0x0($t0)
    ctx->pc = 0x33d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 14));
    // 0x33d1cc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x33d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x33d1d0: 0xf92025  or          $a0, $a3, $t9
    ctx->pc = 0x33d1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 25));
    // 0x33d1d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x33d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33d1d8: 0x1581825  or          $v1, $t2, $t8
    ctx->pc = 0x33d1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 24));
    // 0x33d1dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33d1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33d1e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x33d1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x33d1e4: 0x14f2824  and         $a1, $t2, $t7
    ctx->pc = 0x33d1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x33d1e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33d1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33d1ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x33d1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x33d1f0: 0x14d3024  and         $a2, $t2, $t5
    ctx->pc = 0x33d1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x33d1f4: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x33d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x33d1f8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x33d1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33d1fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x33d1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x33d200: 0x10cd0002  beq         $a2, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x33D200u;
    {
        const bool branch_taken_0x33d200 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        ctx->pc = 0x33D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D200u;
        // 0x33d204: 0xfd000018  sd          $zero, 0x18($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d200) {
            ctx->pc = 0x33D20Cu;
            goto label_33d20c;
        }
    }
    ctx->pc = 0x33D208u;
    // 0x33d208: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x33d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_33d20c:
    // 0x33d20c: 0x71621389  pcpyld      $v0, $t3, $v0
    ctx->pc = 0x33d20cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x33d210: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x33d210u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
    // 0x33d214: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x33d214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x33d218: 0x1274823  subu        $t1, $t1, $a3
    ctx->pc = 0x33d218u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x33d21c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x33d21cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x33d220: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x33D220u;
    {
        const bool branch_taken_0x33d220 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D220u;
        // 0x33d224: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d220) {
            ctx->pc = 0x33D1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D228u;
label_33d228:
    // 0x33d228: 0x2505ffd0  addiu       $a1, $t0, -0x30
    ctx->pc = 0x33d228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x33d22c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x33d22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33d230: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x33d230u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33d234: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x33d234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x33d238: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d23c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33d240: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x33d240u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x33d244: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33d244u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33d248: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x33d248u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x33d24c: 0x8d840008  lw          $a0, 0x8($t4)
    ctx->pc = 0x33d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x33d250: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33D250u;
    SET_GPR_U32(ctx, 31, 0x33D258u);
    ctx->pc = 0x33D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D250u;
    // 0x33d254: 0x2505000f  addiu       $a1, $t0, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33D250u, 0x33D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D258u;
label_33d258:
    // 0x33d258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d264: 0x3e00008  jr          $ra
    ctx->pc = 0x33D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D264u;
        // 0x33d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D26Cu;
    // 0x33d26c: 0x0  nop
    ctx->pc = 0x33d26cu;
    // NOP
    ctx->pc = 0x33d270u;
}
