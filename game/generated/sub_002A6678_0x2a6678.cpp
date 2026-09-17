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

// Function: sub_002A6678
// Address: 0x2a6678 - 0x2a6a28
void sub_002A6678_0x2a6678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6678_0x2a6678");
#endif

    switch (ctx->pc) {
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66b8u: goto label_2a66b8;
        case 0x2a66d0u: goto label_2a66d0;
        case 0x2a6780u: goto label_2a6780;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a67d8u: goto label_2a67d8;
        case 0x2a6844u: goto label_2a6844;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68acu: goto label_2a68ac;
        case 0x2a6928u: goto label_2a6928;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a6968u: goto label_2a6968;
        case 0x2a6994u: goto label_2a6994;
        case 0x2a69dcu: goto label_2a69dc;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a6a00u: goto label_2a6a00;
        default: break;
    }

    ctx->pc = 0x2a6678u;

    // 0x2a6678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a667c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a6680: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a6680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6688: 0x26500110  addiu       $s0, $s2, 0x110
    ctx->pc = 0x2a6688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x2a668c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a6690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a6690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a6694: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a6694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a6698: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a669c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a66a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a66a4: 0xc0bb8b0  jal         func_2EE2C0
    ctx->pc = 0x2A66A4u;
    SET_GPR_U32(ctx, 31, 0x2A66ACu);
    ctx->pc = 0x2A66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66A4u;
    // 0x2a66a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2A66A4u, 0x2A66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66ACu;
label_2a66ac:
    // 0x2a66ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b0: 0xc0bb8c2  jal         func_2EE308
    ctx->pc = 0x2A66B0u;
    SET_GPR_U32(ctx, 31, 0x2A66B8u);
    ctx->pc = 0x2A66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66B0u;
    // 0x2a66b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2A66B0u, 0x2A66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66B8u;
label_2a66b8:
    // 0x2a66b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a66b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66bc: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x2a66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
    // 0x2a66c0: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A66C0u;
    {
        const bool branch_taken_0x2a66c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66c0) {
            ctx->pc = 0x2A66C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A66C0u;
            // 0x2a66c4: 0x30a25000  andi        $v0, $a1, 0x5000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)20480);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A67E0u;
            goto label_2a67e0;
        }
    }
    ctx->pc = 0x2A66C8u;
    // 0x2a66c8: 0xc092940  jal         func_24A500
    ctx->pc = 0x2A66C8u;
    SET_GPR_U32(ctx, 31, 0x2A66D0u);
    ctx->pc = 0x2A66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66C8u;
    // 0x2a66cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2A66C8u, 0x2A66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D0u;
label_2a66d0:
    // 0x2a66d0: 0x26430130  addiu       $v1, $s2, 0x130
    ctx->pc = 0x2a66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x2a66d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a66d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a66d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A66D8u;
    {
        const bool branch_taken_0x2a66d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66D8u;
        // 0x2a66dc: 0x32228000  andi        $v0, $s1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66d8) {
            ctx->pc = 0x2A66ECu;
            goto label_2a66ec;
        }
    }
    ctx->pc = 0x2A66E0u;
    // 0x2a66e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a66e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a66e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a66e8: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x2a66e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
label_2a66ec:
    // 0x2a66ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A66ECu;
    {
        const bool branch_taken_0x2a66ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66ECu;
        // 0x2a66f0: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66ec) {
            ctx->pc = 0x2A6704u;
            goto label_2a6704;
        }
    }
    ctx->pc = 0x2A66F4u;
    // 0x2a66f4: 0x92420140  lbu         $v0, 0x140($s2)
    ctx->pc = 0x2a66f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2a66f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a66fc: 0xa2420140  sb          $v0, 0x140($s2)
    ctx->pc = 0x2a66fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a6700: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x2a6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_2a6704:
    // 0x2a6704: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6704u;
    {
        const bool branch_taken_0x2a6704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6704) {
            ctx->pc = 0x2A6708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6704u;
            // 0x2a6708: 0x82420140  lb          $v0, 0x140($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A671Cu;
            goto label_2a671c;
        }
    }
    ctx->pc = 0x2A670Cu;
    // 0x2a670c: 0x92420140  lbu         $v0, 0x140($s2)
    ctx->pc = 0x2a670cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2a6710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a6714: 0xa2420140  sb          $v0, 0x140($s2)
    ctx->pc = 0x2a6714u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a6718: 0x82420140  lb          $v0, 0x140($s2)
    ctx->pc = 0x2a6718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
