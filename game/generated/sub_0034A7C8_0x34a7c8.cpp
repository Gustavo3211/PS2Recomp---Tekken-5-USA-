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

// Function: sub_0034A7C8
// Address: 0x34a7c8 - 0x34a9e8
void sub_0034A7C8_0x34a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A7C8_0x34a7c8");
#endif

    switch (ctx->pc) {
        case 0x34a848u: goto label_34a848;
        case 0x34a968u: goto label_34a968;
        case 0x34a9b4u: goto label_34a9b4;
        default: break;
    }

    ctx->pc = 0x34a7c8u;

    // 0x34a7c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34a7cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34a7d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a7d4: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x34a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x34a7d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a7dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34a7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a7e4: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x34a7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x34a7e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a7ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34a7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x34a7f4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x34a7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7f8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x34a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x34a7fc: 0x31370004  andi        $s7, $t1, 0x4
    ctx->pc = 0x34a7fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x34a800: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x34a804: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34a804u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a808: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a80c: 0xf18023  subu        $s0, $a3, $s1
    ctx->pc = 0x34a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x34a810: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34a814: 0x265203c0  addiu       $s2, $s2, 0x3C0
    ctx->pc = 0x34a814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    // 0x34a818: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34a81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a820: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x34a820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x34a824: 0x8c750014  lw          $s5, 0x14($v1)
    ctx->pc = 0x34a824u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x34a828: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34a828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34a82c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34a82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34a830: 0x2b03821  addu        $a3, $s5, $s0
    ctx->pc = 0x34a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x34a834: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34a834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34a838: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x34a838u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x34a83c: 0x8e74000c  lw          $s4, 0xC($s3)
    ctx->pc = 0x34a83cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x34a840: 0xc0ce218  jal         func_338860
    ctx->pc = 0x34A840u;
    SET_GPR_U32(ctx, 31, 0x34A848u);
    ctx->pc = 0x34A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A840u;
    // 0x34a844: 0xac670014  sw          $a3, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x34A840u, 0x34A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A848u;
label_34a848:
    // 0x34a848: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34a848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34a84c: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x34a84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x34a850: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x34a854: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x34a854u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x1000d020
    // 0x34a858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34a85c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34a860: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x34a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x34a864: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x34a864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x34a868: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x34a868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34a86c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34a870: 0x32223fff  andi        $v0, $s1, 0x3FFF
    ctx->pc = 0x34a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x34a874: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x34a874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x34a878: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34a87c: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x34a87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x34a880: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x34a880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a884: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34a884u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x34a888: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34a88c: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x34a88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
    // 0x34a890: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x34a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a894: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x34a894u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x34a898: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x34a898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x34a89c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34a89cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x34a8a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x34a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x34a8a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34a8a4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x34a8a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x34a8ac: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x34a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x34a8b0: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x34a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x34a8b4: 0x2d18823  subu        $s1, $s6, $s1
    ctx->pc = 0x34a8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x34a8b8: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x34a8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x34a8bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34a8c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x34A8C0u;
    {
        const bool branch_taken_0x34a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8C0u;
        // 0x34a8c4: 0x235b021  addu        $s6, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8c0) {
            ctx->pc = 0x34A940u;
            goto label_34a940;
        }
    }
    ctx->pc = 0x34A8C8u;
    // 0x34a8c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34a8cc: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A8CCu;
    {
        const bool branch_taken_0x34a8cc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8CCu;
        // 0x34a8d0: 0x24441180  addiu       $a0, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8cc) {
            ctx->pc = 0x34A8E8u;
            goto label_34a8e8;
        }
    }
    ctx->pc = 0x34A8D4u;
    // 0x34a8d4: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x34a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x34a8d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34a8dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34a8e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34A8E0u;
    {
        const bool branch_taken_0x34a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8E0u;
        // 0x34a8e4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8e0) {
            ctx->pc = 0x34A8F8u;
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A8E8u;
label_34a8e8:
    // 0x34a8e8: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x34a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x34a8ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34a8f0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34a8f4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x34a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_34a8f8:
    // 0x34a8f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8fc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34a8fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34a900: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a904: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a908: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x34a908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a90c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34a90cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a910: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x34a910u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a914: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x34a914u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a918: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a91c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a920: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a924: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a928: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a92c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34a92cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34a930: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34a930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34a934: 0x80c81e2  j           func_320788
    ctx->pc = 0x34A934u;
    ctx->pc = 0x34A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A934u;
    // 0x34a938: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x34A93Cu;
    // 0x34a93c: 0x0  nop
    ctx->pc = 0x34a93cu;
    // NOP
label_34a940:
    // 0x34a940: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34a940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34a944: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34a944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34a948: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x34a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x34a94c: 0x24711180  addiu       $s1, $v1, 0x1180
    ctx->pc = 0x34a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x34a950: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x34a950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x34a954: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x34a954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DC4u));
    // 0x34a958: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A958u;
    {
        const bool branch_taken_0x34a958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a958) {
            ctx->pc = 0x34A968u;
            goto label_34a968;
        }
    }
    ctx->pc = 0x34A960u;
    // 0x34a960: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x34A960u;
    SET_GPR_U32(ctx, 31, 0x34A968u);
    ctx->pc = 0x34A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A960u;
    // 0x34a964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x34A960u, 0x34A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A968u;
label_34a968:
    // 0x34a968: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A968u;
    {
        const bool branch_taken_0x34a968 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A968u;
        // 0x34a96c: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a968) {
            ctx->pc = 0x34A988u;
            goto label_34a988;
        }
    }
    ctx->pc = 0x34A970u;
    // 0x34a970: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x34a974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34a974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34a978: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34a97c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34A97Cu;
    {
        const bool branch_taken_0x34a97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A97Cu;
        // 0x34a980: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a97c) {
            ctx->pc = 0x34A998u;
            goto label_34a998;
        }
    }
    ctx->pc = 0x34A984u;
    // 0x34a984: 0x0  nop
    ctx->pc = 0x34a984u;
    // NOP
label_34a988:
    // 0x34a988: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x34a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x34a98c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34a990: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34a994: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x34a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_34a998:
    // 0x34a998: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x34a998u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9a0: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x34a9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a9a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34a9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9ac: 0xc0c819c  jal         func_320670
    ctx->pc = 0x34A9ACu;
    SET_GPR_U32(ctx, 31, 0x34A9B4u);
    ctx->pc = 0x34A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9ACu;
    // 0x34a9b0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320670u, 0x34A9ACu, 0x34A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9B4u;
label_34a9b4:
    // 0x34a9b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a9b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a9bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a9c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a9c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a9c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34a9ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a9d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34a9d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34a9d4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34a9d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34a9d8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x34A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9DCu;
        // 0x34a9e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A9E4u;
    // 0x34a9e4: 0x0  nop
    ctx->pc = 0x34a9e4u;
    // NOP
    ctx->pc = 0x34a9e8u;
}
