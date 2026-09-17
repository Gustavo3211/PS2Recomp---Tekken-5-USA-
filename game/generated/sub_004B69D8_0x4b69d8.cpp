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

// Function: sub_004B69D8
// Address: 0x4b69d8 - 0x4b6c50
void sub_004B69D8_0x4b69d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B69D8_0x4b69d8");
#endif

    switch (ctx->pc) {
        case 0x4b6a24u: goto label_4b6a24;
        case 0x4b6a2cu: goto label_4b6a2c;
        case 0x4b6a44u: goto label_4b6a44;
        case 0x4b6ae0u: goto label_4b6ae0;
        case 0x4b6b10u: goto label_4b6b10;
        case 0x4b6b18u: goto label_4b6b18;
        case 0x4b6b20u: goto label_4b6b20;
        case 0x4b6b28u: goto label_4b6b28;
        case 0x4b6b60u: goto label_4b6b60;
        case 0x4b6bc4u: goto label_4b6bc4;
        case 0x4b6c00u: goto label_4b6c00;
        case 0x4b6c1cu: goto label_4b6c1c;
        case 0x4b6c24u: goto label_4b6c24;
        default: break;
    }

    ctx->pc = 0x4b69d8u;

    // 0x4b69d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b69d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b69dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b69dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b69e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b69e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b69e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b69e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b69e8: 0x265301b4  addiu       $s3, $s2, 0x1B4
    ctx->pc = 0x4b69e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x4b69ec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b69ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b69f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b69f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b69f4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b69f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b69fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b69fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b6a00: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b6a04: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b6a08: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4b6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4b6a0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4b6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4b6a10: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b6a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b6a14: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4B6A14u;
    {
        const bool branch_taken_0x4b6a14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A14u;
        // 0x4b6a18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a14) {
            ctx->pc = 0x4B6AB8u;
            goto label_4b6ab8;
        }
    }
    ctx->pc = 0x4B6A1Cu;
    // 0x4b6a1c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B6A1Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A24u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B6A1Cu, 0x4B6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A24u;
label_4b6a24:
    // 0x4b6a24: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B6A24u;
    SET_GPR_U32(ctx, 31, 0x4B6A2Cu);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B6A24u, 0x4B6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A2Cu;
label_4b6a2c:
    // 0x4b6a2c: 0xa642015e  sh          $v0, 0x15E($s2)
    ctx->pc = 0x4b6a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6a30: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b6a34: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b6a38: 0x84500036  lh          $s0, 0x36($v0)
    ctx->pc = 0x4b6a38u;
    SET_GPR_S32(ctx, 16, (int16_t)FAST_READ16(0x72D6B6u));
    // 0x4b6a3c: 0xc129364  jal         func_4A4D90
    ctx->pc = 0x4B6A3Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A44u);
    ctx->pc = 0x4B6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A3Cu;
    // 0x4b6a40: 0x84510038  lh          $s1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D90u, 0x4B6A3Cu, 0x4B6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A44u;
label_4b6a44:
    // 0x4b6a44: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4b6a44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4b6a48: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x4b6a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4b6a4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4b6a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b6a50: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x4b6a50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4b6a54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6a58: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b6a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b6a5c: 0x24e56d80  addiu       $a1, $a3, 0x6D80
    ctx->pc = 0x4b6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28032));
    // 0x4b6a60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b6a64: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b6a64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b6a68: 0xa6430160  sh          $v1, 0x160($s2)
    ctx->pc = 0x4b6a68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6a6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6a70: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4b6a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b6a74: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x4b6a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4b6a78: 0xa6430162  sh          $v1, 0x162($s2)
    ctx->pc = 0x4b6a78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6a7c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b6a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6a80: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4b6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4b6a84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b6a88: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4b6a88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4b6a8c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b6a90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b6a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b6a94: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b6a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6a98: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x4b6a98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6a9c: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x4b6a9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4b6aa0: 0xa6440158  sh          $a0, 0x158($s2)
    ctx->pc = 0x4b6aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b6aa4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b6aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b6aa8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b6aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b6aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6AACu;
    {
        const bool branch_taken_0x4b6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6AACu;
        // 0x4b6ab0: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6aac) {
            ctx->pc = 0x4B6AC0u;
            goto label_4b6ac0;
        }
    }
    ctx->pc = 0x4B6AB4u;
    // 0x4b6ab4: 0x0  nop
    ctx->pc = 0x4b6ab4u;
    // NOP