label_2a671c:
    // 0x2a671c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A671Cu;
    {
        const bool branch_taken_0x2a671c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A671Cu;
        // 0x2a6720: 0x92430140  lbu         $v1, 0x140($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a671c) {
            ctx->pc = 0x2A6730u;
            goto label_2a6730;
        }
    }
    ctx->pc = 0x2A6724u;
    // 0x2a6724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6728: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a6728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a672c: 0xa2420140  sb          $v0, 0x140($s2)
    ctx->pc = 0x2a672cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 2));
label_2a6730:
    // 0x2a6730: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2a6730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2a6734: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a6734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a6738: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2a6738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a673c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A673Cu;
    {
        const bool branch_taken_0x2a673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A673Cu;
        // 0x2a6740: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a673c) {
            ctx->pc = 0x2A6750u;
            goto label_2a6750;
        }
    }
    ctx->pc = 0x2A6744u;
    // 0x2a6744: 0xa2400140  sb          $zero, 0x140($s2)
    ctx->pc = 0x2a6744u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6748: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a6748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a674c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2a674cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2a6750:
    // 0x2a6750: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x2a6750u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a6754: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A6754u;
    {
        const bool branch_taken_0x2a6754 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6754u;
        // 0x2a6758: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6754) {
            ctx->pc = 0x2A6790u;
            goto label_2a6790;
        }
    }
    ctx->pc = 0x2A675Cu;
    // 0x2a675c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2a675cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a6760: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6760u;
    {
        const bool branch_taken_0x2a6760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6760u;
        // 0x2a6764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6760) {
            ctx->pc = 0x2A6778u;
            goto label_2a6778;
        }
    }
    ctx->pc = 0x2A6768u;
    // 0x2a6768: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6768u;
    {
        const bool branch_taken_0x2a6768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6768u;
        // 0x2a676c: 0x8e02b7c8  lw          $v0, -0x4838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6768) {
            ctx->pc = 0x2A6788u;
            goto label_2a6788;
        }
    }
    ctx->pc = 0x2A6770u;
    // 0x2a6770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6770u;
    {
        const bool branch_taken_0x2a6770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6770u;
        // 0x2a6774: 0x26530144  addiu       $s3, $s2, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6770) {
            ctx->pc = 0x2A6798u;
            goto label_2a6798;
        }
    }
    ctx->pc = 0x2A6778u;
label_2a6778:
    // 0x2a6778: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x2A6778u;
    SET_GPR_U32(ctx, 31, 0x2A6780u);
    ctx->pc = 0x2A677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6778u;
    // 0x2a677c: 0x2604b7c8  addiu       $a0, $s0, -0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x2A6778u, 0x2A6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6780u;
label_2a6780:
    // 0x2a6780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6780u;
    {
        const bool branch_taken_0x2a6780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6780u;
        // 0x2a6784: 0x8e02b7c8  lw          $v0, -0x4838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6780) {
            ctx->pc = 0x2A6794u;
            goto label_2a6794;
        }
    }
    ctx->pc = 0x2A6788u;
label_2a6788:
    // 0x2a6788: 0xc0a5114  jal         func_294450
    ctx->pc = 0x2A6788u;
    SET_GPR_U32(ctx, 31, 0x2A6790u);
    ctx->pc = 0x2A678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6788u;
    // 0x2a678c: 0x2604b7c8  addiu       $a0, $s0, -0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294450u, 0x2A6788u, 0x2A6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6790u;
