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

// Function: sub_003359F8
// Address: 0x3359f8 - 0x335b40
void sub_003359F8_0x3359f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003359F8_0x3359f8");
#endif

    switch (ctx->pc) {
        case 0x335a1cu: goto label_335a1c;
        default: break;
    }

    ctx->pc = 0x3359f8u;

    // 0x3359f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3359f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3359fc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3359fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x335a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335a04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335a0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x335a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335a14: 0xc040880  jal         func_102200
    ctx->pc = 0x335A14u;
    SET_GPR_U32(ctx, 31, 0x335A1Cu);
    ctx->pc = 0x335A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A14u;
    // 0x335a18: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102200u, 0x335A14u, 0x335A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A1Cu;
label_335a1c:
    // 0x335a1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x335a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a20: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x335a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x335a24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335A24u;
    {
        const bool branch_taken_0x335a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A24u;
        // 0x335a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a24) {
            ctx->pc = 0x335A3Cu;
            goto label_335a3c;
        }
    }
    ctx->pc = 0x335A2Cu;
    // 0x335a2c: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x335a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335a30: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x335A30u;
    {
        const bool branch_taken_0x335a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a30) {
            ctx->pc = 0x335A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335A30u;
            // 0x335a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335A3Cu;
            goto label_335a3c;
        }
    }
    ctx->pc = 0x335A38u;
    // 0x335a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_335a3c:
    // 0x335a3c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x335a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x335a40: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x335a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x335a44: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x335a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x335a48: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x335a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x335a4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a50: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x335a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x335a54: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x335a54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335a58: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x335a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x335a5c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x335a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x335a60: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x335a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x335a64: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x335a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x335a68: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x335a6c: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x335a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x335a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335a74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x335a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x335a78: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x335a78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x335a7c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x335a7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x335a80: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x335a80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x335a84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x335A84u;
    {
        const bool branch_taken_0x335a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a84) {
            ctx->pc = 0x335A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335A84u;
            // 0x335a88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335A8Cu;
            goto label_335a8c;
        }
    }
    ctx->pc = 0x335A8Cu;
label_335a8c:
    // 0x335a8c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x335a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x335a90: 0x2812  mflo        $a1
    ctx->pc = 0x335a90u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x335a94: 0x14460016  bne         $v0, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x335A94u;
    {
        const bool branch_taken_0x335a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x335A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A94u;
        // 0x335a98: 0xa32018  mult        $a0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a94) {
            ctx->pc = 0x335AF0u;
            goto label_335af0;
        }
    }
    ctx->pc = 0x335A9Cu;
    // 0x335a9c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x335a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x335aa0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x335aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x335aa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335aa8: 0x84e50004  lh          $a1, 0x4($a3)
    ctx->pc = 0x335aa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335aac: 0x2127a  dsrl        $v0, $v0, 9
    ctx->pc = 0x335aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 9);
    // 0x335ab0: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x335ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x335ab4: 0x3484227c  ori         $a0, $a0, 0x227C
    ctx->pc = 0x335ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8828);
    // 0x335ab8: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x335ab8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x335abc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335ac0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x335ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x335ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335ac8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335AC8u;
    {
        const bool branch_taken_0x335ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x335ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AC8u;
        // 0x335acc: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ac8) {
            ctx->pc = 0x335AE0u;
            goto label_335ae0;
        }
    }
    ctx->pc = 0x335AD0u;
    // 0x335ad0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x335ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x335ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335AD4u;
    {
        const bool branch_taken_0x335ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AD4u;
        // 0x335ad8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ad4) {
            ctx->pc = 0x335AE4u;
            goto label_335ae4;
        }
    }
    ctx->pc = 0x335ADCu;
    // 0x335adc: 0x0  nop
    ctx->pc = 0x335adcu;
    // NOP
label_335ae0:
    // 0x335ae0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x335ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_335ae4:
    // 0x335ae4: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x335ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x335ae8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x335AE8u;
    {
        const bool branch_taken_0x335ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AE8u;
        // 0x335aec: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ae8) {
            ctx->pc = 0x335B24u;
            goto label_335b24;
        }
    }
    ctx->pc = 0x335AF0u;
label_335af0:
    // 0x335af0: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x335af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x335af4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x335af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x335af8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x335afc: 0x34a5927c  ori         $a1, $a1, 0x927C
    ctx->pc = 0x335afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37500);
    // 0x335b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335b04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335b08: 0x2127a  dsrl        $v0, $v0, 9
    ctx->pc = 0x335b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 9);
    // 0x335b0c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x335b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x335b10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x335b14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335b18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x335b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x335b1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x335b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x335b20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x335b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_335b24:
    // 0x335b24: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x335b24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x335b28: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x335b28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x335b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335b38: 0x3e00008  jr          $ra
    ctx->pc = 0x335B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B38u;
        // 0x335b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B40u;
}
