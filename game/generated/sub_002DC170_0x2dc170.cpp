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

// Function: sub_002DC170
// Address: 0x2dc170 - 0x2dc318
void sub_002DC170_0x2dc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC170_0x2dc170");
#endif

    switch (ctx->pc) {
        case 0x2dc1a4u: goto label_2dc1a4;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc288u: goto label_2dc288;
        case 0x2dc2b8u: goto label_2dc2b8;
        case 0x2dc2f8u: goto label_2dc2f8;
        default: break;
    }

    ctx->pc = 0x2dc170u;

    // 0x2dc170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dc178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dc178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc17c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2dc17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2dc180: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dc180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc18c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dc190: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2dc190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc194: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dc194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dc198: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2dc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2dc19c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DC19Cu;
    SET_GPR_U32(ctx, 31, 0x2DC1A4u);
    ctx->pc = 0x2DC1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC19Cu;
    // 0x2dc1a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DC19Cu, 0x2DC1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1A4u;
label_2dc1a4:
    // 0x2dc1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1a8: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x2DC1A8u;
    SET_GPR_U32(ctx, 31, 0x2DC1B0u);
    ctx->pc = 0x2DC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1A8u;
    // 0x2dc1ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x2DC1A8u, 0x2DC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1B0u;
label_2dc1b0:
    // 0x2dc1b0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2dc1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b4: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc1b8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DC1B8u;
    {
        const bool branch_taken_0x2dc1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1B8u;
        // 0x2dc1bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1b8) {
            ctx->pc = 0x2DC268u;
            goto label_2dc268;
        }
    }
    ctx->pc = 0x2DC1C0u;
    // 0x2dc1c0: 0xa70c0  sll         $t6, $t2, 3
    ctx->pc = 0x2dc1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2dc1c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1c8: 0x1ca4821  addu        $t1, $t6, $t2
    ctx->pc = 0x2dc1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x2dc1cc: 0x260d0008  addiu       $t5, $s0, 0x8
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2dc1d0: 0x96040  sll         $t4, $t1, 1
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2dc1d4: 0x264b0008  addiu       $t3, $s2, 0x8
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2dc1d8:
    // 0x2dc1d8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2dc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2dc1dc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x2dc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2dc1e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dc1e4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2dc1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2dc1e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2dc1ec: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x2dc1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x2dc1f0: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2dc1f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc1f4: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2dc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2dc1f8: 0x1a83821  addu        $a3, $t5, $t0
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2dc1fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dc1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dc200: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x2dc200u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2dc204: 0x29050004  slti        $a1, $t0, 0x4
    ctx->pc = 0x2dc204u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc208: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2dc208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc20c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DC20Cu;
    {
        const bool branch_taken_0x2dc20c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC20Cu;
        // 0x2dc210: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc20c) {
            ctx->pc = 0x2DC1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc1d8;
        }
    }
    ctx->pc = 0x2DC214u;
    // 0x2dc214: 0x1ca1021  addu        $v0, $t6, $t2
    ctx->pc = 0x2dc214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x2dc218: 0x260a000c  addiu       $t2, $s0, 0xC
    ctx->pc = 0x2dc218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dc21c: 0x260d000f  addiu       $t5, $s0, 0xF
    ctx->pc = 0x2dc21cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2dc220: 0x26040  sll         $t4, $v0, 1
    ctx->pc = 0x2dc220u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dc224: 0x264b000f  addiu       $t3, $s2, 0xF
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2dc228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc22c: 0x2649000c  addiu       $t1, $s2, 0xC
    ctx->pc = 0x2dc22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2dc230:
    // 0x2dc230: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x2dc234: 0x1483821  addu        $a3, $t2, $t0
    ctx->pc = 0x2dc234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2dc238: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x2dc238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2dc23c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2dc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2dc240: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2dc240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc244: 0x1a83021  addu        $a2, $t5, $t0
    ctx->pc = 0x2dc244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2dc248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dc248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dc24c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x2dc24cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc250: 0x29050003  slti        $a1, $t0, 0x3
    ctx->pc = 0x2dc250u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc254: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2dc254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc258: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DC258u;
    {
        const bool branch_taken_0x2dc258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC258u;
        // 0x2dc25c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc258) {
            ctx->pc = 0x2DC230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC260u;
    // 0x2dc260: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2DC260u;
    {
        const bool branch_taken_0x2dc260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC260u;
        // 0x2dc264: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc260) {
            ctx->pc = 0x2DC2D8u;
            goto label_2dc2d8;
        }
    }
    ctx->pc = 0x2DC268u;
label_2dc268:
    // 0x2dc268: 0x16620021  bne         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DC268u;
    {
        const bool branch_taken_0x2dc268 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC268u;
        // 0x2dc26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc268) {
            ctx->pc = 0x2DC2F0u;
            goto label_2dc2f0;
        }
    }
    ctx->pc = 0x2DC270u;
    // 0x2dc270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dc270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc274: 0x1542001e  bne         $t2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC274u;
    {
        const bool branch_taken_0x2dc274 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC274u;
        // 0x2dc278: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc274) {
            ctx->pc = 0x2DC2F0u;
            goto label_2dc2f0;
        }
    }
    ctx->pc = 0x2DC27Cu;
    // 0x2dc27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc280: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc284: 0x0  nop
    ctx->pc = 0x2dc284u;
    // NOP
label_2dc288:
    // 0x2dc288: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2dc288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc28c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2dc28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dc290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc294: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2dc294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dc298: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc29c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2dc29cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc2a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DC2A0u;
    {
        const bool branch_taken_0x2dc2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2A0u;
        // 0x2dc2a4: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2a0) {
            ctx->pc = 0x2DC288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc288;
        }
    }
    ctx->pc = 0x2DC2A8u;
    // 0x2dc2a8: 0x2607000f  addiu       $a3, $s0, 0xF
    ctx->pc = 0x2dc2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2dc2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2b0: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2dc2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dc2b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2dc2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc2b8:
    // 0x2dc2b8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dc2bc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dc2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dc2c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc2c4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2dc2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc2c8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2dc2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc2cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DC2CCu;
    {
        const bool branch_taken_0x2dc2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2CCu;
        // 0x2dc2d0: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2cc) {
            ctx->pc = 0x2DC2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc2b8;
        }
    }
    ctx->pc = 0x2DC2D4u;
    // 0x2dc2d4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2dc2d8:
    // 0x2dc2d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc2dc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc2e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc2e4: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2dc2e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC2E8u;
    {
        const bool branch_taken_0x2dc2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2E8u;
        // 0x2dc2ec: 0xac6408bc  sw          $a0, 0x8BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2e8) {
            ctx->pc = 0x2DC2F8u;
            goto label_2dc2f8;
        }
    }
    ctx->pc = 0x2DC2F0u;
label_2dc2f0:
    // 0x2dc2f0: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x2DC2F0u;
    SET_GPR_U32(ctx, 31, 0x2DC2F8u);
    ctx->pc = 0x2DC2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC2F0u;
    // 0x2dc2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x2DC2F0u, 0x2DC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2F8u;
label_2dc2f8:
    // 0x2dc2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dc300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dc304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc308: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2dc308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc30c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2dc30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dc310: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC310u;
        // 0x2dc314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC318u;
}