label_2a6790:
    // 0x2a6790: 0x8e02b7c8  lw          $v0, -0x4838($s0)
    ctx->pc = 0x2a6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948808)));
label_2a6794:
    // 0x2a6794: 0x26530144  addiu       $s3, $s2, 0x144
    ctx->pc = 0x2a6794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
label_2a6798:
    // 0x2a6798: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x2a6798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x2a679c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a67a0: 0xa2400143  sb          $zero, 0x143($s2)
    ctx->pc = 0x2a67a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 323), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a67a4: 0xa2420141  sb          $v0, 0x141($s2)
    ctx->pc = 0x2a67a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 321), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a67a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a67ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A67ACu;
    {
        const bool branch_taken_0x2a67ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67ACu;
        // 0x2a67b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67ac) {
            ctx->pc = 0x2A67C4u;
            goto label_2a67c4;
        }
    }
    ctx->pc = 0x2A67B4u;
    // 0x2a67b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a67b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a67bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A67BCu;
    {
        const bool branch_taken_0x2a67bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a67bc) {
            ctx->pc = 0x2A67D0u;
            goto label_2a67d0;
        }
    }
    ctx->pc = 0x2A67C4u;
label_2a67c4:
    // 0x2a67c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a67c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a67c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a67d0:
    // 0x2a67d0: 0xc0a9648  jal         func_2A5920
    ctx->pc = 0x2A67D0u;
    SET_GPR_U32(ctx, 31, 0x2A67D8u);
    ctx->pc = 0x2A67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A67D0u;
    // 0x2a67d4: 0x82450140  lb          $a1, 0x140($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5920u, 0x2A67D0u, 0x2A67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67D8u;
label_2a67d8:
    // 0x2a67d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A67D8u;
    {
        const bool branch_taken_0x2a67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D8u;
        // 0x2a67dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d8) {
            ctx->pc = 0x2A6868u;
            goto label_2a6868;
        }
    }
    ctx->pc = 0x2A67E0u;
label_2a67e0:
    // 0x2a67e0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A67E0u;
    {
        const bool branch_taken_0x2a67e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67E0u;
        // 0x2a67e4: 0x30a24000  andi        $v0, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67e0) {
            ctx->pc = 0x2A6860u;
            goto label_2a6860;
        }
    }
    ctx->pc = 0x2A67E8u;
    // 0x2a67e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A67E8u;
    {
        const bool branch_taken_0x2a67e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67E8u;
        // 0x2a67ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67e8) {
            ctx->pc = 0x2A6810u;
            goto label_2a6810;
        }
    }
    ctx->pc = 0x2A67F0u;
    // 0x2a67f0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2a67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2a67f4: 0x82440141  lb          $a0, 0x141($s2)
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 321)));
    // 0x2a67f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a67fc: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2a67fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a6800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6800u;
    {
        const bool branch_taken_0x2a6800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6800u;
        // 0x2a6804: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6800) {
            ctx->pc = 0x2A6810u;
            goto label_2a6810;
        }
    }
    ctx->pc = 0x2A6808u;
    // 0x2a6808: 0xae440104  sw          $a0, 0x104($s2)
    ctx->pc = 0x2a6808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 4));
    // 0x2a680c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a680cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6810:
    // 0x2a6810: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x2a6810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x2a6814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6814u;
    {
        const bool branch_taken_0x2a6814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6814) {
            ctx->pc = 0x2A6834u;
            goto label_2a6834;
        }
    }
    ctx->pc = 0x2A681Cu;
    // 0x2a681c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2a6820: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a6824: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6824u;
    {
        const bool branch_taken_0x2a6824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6824u;
        // 0x2a6828: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6824) {
            ctx->pc = 0x2A6834u;
            goto label_2a6834;
        }
    }
    ctx->pc = 0x2A682Cu;
    // 0x2a682c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x2a682cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x2a6830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6834:
    // 0x2a6834: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A6834u;
    {
        const bool branch_taken_0x2a6834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6834u;
        // 0x2a6838: 0x26530144  addiu       $s3, $s2, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6834) {
            ctx->pc = 0x2A6864u;
            goto label_2a6864;
        }
    }
    ctx->pc = 0x2A683Cu;
    // 0x2a683c: 0xc092940  jal         func_24A500
    ctx->pc = 0x2A683Cu;
    SET_GPR_U32(ctx, 31, 0x2A6844u);
    ctx->pc = 0x2A6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A683Cu;
    // 0x2a6840: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2A683Cu, 0x2A6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6844u;