label_4b6ab8:
    // 0x4b6ab8: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x4b6ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4b6abc: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b6abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4b6ac0:
    // 0x4b6ac0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b6ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6ac4: 0x24e36d80  addiu       $v1, $a3, 0x6D80
    ctx->pc = 0x4b6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 28032));
    // 0x4b6ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6acc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4b6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4b6ad0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b6ad4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4b6ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4b6ad8: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4B6AD8u;
    SET_GPR_U32(ctx, 31, 0x4B6AE0u);
    ctx->pc = 0x4B6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6AD8u;
    // 0x4b6adc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4B6AD8u, 0x4B6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6AE0u;
label_4b6ae0:
    // 0x4b6ae0: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x4B6AE0u;
    {
        const bool branch_taken_0x4b6ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6ae0) {
            ctx->pc = 0x4B6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6AE0u;
            // 0x4b6ae4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6C28u;
            goto label_4b6c28;
        }
    }
    ctx->pc = 0x4B6AE8u;
    // 0x4b6ae8: 0x964201b6  lhu         $v0, 0x1B6($s2)
    ctx->pc = 0x4b6ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 438)));
    // 0x4b6aec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b6af0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B6AF0u;
    {
        const bool branch_taken_0x4b6af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6AF0u;
        // 0x4b6af4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6af0) {
            ctx->pc = 0x4B6B20u;
            goto label_4b6b20;
        }
    }
    ctx->pc = 0x4B6AF8u;
    // 0x4b6af8: 0x96150002  lhu         $s5, 0x2($s0)
    ctx->pc = 0x4b6af8u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4b6afc: 0x96160004  lhu         $s6, 0x4($s0)
    ctx->pc = 0x4b6afcu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b6b00: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x4b6b00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x4b6b04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b6b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6b08: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B6B08u;
    SET_GPR_U32(ctx, 31, 0x4B6B10u);
    ctx->pc = 0x4B6B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B08u;
    // 0x4b6b0c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B6B08u, 0x4B6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B10u;
label_4b6b10:
    // 0x4b6b10: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B6B10u;
    SET_GPR_U32(ctx, 31, 0x4B6B18u);
    ctx->pc = 0x4B6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B10u;
    // 0x4b6b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B6B10u, 0x4B6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B18u;
label_4b6b18:
    // 0x4b6b18: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B6B18u;
    SET_GPR_U32(ctx, 31, 0x4B6B20u);
    ctx->pc = 0x4B6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B18u;
    // 0x4b6b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B6B18u, 0x4B6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B20u;
label_4b6b20:
    // 0x4b6b20: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B6B20u;
    SET_GPR_U32(ctx, 31, 0x4B6B28u);
    ctx->pc = 0x4B6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B20u;
    // 0x4b6b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B6B20u, 0x4B6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B28u;
label_4b6b28:
    // 0x4b6b28: 0x964201be  lhu         $v0, 0x1BE($s2)
    ctx->pc = 0x4b6b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x4b6b2c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b6b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b6b30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B6B30u;
    {
        const bool branch_taken_0x4b6b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b30) {
            ctx->pc = 0x4B6B58u;
            goto label_4b6b58;
        }
    }
    ctx->pc = 0x4B6B38u;
    // 0x4b6b38: 0x2644015e  addiu       $a0, $s2, 0x15E
    ctx->pc = 0x4b6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4b6b3c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b6b3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b6b44: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b6b44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6b48: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x4b6b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b6b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b6b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6B50u;
    {
        const bool branch_taken_0x4b6b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b50) {
            ctx->pc = 0x4B6B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6B50u;
            // 0x4b6b54: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6B68u;
            goto label_4b6b68;
        }
    }
    ctx->pc = 0x4B6B58u;
label_4b6b58:
    // 0x4b6b58: 0xc12da46  jal         func_4B6918
    ctx->pc = 0x4B6B58u;
    SET_GPR_U32(ctx, 31, 0x4B6B60u);
    ctx->pc = 0x4B6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B58u;
    // 0x4b6b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6918u, 0x4B6B58u, 0x4B6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B60u;
label_4b6b60:
    // 0x4b6b60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4B6B60u;
    {
        const bool branch_taken_0x4b6b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B60u;
        // 0x4b6b64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b60) {
            ctx->pc = 0x4B6C28u;
            goto label_4b6c28;
        }
    }
    ctx->pc = 0x4B6B68u;
