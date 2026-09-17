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

// Function: sub_004E00A0
// Address: 0x4e00a0 - 0x4e0178
void sub_004E00A0_0x4e00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E00A0_0x4e00a0");
#endif

    switch (ctx->pc) {
        case 0x4e0100u: goto label_4e0100;
        case 0x4e0110u: goto label_4e0110;
        default: break;
    }

    ctx->pc = 0x4e00a0u;

    // 0x4e00a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e00a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e00a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e00ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e00acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e00b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e00b4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e00b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4e00b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e00bc: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e00c0: 0x24461148  addiu       $a2, $v0, 0x1148
    ctx->pc = 0x4e00c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4424));
    // 0x4e00c4: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4e00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4e00c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1148u));
    // 0x4e00cc: 0x84a22426  lh          $v0, 0x2426($a1)
    ctx->pc = 0x4e00ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FAA6u));
    // 0x4e00d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e00d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e00d4: 0x94a42424  lhu         $a0, 0x2424($a1)
    ctx->pc = 0x4e00d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72FAA4u));
    // 0x4e00d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e00d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e00dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e00dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e00e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e00e4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e00e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e00e8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e00e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e00ec: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4E00ECu;
    {
        const bool branch_taken_0x4e00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e00ec) {
            ctx->pc = 0x4E00F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E00ECu;
            // 0x4e00f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0164u;
            goto label_4e0164;
        }
    }
    ctx->pc = 0x4E00F4u;
    // 0x4e00f4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4e00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4e00f8: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4E00F8u;
    SET_GPR_U32(ctx, 31, 0x4E0100u);
    ctx->pc = 0x4E00FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E00F8u;
    // 0x4e00fc: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4E00F8u, 0x4E0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0100u;
label_4e0100:
    // 0x4e0100: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4E0100u;
    {
        const bool branch_taken_0x4e0100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0100u;
        // 0x4e0104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0100) {
            ctx->pc = 0x4E0160u;
            goto label_4e0160;
        }
    }
    ctx->pc = 0x4E0108u;
    // 0x4e0108: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4E0108u;
    SET_GPR_U32(ctx, 31, 0x4E0110u);
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4E0108u, 0x4E0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0110u;
label_4e0110:
    // 0x4e0110: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x4e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x4e0114: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e0114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0118: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4e0118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e011c: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x4e011cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e0120: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e0124: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e0124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e0128: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4e0128u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e012c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e012cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4e0130: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4e0130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4e0134: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e0134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4e0138: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4e0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e013c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x4e013cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e0140: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e0140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4e0144: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4e0144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4e0148: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4e0148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4e014c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4e014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e0150: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4e0150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e0154: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e0154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4e0158: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4e0158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4e015c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4e015cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4e0160:
    // 0x4e0160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e0160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0164:
    // 0x4e0164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e0164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e0168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e016c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E016Cu;
        // 0x4e0170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0174u;
    // 0x4e0174: 0x0  nop
    ctx->pc = 0x4e0174u;
    // NOP
    ctx->pc = 0x4e0178u;
}