label_2a6844:
    // 0x2a6844: 0x26430130  addiu       $v1, $s2, 0x130
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x2a6848: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a6848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a684c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A684Cu;
    {
        const bool branch_taken_0x2a684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A684Cu;
        // 0x2a6850: 0x26530144  addiu       $s3, $s2, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a684c) {
            ctx->pc = 0x2A6864u;
            goto label_2a6864;
        }
    }
    ctx->pc = 0x2A6854u;
    // 0x2a6854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6858u;
    {
        const bool branch_taken_0x2a6858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6858u;
        // 0x2a685c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6858) {
            ctx->pc = 0x2A6864u;
            goto label_2a6864;
        }
    }
    ctx->pc = 0x2A6860u;
label_2a6860:
    // 0x2a6860: 0x26530144  addiu       $s3, $s2, 0x144
    ctx->pc = 0x2a6860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
label_2a6864:
    // 0x2a6864: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a6864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a6868:
    // 0x2a6868: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6868u;
    {
        const bool branch_taken_0x2a6868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6868) {
            ctx->pc = 0x2A686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6868u;
            // 0x2a686c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6884u;
            goto label_2a6884;
        }
    }
    ctx->pc = 0x2A6870u;
    // 0x2a6870: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a6870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a6874: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a6878: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6878u;
    {
        const bool branch_taken_0x2a6878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6878u;
        // 0x2a687c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6878) {
            ctx->pc = 0x2A688Cu;
            goto label_2a688c;
        }
    }
    ctx->pc = 0x2A6880u;
    // 0x2a6880: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2a6880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2a6884:
    // 0x2a6884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a6884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6888: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2a6888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2a688c:
    // 0x2a688c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6894: 0xc0a9660  jal         func_2A5980
    ctx->pc = 0x2A6894u;
    SET_GPR_U32(ctx, 31, 0x2A689Cu);
    ctx->pc = 0x2A6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6894u;
    // 0x2a6898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5980u, 0x2A6894u, 0x2A689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A689Cu;
label_2a689c:
    // 0x2a689c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a68a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a68a4: 0xc0a9660  jal         func_2A5980
    ctx->pc = 0x2A68A4u;
    SET_GPR_U32(ctx, 31, 0x2A68ACu);
    ctx->pc = 0x2A68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68A4u;
    // 0x2a68a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5980u, 0x2A68A4u, 0x2A68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68ACu;
