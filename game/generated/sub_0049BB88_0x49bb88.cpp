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

// Function: sub_0049BB88
// Address: 0x49bb88 - 0x49c060
void sub_0049BB88_0x49bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049BB88_0x49bb88");
#endif

    switch (ctx->pc) {
        case 0x49bbc0u: goto label_49bbc0;
        case 0x49bc70u: goto label_49bc70;
        case 0x49bc80u: goto label_49bc80;
        case 0x49bc90u: goto label_49bc90;
        case 0x49bca0u: goto label_49bca0;
        case 0x49bcb0u: goto label_49bcb0;
        case 0x49bcc0u: goto label_49bcc0;
        case 0x49bcd0u: goto label_49bcd0;
        case 0x49bce0u: goto label_49bce0;
        case 0x49bcf0u: goto label_49bcf0;
        case 0x49bd00u: goto label_49bd00;
        case 0x49bd10u: goto label_49bd10;
        case 0x49bd20u: goto label_49bd20;
        case 0x49bd30u: goto label_49bd30;
        case 0x49bd40u: goto label_49bd40;
        case 0x49bd50u: goto label_49bd50;
        case 0x49be80u: goto label_49be80;
        default: break;
    }

    ctx->pc = 0x49bb88u;

    // 0x49bb88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49bb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x49bb8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49bb90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49bb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bb94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49bb98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49bb9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49bba0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x49bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x49bba4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x49bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x49bba8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x49bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x49bbac: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x49bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x49bbb0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x49bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x49bbb4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x49bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x49bbb8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49BBB8u;
    SET_GPR_U32(ctx, 31, 0x49BBC0u);
    ctx->pc = 0x49BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BBB8u;
    // 0x49bbbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49BBB8u, 0x49BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BBC0u;
label_49bbc0:
    // 0x49bbc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49bbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bbc4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49bbc8: 0xac500b80  sw          $s0, 0xB80($v0)
    ctx->pc = 0x49bbc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7F0B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B80u, _value); } while (0);
    // 0x49bbcc: 0x862301b4  lh          $v1, 0x1B4($s1)
    ctx->pc = 0x49bbccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x49bbd0: 0x4630114  bgezl       $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x49BBD0u;
    {
        const bool branch_taken_0x49bbd0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x49bbd0) {
            ctx->pc = 0x49BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BBD0u;
            // 0x49bbd4: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C024u;
            goto label_49c024;
        }
    }
    ctx->pc = 0x49BBD8u;
    // 0x49bbd8: 0x2622000a  addiu       $v0, $s1, 0xA
    ctx->pc = 0x49bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x49bbdc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49bbe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x49bbe4: 0x24650b6c  addiu       $a1, $v1, 0xB6C
    ctx->pc = 0x49bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2924));
    // 0x49bbe8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49bbec: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x49bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x49bbf0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49bbf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49bbf4: 0x2486d680  addiu       $a2, $a0, -0x2980
    ctx->pc = 0x49bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49bbf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B6Cu));
    // 0x49bbfc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x49bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x49bc00: 0x84c42364  lh          $a0, 0x2364($a2)
    ctx->pc = 0x49bc00u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72F9E4u));
    // 0x49bc04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49bc08: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x49bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49bc0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49bc10: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49bc10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49bc14: 0x5482004f  bnel        $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x49BC14u;
    {
        const bool branch_taken_0x49bc14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x49bc14) {
            ctx->pc = 0x49BC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BC14u;
            // 0x49bc18: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC1Cu;
    // 0x49bc1c: 0x8cc2236c  lw          $v0, 0x236C($a2)
    ctx->pc = 0x49bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9068)));
    // 0x49bc20: 0x5451004c  bnel        $v0, $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x49BC20u;
    {
        const bool branch_taken_0x49bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x49bc20) {
            ctx->pc = 0x49BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BC20u;
            // 0x49bc24: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC28u;
    // 0x49bc28: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x49bc28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49bc2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49bc30: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49bc34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49bc38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49bc3c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x49bc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49bc40: 0x2c6200d0  sltiu       $v0, $v1, 0xD0
    ctx->pc = 0x49bc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)208) ? 1 : 0);
    // 0x49bc44: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x49BC44u;
    {
        const bool branch_taken_0x49bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bc44) {
            ctx->pc = 0x49BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BC44u;
            // 0x49bc48: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC4Cu;
    // 0x49bc4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x49bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49bc50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49bc54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49bc58: 0x8c63ae10  lw          $v1, -0x51F0($v1)
    ctx->pc = 0x49bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946320)));
    // 0x49bc5c: 0x600008  jr          $v1
    ctx->pc = 0x49BC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49BC68u: goto label_49bc68;
            case 0x49BC78u: goto label_49bc78;
            case 0x49BC88u: goto label_49bc88;
            case 0x49BC98u: goto label_49bc98;
            case 0x49BCA8u: goto label_49bca8;
            case 0x49BCB8u: goto label_49bcb8;
            case 0x49BCC8u: goto label_49bcc8;
            case 0x49BCD8u: goto label_49bcd8;
            case 0x49BCE8u: goto label_49bce8;
            case 0x49BCF8u: goto label_49bcf8;
            case 0x49BD08u: goto label_49bd08;
            case 0x49BD18u: goto label_49bd18;
            case 0x49BD28u: goto label_49bd28;
            case 0x49BD38u: goto label_49bd38;
            case 0x49BD48u: goto label_49bd48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BC5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49BC64u;
    // 0x49bc64: 0x0  nop
    ctx->pc = 0x49bc64u;
    // NOP