label_4b6b68:
    // 0x4b6b68: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4b6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4b6b6c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4b6b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4b6b70: 0x24040c00  addiu       $a0, $zero, 0xC00
    ctx->pc = 0x4b6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x4b6b74: 0xa4a22330  sh          $v0, 0x2330($a1)
    ctx->pc = 0x4b6b74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4b6b78: 0x24b3233a  addiu       $s3, $a1, 0x233A
    ctx->pc = 0x4b6b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 9018));
    // 0x4b6b7c: 0x24b4233c  addiu       $s4, $a1, 0x233C
    ctx->pc = 0x4b6b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 9020));
    // 0x4b6b80: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b6b80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6b84: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x4b6b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x4b6b88: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4b6b88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4b6b8c: 0x96430016  lhu         $v1, 0x16($s2)
    ctx->pc = 0x4b6b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4b6b90: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4b6b90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4b6b94: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x4b6b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x4b6b98: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4b6b98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4b6b9c: 0x96430118  lhu         $v1, 0x118($s2)
    ctx->pc = 0x4b6b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x4b6ba0: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4b6ba0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BAu, _value); } while (0);
    // 0x4b6ba4: 0x9642011c  lhu         $v0, 0x11C($s2)
    ctx->pc = 0x4b6ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4b6ba8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4b6ba8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BCu, _value); } while (0);
    // 0x4b6bac: 0x96430120  lhu         $v1, 0x120($s2)
    ctx->pc = 0x4b6bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x4b6bb0: 0xa4a3233e  sh          $v1, 0x233E($a1)
    ctx->pc = 0x4b6bb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9BEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BEu, _value); } while (0);
    // 0x4b6bb4: 0x86450130  lh          $a1, 0x130($s2)
    ctx->pc = 0x4b6bb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4b6bb8: 0x86460132  lh          $a2, 0x132($s2)
    ctx->pc = 0x4b6bb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x4b6bbc: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B6BBCu;
    SET_GPR_U32(ctx, 31, 0x4B6BC4u);
    ctx->pc = 0x4B6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6BBCu;
    // 0x4b6bc0: 0x86470134  lh          $a3, 0x134($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B6BBCu, 0x4B6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6BC4u;
label_4b6bc4:
    // 0x4b6bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b6bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6bcc: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B6BCCu;
    {
        const bool branch_taken_0x4b6bcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BCCu;
        // 0x4b6bd0: 0x36a3ffff  ori         $v1, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6bcc) {
            ctx->pc = 0x4B6C14u;
            goto label_4b6c14;
        }
    }
    ctx->pc = 0x4B6BD4u;
    // 0x4b6bd4: 0x86440160  lh          $a0, 0x160($s2)
    ctx->pc = 0x4b6bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x4b6bd8: 0x86450162  lh          $a1, 0x162($s2)
    ctx->pc = 0x4b6bd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4b6bdc: 0x36c2ffff  ori         $v0, $s6, 0xFFFF
    ctx->pc = 0x4b6bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4b6be0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b6be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b6be4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b6be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6be8: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b6be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b6bec: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x4b6becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b6bf0: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x4b6bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b6bf4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4b6bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6bf8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B6BF8u;
    SET_GPR_U32(ctx, 31, 0x4B6C00u);
    ctx->pc = 0x4B6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6BF8u;
    // 0x4b6bfc: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B6BF8u, 0x4B6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6C00u;
label_4b6c00:
    // 0x4b6c00: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6C00u;
    {
        const bool branch_taken_0x4b6c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C00u;
        // 0x4b6c04: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c00) {
            ctx->pc = 0x4B6C14u;
            goto label_4b6c14;
        }
    }
    ctx->pc = 0x4B6C08u;
    // 0x4b6c08: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x4b6c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b6c0c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4b6c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6c10: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x4b6c10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_4b6c14:
    // 0x4b6c14: 0xc127a8c  jal         func_49EA30
    ctx->pc = 0x4B6C14u;
    SET_GPR_U32(ctx, 31, 0x4B6C1Cu);
    ctx->pc = 0x4B6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6C14u;
    // 0x4b6c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA30u, 0x4B6C14u, 0x4B6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6C1Cu;
label_4b6c1c:
    // 0x4b6c1c: 0xc12da46  jal         func_4B6918
    ctx->pc = 0x4B6C1Cu;
    SET_GPR_U32(ctx, 31, 0x4B6C24u);
    ctx->pc = 0x4B6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6C1Cu;
    // 0x4b6c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6918u, 0x4B6C1Cu, 0x4B6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6C24u;
label_4b6c24:
    // 0x4b6c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b6c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6c28:
    // 0x4b6c28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b6c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b6c2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b6c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b6c30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b6c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b6c34: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b6c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b6c38: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b6c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6c3c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b6c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b6c40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b6c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b6c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C44u;
        // 0x4b6c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6C4Cu;
    // 0x4b6c4c: 0x0  nop
    ctx->pc = 0x4b6c4cu;
    // NOP
    ctx->pc = 0x4b6c50u;
}