label_2a68ac:
    // 0x2a68ac: 0x82470143  lb          $a3, 0x143($s2)
    ctx->pc = 0x2a68acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 323)));
    // 0x2a68b0: 0x8e460104  lw          $a2, 0x104($s2)
    ctx->pc = 0x2a68b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2a68b4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a68b8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2a68b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a68bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A68BCu;
    {
        const bool branch_taken_0x2a68bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68BCu;
        // 0x2a68c0: 0x24e20002  addiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68bc) {
            ctx->pc = 0x2A68D8u;
            goto label_2a68d8;
        }
    }
    ctx->pc = 0x2A68C4u;
    // 0x2a68c4: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x2a68c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a68c8: 0x622000f  bltzl       $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A68C8u;
    {
        const bool branch_taken_0x2a68c8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2a68c8) {
            ctx->pc = 0x2A68CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A68C8u;
            // 0x2a68cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6908u;
            goto label_2a6908;
        }
    }
    ctx->pc = 0x2A68D0u;
    // 0x2a68d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A68D0u;
    {
        const bool branch_taken_0x2a68d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68D0u;
        // 0x2a68d4: 0x111600  sll         $v0, $s1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68d0) {
            ctx->pc = 0x2A690Cu;
            goto label_2a690c;
        }
    }
    ctx->pc = 0x2A68D8u;
label_2a68d8:
    // 0x2a68d8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2a68d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a68dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A68DCu;
    {
        const bool branch_taken_0x2a68dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68DCu;
        // 0x2a68e0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68dc) {
            ctx->pc = 0x2A6908u;
            goto label_2a6908;
        }
    }
    ctx->pc = 0x2A68E4u;
    // 0x2a68e4: 0x82430141  lb          $v1, 0x141($s2)
    ctx->pc = 0x2a68e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 321)));
    // 0x2a68e8: 0x24d1fffe  addiu       $s1, $a2, -0x2
    ctx->pc = 0x2a68e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2a68ec: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2a68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2a68f0: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x2a68f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2a68f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A68F4u;
    {
        const bool branch_taken_0x2a68f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a68f4) {
            ctx->pc = 0x2A68F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A68F4u;
            // 0x2a68f8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6908u;
            goto label_2a6908;
        }
    }
    ctx->pc = 0x2A68FCu;
    // 0x2a68fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A68FCu;
    {
        const bool branch_taken_0x2a68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68FCu;
        // 0x2a6900: 0x111600  sll         $v0, $s1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68fc) {
            ctx->pc = 0x2A690Cu;
            goto label_2a690c;
        }
    }
    ctx->pc = 0x2A6904u;
    // 0x2a6904: 0x0  nop
    ctx->pc = 0x2a6904u;
    // NOP
label_2a6908:
    // 0x2a6908: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
label_2a690c:
    // 0x2a690c: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a6910: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6910u;
    {
        const bool branch_taken_0x2a6910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6910u;
        // 0x2a6914: 0xa2510143  sb          $s1, 0x143($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 323), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6910) {
            ctx->pc = 0x2A6930u;
            goto label_2a6930;
        }
    }
    ctx->pc = 0x2A6918u;
    // 0x2a6918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a691c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6920: 0xc0a9660  jal         func_2A5980
    ctx->pc = 0x2A6920u;
    SET_GPR_U32(ctx, 31, 0x2A6928u);
    ctx->pc = 0x2A6924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6920u;
    // 0x2a6924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5980u, 0x2A6920u, 0x2A6928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6928u;
label_2a6928:
    // 0x2a6928: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A6928u;
    {
        const bool branch_taken_0x2a6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6928u;
        // 0x2a692c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6928) {
            ctx->pc = 0x2A6954u;
            goto label_2a6954;
        }
    }
    ctx->pc = 0x2A6930u;
label_2a6930:
    // 0x2a6930: 0x82420141  lb          $v0, 0x141($s2)
    ctx->pc = 0x2a6930u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 321)));
    // 0x2a6934: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2a6938: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6938u;
    {
        const bool branch_taken_0x2a6938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6938u;
        // 0x2a693c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6938) {
            ctx->pc = 0x2A6954u;
            goto label_2a6954;
        }
    }
    ctx->pc = 0x2A6940u;
    // 0x2a6940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6944: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a6944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a6948: 0xc0a9660  jal         func_2A5980
    ctx->pc = 0x2A6948u;
    SET_GPR_U32(ctx, 31, 0x2A6950u);
    ctx->pc = 0x2A694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6948u;
    // 0x2a694c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5980u, 0x2A6948u, 0x2A6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6950u;