label_49bc68:
    // 0x49bc68: 0xc126df0  jal         func_49B7C0
    ctx->pc = 0x49BC68u;
    SET_GPR_U32(ctx, 31, 0x49BC70u);
    ctx->pc = 0x49BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BC68u;
    // 0x49bc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B7C0u, 0x49BC68u, 0x49BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BC70u;
label_49bc70:
    // 0x49bc70: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x49BC70u;
    {
        const bool branch_taken_0x49bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC70u;
        // 0x49bc74: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc70) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC78u;
label_49bc78:
    // 0x49bc78: 0xc126e06  jal         func_49B818
    ctx->pc = 0x49BC78u;
    SET_GPR_U32(ctx, 31, 0x49BC80u);
    ctx->pc = 0x49BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BC78u;
    // 0x49bc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B818u, 0x49BC78u, 0x49BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BC80u;
label_49bc80:
    // 0x49bc80: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x49BC80u;
    {
        const bool branch_taken_0x49bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC80u;
        // 0x49bc84: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc80) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC88u;
label_49bc88:
    // 0x49bc88: 0xc126e20  jal         func_49B880
    ctx->pc = 0x49BC88u;
    SET_GPR_U32(ctx, 31, 0x49BC90u);
    ctx->pc = 0x49BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BC88u;
    // 0x49bc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B880u, 0x49BC88u, 0x49BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BC90u;
label_49bc90:
    // 0x49bc90: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49BC90u;
    {
        const bool branch_taken_0x49bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC90u;
        // 0x49bc94: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc90) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BC98u;
label_49bc98:
    // 0x49bc98: 0xc126e2a  jal         func_49B8A8
    ctx->pc = 0x49BC98u;
    SET_GPR_U32(ctx, 31, 0x49BCA0u);
    ctx->pc = 0x49BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BC98u;
    // 0x49bc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B8A8u, 0x49BC98u, 0x49BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCA0u;
label_49bca0:
    // 0x49bca0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x49BCA0u;
    {
        const bool branch_taken_0x49bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCA0u;
        // 0x49bca4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bca0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCA8u;
label_49bca8:
    // 0x49bca8: 0xc126e4a  jal         func_49B928
    ctx->pc = 0x49BCA8u;
    SET_GPR_U32(ctx, 31, 0x49BCB0u);
    ctx->pc = 0x49BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCA8u;
    // 0x49bcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B928u, 0x49BCA8u, 0x49BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCB0u;
label_49bcb0:
    // 0x49bcb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49BCB0u;
    {
        const bool branch_taken_0x49bcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCB0u;
        // 0x49bcb4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcb0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCB8u;
label_49bcb8:
    // 0x49bcb8: 0xc126e6c  jal         func_49B9B0
    ctx->pc = 0x49BCB8u;
    SET_GPR_U32(ctx, 31, 0x49BCC0u);
    ctx->pc = 0x49BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCB8u;
    // 0x49bcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B9B0u, 0x49BCB8u, 0x49BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCC0u;
label_49bcc0:
    // 0x49bcc0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x49BCC0u;
    {
        const bool branch_taken_0x49bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCC0u;
        // 0x49bcc4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcc0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCC8u;
label_49bcc8:
    // 0x49bcc8: 0xc126dda  jal         func_49B768
    ctx->pc = 0x49BCC8u;
    SET_GPR_U32(ctx, 31, 0x49BCD0u);
    ctx->pc = 0x49BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCC8u;
    // 0x49bccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B768u, 0x49BCC8u, 0x49BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCD0u;
label_49bcd0:
    // 0x49bcd0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x49BCD0u;
    {
        const bool branch_taken_0x49bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCD0u;
        // 0x49bcd4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcd0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCD8u;
label_49bcd8:
    // 0x49bcd8: 0xc126e9c  jal         func_49BA70
    ctx->pc = 0x49BCD8u;
    SET_GPR_U32(ctx, 31, 0x49BCE0u);
    ctx->pc = 0x49BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCD8u;
    // 0x49bcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BA70u, 0x49BCD8u, 0x49BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCE0u;
label_49bce0:
    // 0x49bce0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x49BCE0u;
    {
        const bool branch_taken_0x49bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCE0u;
        // 0x49bce4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bce0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCE8u;
label_49bce8:
    // 0x49bce8: 0xc126ebe  jal         func_49BAF8
    ctx->pc = 0x49BCE8u;
    SET_GPR_U32(ctx, 31, 0x49BCF0u);
    ctx->pc = 0x49BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCE8u;
    // 0x49bcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BAF8u, 0x49BCE8u, 0x49BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BCF0u;
label_49bcf0:
    // 0x49bcf0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x49BCF0u;
    {
        const bool branch_taken_0x49bcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCF0u;
        // 0x49bcf4: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcf0) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BCF8u;
label_49bcf8:
    // 0x49bcf8: 0xc126dc6  jal         func_49B718
    ctx->pc = 0x49BCF8u;
    SET_GPR_U32(ctx, 31, 0x49BD00u);
    ctx->pc = 0x49BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BCF8u;
    // 0x49bcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B718u, 0x49BCF8u, 0x49BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD00u;
label_49bd00:
    // 0x49bd00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x49BD00u;
    {
        const bool branch_taken_0x49bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD00u;
        // 0x49bd04: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd00) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BD08u;
label_49bd08:
    // 0x49bd08: 0xc126db0  jal         func_49B6C0
    ctx->pc = 0x49BD08u;
    SET_GPR_U32(ctx, 31, 0x49BD10u);
    ctx->pc = 0x49B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B6C0u, 0x49BD08u, 0x49BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD10u;
label_49bd10:
    // 0x49bd10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49BD10u;
    {
        const bool branch_taken_0x49bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD10u;
        // 0x49bd14: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd10) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BD18u;
label_49bd18:
    // 0x49bd18: 0xc126db4  jal         func_49B6D0
    ctx->pc = 0x49BD18u;
    SET_GPR_U32(ctx, 31, 0x49BD20u);
    ctx->pc = 0x49BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BD18u;
    // 0x49bd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B6D0u, 0x49BD18u, 0x49BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD20u;
label_49bd20:
    // 0x49bd20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49BD20u;
    {
        const bool branch_taken_0x49bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD20u;
        // 0x49bd24: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd20) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BD28u;
label_49bd28:
    // 0x49bd28: 0xc126db2  jal         func_49B6C8
    ctx->pc = 0x49BD28u;
    SET_GPR_U32(ctx, 31, 0x49BD30u);
    ctx->pc = 0x49B6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B6C8u, 0x49BD28u, 0x49BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD30u;
label_49bd30:
    // 0x49bd30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49BD30u;
    {
        const bool branch_taken_0x49bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD30u;
        // 0x49bd34: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd30) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BD38u;
label_49bd38:
    // 0x49bd38: 0xc126dae  jal         func_49B6B8
    ctx->pc = 0x49BD38u;
    SET_GPR_U32(ctx, 31, 0x49BD40u);
    ctx->pc = 0x49B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B6B8u, 0x49BD38u, 0x49BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD40u;
label_49bd40:
    // 0x49bd40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49BD40u;
    {
        const bool branch_taken_0x49bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD40u;
        // 0x49bd44: 0x862201c2  lh          $v0, 0x1C2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd40) {
            ctx->pc = 0x49BD54u;
            goto label_49bd54;
        }
    }
    ctx->pc = 0x49BD48u;
label_49bd48:
    // 0x49bd48: 0xc126dae  jal         func_49B6B8
    ctx->pc = 0x49BD48u;
    SET_GPR_U32(ctx, 31, 0x49BD50u);
    ctx->pc = 0x49B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B6B8u, 0x49BD48u, 0x49BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BD50u;
label_49bd50:
    // 0x49bd50: 0x862201c2  lh          $v0, 0x1C2($s1)
    ctx->pc = 0x49bd50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
label_49bd54:
    // 0x49bd54: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x49BD54u;
    {
        const bool branch_taken_0x49bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD54u;
        // 0x49bd58: 0x26330148  addiu       $s3, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd54) {
            ctx->pc = 0x49C024u;
            goto label_49c024;
        }
    }
    ctx->pc = 0x49BD5Cu;
    // 0x49bd5c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49bd5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49bd60: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x49BD60u;
    {
        const bool branch_taken_0x49bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD60u;
        // 0x49bd64: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd60) {
            ctx->pc = 0x49C028u;
            goto label_49c028;
        }
    }
    ctx->pc = 0x49BD68u;
    // 0x49bd68: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x49bd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x49bd6c: 0x246a0b74  addiu       $t2, $v1, 0xB74
    ctx->pc = 0x49bd6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 2932));
    // 0x49bd70: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x49bd70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x49bd74: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x49bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49bd78: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49bd7c: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x49bd7cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x49bd80: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x49bd80u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x49bd84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49bd88: 0x26eb0b78  addiu       $t3, $s7, 0xB78
    ctx->pc = 0x49bd88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 2936));
    // 0x49bd8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49bd90: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x49bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bd94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x49bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x49bd98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49bd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49bd9c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49bd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49bda0: 0x27cc0b7c  addiu       $t4, $fp, 0xB7C
    ctx->pc = 0x49bda0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 2940));
    // 0x49bda4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x49bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x49bda8: 0x26540050  addiu       $s4, $s2, 0x50
    ctx->pc = 0x49bda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x49bdac: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x49bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49bdb0: 0x26550054  addiu       $s5, $s2, 0x54
    ctx->pc = 0x49bdb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x49bdb4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49bdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49bdb8: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x49bdb8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49bdbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49bdbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49bdc0: 0x26560058  addiu       $s6, $s2, 0x58
    ctx->pc = 0x49bdc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x49bdc4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49bdc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49bdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49bdcc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49bdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49bdd0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49bdd4: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x49bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x49bdd8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49bdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49bddc: 0x24520b6c  addiu       $s2, $v0, 0xB6C
    ctx->pc = 0x49bddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2924));
    // 0x49bde0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x49bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x49bde4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x49bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49bde8: 0x248dd680  addiu       $t5, $a0, -0x2980
    ctx->pc = 0x49bde8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49bdec: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x49bdecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bdf4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49bdf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49bdf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49bdfc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49be00: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x49be00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x49be04: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x49be04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x49be08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49be08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49be0c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x49be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49be10: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x49be10u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49be14: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49be18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49be18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49be1c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x49be1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x49be20: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x49be20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x49be24: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x49be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x49be28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x49be28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x49be2c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x49be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49be30: 0x95490000  lhu         $t1, 0x0($t2)
    ctx->pc = 0x49be30u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49be34: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49be38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49be38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49be3c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x49be3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x49be40: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x49be40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x49be44: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x49be44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x49be48: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x49be48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x49be4c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x49be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49be50: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49be50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49be54: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49be54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49be58: 0xa5a9234c  sh          $t1, 0x234C($t5)
    ctx->pc = 0x49be58u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9036), (uint16_t)GPR_U32(ctx, 9));
    // 0x49be5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49be5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49be60: 0xa5a3234e  sh          $v1, 0x234E($t5)
    ctx->pc = 0x49be60u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9038), (uint16_t)GPR_U32(ctx, 3));
    // 0x49be64: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x49be64u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49be68: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x49be68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x49be6c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x49be6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x49be70: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x49be70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x49be74: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x49be74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49be78: 0xc12afa0  jal         func_4ABE80
    ctx->pc = 0x49BE78u;
    SET_GPR_U32(ctx, 31, 0x49BE80u);
    ctx->pc = 0x49BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BE78u;
    // 0x49be7c: 0xa5a22350  sh          $v0, 0x2350($t5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 13), 9040), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABE80u, 0x49BE78u, 0x49BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BE80u;