label_2a6950:
    // 0x2a6950: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2a6954:
    // 0x2a6954: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2a6954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2a6958: 0x2456b7c8  addiu       $s6, $v0, -0x4838
    ctx->pc = 0x2a6958u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2a695c: 0x247578b0  addiu       $s5, $v1, 0x78B0
    ctx->pc = 0x2a695cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 30896));
    // 0x2a6960: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a6960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6964: 0x0  nop
    ctx->pc = 0x2a6964u;
    // NOP
label_2a6968:
    // 0x2a6968: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x2a6968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2a696c: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x2a696cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a6970: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x2a6970u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2a6974: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2a6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2a6978: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2a6978u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a697c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6980: 0x82450140  lb          $a1, 0x140($s2)
    ctx->pc = 0x2a6980u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2a6984: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x2a6988: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a6988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a698c: 0xc0a9818  jal         func_2A6060
    ctx->pc = 0x2A698Cu;
    SET_GPR_U32(ctx, 31, 0x2A6994u);
    ctx->pc = 0x2A6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A698Cu;
    // 0x2a6990: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6060u, 0x2A698Cu, 0x2A6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6994u;
label_2a6994:
    // 0x2a6994: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x2a6994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2a6998: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2a699c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a69a0: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A69A0u;
    {
        const bool branch_taken_0x2a69a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69A0u;
        // 0x2a69a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69a0) {
            ctx->pc = 0x2A69ECu;
            goto label_2a69ec;
        }
    }
    ctx->pc = 0x2A69A8u;
    // 0x2a69a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a69ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A69ACu;
    {
        const bool branch_taken_0x2a69ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69ACu;
        // 0x2a69b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69ac) {
            ctx->pc = 0x2A69C4u;
            goto label_2a69c4;
        }
    }
    ctx->pc = 0x2A69B4u;
    // 0x2a69b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a69b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2a69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a69bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A69BCu;
    {
        const bool branch_taken_0x2a69bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a69bc) {
            ctx->pc = 0x2A69C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A69BCu;
            // 0x2a69c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A69D4u;
            goto label_2a69d4;
        }
    }
    ctx->pc = 0x2A69C4u;
label_2a69c4:
    // 0x2a69c4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2a69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2a69c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a69c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69cc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2a69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2a69d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a69d4:
    // 0x2a69d4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2A69D4u;
    SET_GPR_U32(ctx, 31, 0x2A69DCu);
    ctx->pc = 0x2A69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69D4u;
    // 0x2a69d8: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A69D4u, 0x2A69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69DCu;
label_2a69dc:
    // 0x2a69dc: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x2a69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2a69e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a69e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a69e4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A69E4u;
    SET_GPR_U32(ctx, 31, 0x2A69ECu);
    ctx->pc = 0x2A69E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69E4u;
    // 0x2a69e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A69E4u, 0x2A69ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69ECu;
label_2a69ec:
    // 0x2a69ec: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x2a69ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a69f0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2A69F0u;
    {
        const bool branch_taken_0x2a69f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69F0u;
        // 0x2a69f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69f0) {
            ctx->pc = 0x2A6968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6968;
        }
    }
    ctx->pc = 0x2A69F8u;
    // 0x2a69f8: 0xc0a9ade  jal         func_2A6B78
    ctx->pc = 0x2A69F8u;
    SET_GPR_U32(ctx, 31, 0x2A6A00u);
    ctx->pc = 0x2A69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69F8u;
    // 0x2a69fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B78u, 0x2A69F8u, 0x2A6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A00u;
label_2a6a00:
    // 0x2a6a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6a08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a6a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6a0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a6a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a6a10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a6a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6a14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a6a14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a6a18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a6a18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6a1c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a6a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a6a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A20u;
        // 0x2a6a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6A28u;
}