label_49be80:
    // 0x49be80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49be84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49BE84u;
    {
        const bool branch_taken_0x49be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE84u;
        // 0x49be88: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be84) {
            ctx->pc = 0x49BE98u;
            goto label_49be98;
        }
    }
    ctx->pc = 0x49BE8Cu;
    // 0x49be8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49BE8Cu;
    {
        const bool branch_taken_0x49be8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE8Cu;
        // 0x49be90: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be8c) {
            ctx->pc = 0x49BE9Cu;
            goto label_49be9c;
        }
    }
    ctx->pc = 0x49BE94u;
    // 0x49be94: 0x0  nop
    ctx->pc = 0x49be94u;
    // NOP
label_49be98:
    // 0x49be98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_49be9c:
    // 0x49be9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49bea0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49bea4: 0x24780b6c  addiu       $t8, $v1, 0xB6C
    ctx->pc = 0x49bea4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 2924));
    // 0x49bea8: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x49bea8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0B6Cu));
    // 0x49beac: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x49beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x49beb0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x49BEB0u;
    {
        const bool branch_taken_0x49beb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEB0u;
        // 0x49beb4: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49beb0) {
            ctx->pc = 0x49C024u;
            goto label_49c024;
        }
    }
    ctx->pc = 0x49BEB8u;
    // 0x49beb8: 0x26eb0b78  addiu       $t3, $s7, 0xB78
    ctx->pc = 0x49beb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 2936));
    // 0x49bebc: 0x248dd680  addiu       $t5, $a0, -0x2980
    ctx->pc = 0x49bebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49bec0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x49bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bec4: 0x85a2234e  lh          $v0, 0x234E($t5)
    ctx->pc = 0x49bec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 9038)));
    // 0x49bec8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49becc: 0x24c60b70  addiu       $a2, $a2, 0xB70
    ctx->pc = 0x49beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2928));
    // 0x49bed0: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x49bed0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x49bed4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x49bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B70u));
    // 0x49bed8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49bed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49bedc: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x49bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x49bee0: 0x27cc0b7c  addiu       $t4, $fp, 0xB7C
    ctx->pc = 0x49bee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 2940));
    // 0x49bee4: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x49bee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49bee8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49beec: 0x244a0b74  addiu       $t2, $v0, 0xB74
    ctx->pc = 0x49beecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2932));
    // 0x49bef0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x49bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x49bef4: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x49bef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x49bef8: 0x10f4024  and         $t0, $t0, $t7
    ctx->pc = 0x49bef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 15));
    // 0x49befc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49befcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49bf00: 0x25b2235c  addiu       $s2, $t5, 0x235C
    ctx->pc = 0x49bf00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 9052));
    // 0x49bf04: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49bf08: 0x84c70000  lh          $a3, 0x0($a2)
    ctx->pc = 0x49bf08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49bf0c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x49bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49bf10: 0x85a2234c  lh          $v0, 0x234C($t5)
    ctx->pc = 0x49bf10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 9036)));
    // 0x49bf14: 0xe73818  mult        $a3, $a3, $a3
    ctx->pc = 0x49bf14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49bf18: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x49bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49bf1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49bf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49bf20: 0x85a32350  lh          $v1, 0x2350($t5)
    ctx->pc = 0x49bf20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 9040)));
    // 0x49bf24: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x49bf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x49bf28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49bf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49bf2c: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x49bf2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49bf30: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x49bf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x49bf34: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x49bf34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x49bf38: 0x837024  and         $t6, $a0, $v1
    ctx->pc = 0x49bf38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49bf3c: 0xef1024  and         $v0, $a3, $t7
    ctx->pc = 0x49bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x49bf40: 0x31c3ffff  andi        $v1, $t6, 0xFFFF
    ctx->pc = 0x49bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x49bf44: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x49bf44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x49bf48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49bf4c: 0xaf080000  sw          $t0, 0x0($t8)
    ctx->pc = 0x49bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 8));
    // 0x49bf50: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x49bf54: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x49bf54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x49bf58: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49bf58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49bf5c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x49bf5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49bf60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49bf64: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x49bf64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49bf68: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x49bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x49bf6c: 0xad700000  sw          $s0, 0x0($t3)
    ctx->pc = 0x49bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 16));
    // 0x49bf70: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x49bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x49bf74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49bf78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49bf7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x49bf80: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x49bf80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49bf84: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x49BF84u;
    {
        const bool branch_taken_0x49bf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF84u;
        // 0x49bf88: 0xaf030000  sw          $v1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf84) {
            ctx->pc = 0x49C024u;
            goto label_49c024;
        }
    }
    ctx->pc = 0x49BF8Cu;
    // 0x49bf8c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x49bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49bf90: 0x3525ffff  ori         $a1, $t1, 0xFFFF
    ctx->pc = 0x49bf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49bf94: 0x3607ffff  ori         $a3, $s0, 0xFFFF
    ctx->pc = 0x49bf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49bf98: 0x35c8ffff  ori         $t0, $t6, 0xFFFF
    ctx->pc = 0x49bf98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x49bf9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49bfa0: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x49bfa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49bfa4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49bfa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49bfa8: 0xadb12360  sw          $s1, 0x2360($t5)
    ctx->pc = 0x49bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 9056), GPR_U32(ctx, 17));
    // 0x49bfac: 0xa5a22352  sh          $v0, 0x2352($t5)
    ctx->pc = 0x49bfacu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9042), (uint16_t)GPR_U32(ctx, 2));
    // 0x49bfb0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x49bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49bfb4: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x49bfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bfb8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x49bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x49bfbc: 0x85860000  lh          $a2, 0x0($t4)
    ctx->pc = 0x49bfbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49bfc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49bfc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49bfc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49bfc8: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x49bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x49bfcc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49bfccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49bfd0: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x49bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x49bfd4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x49bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49bfd8: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x49bfd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49bfdc: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x49bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x49bfe0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49bfe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49bfe4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x49bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49bfe8: 0x8f2025  or          $a0, $a0, $t7
    ctx->pc = 0x49bfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
    // 0x49bfec: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x49bfecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x49bff0: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x49bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x49bff4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x49bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49bff8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49bff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bffc: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x49bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x49c000: 0xa5a52354  sh          $a1, 0x2354($t5)
    ctx->pc = 0x49c000u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9044), (uint16_t)GPR_U32(ctx, 5));
    // 0x49c004: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49c004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49c008: 0xa5a32356  sh          $v1, 0x2356($t5)
    ctx->pc = 0x49c008u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9046), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c00c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x49c00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49c010: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x49c010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x49c014: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x49c014u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x49c018: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x49c018u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x49c01c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x49c01cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c020: 0xa5a22358  sh          $v0, 0x2358($t5)
    ctx->pc = 0x49c020u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9048), (uint16_t)GPR_U32(ctx, 2));
label_49c024:
    // 0x49c024: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49c024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_49c028:
    // 0x49c028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49c028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c02c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49c02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c030: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x49c030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x49c034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49c034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c038: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49c038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49c03c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x49c03cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c040: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x49c040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c044: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x49c044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49c048: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x49c048u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49c04c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x49c04cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49c050: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x49c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x49c054: 0x3e00008  jr          $ra
    ctx->pc = 0x49C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C054u;
        // 0x49c058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C05Cu;
    // 0x49c05c: 0x0  nop
    ctx->pc = 0x49c05cu;
    // NOP
    ctx->pc = 0x49c060u;
}
