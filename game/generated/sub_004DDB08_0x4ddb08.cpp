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

// Function: sub_004DDB08
// Address: 0x4ddb08 - 0x4ddc78
void sub_004DDB08_0x4ddb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDB08_0x4ddb08");
#endif

    switch (ctx->pc) {
        case 0x4ddb24u: goto label_4ddb24;
        case 0x4ddb40u: goto label_4ddb40;
        case 0x4ddc40u: goto label_4ddc40;
        case 0x4ddc50u: goto label_4ddc50;
        case 0x4ddc60u: goto label_4ddc60;
        default: break;
    }

    ctx->pc = 0x4ddb08u;

    // 0x4ddb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ddb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ddb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ddb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ddb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ddb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddb14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ddb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ddb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ddb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ddb1c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DDB1Cu;
    SET_GPR_U32(ctx, 31, 0x4DDB24u);
    ctx->pc = 0x4DDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB1Cu;
    // 0x4ddb20: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DDB1Cu, 0x4DDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDB24u;
label_4ddb24:
    // 0x4ddb24: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ddb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ddb28: 0xac621144  sw          $v0, 0x1144($v1)
    ctx->pc = 0x4ddb28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1144u, _value); } while (0);
    // 0x4ddb2c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ddb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ddb30: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4DDB30u;
    {
        const bool branch_taken_0x4ddb30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ddb30) {
            ctx->pc = 0x4DDB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDB30u;
            // 0x4ddb34: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDB70u;
            goto label_4ddb70;
        }
    }
    ctx->pc = 0x4DDB38u;
    // 0x4ddb38: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DDB38u;
    SET_GPR_U32(ctx, 31, 0x4DDB40u);
    ctx->pc = 0x4DDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB38u;
    // 0x4ddb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DDB38u, 0x4DDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDB40u;
label_4ddb40:
    // 0x4ddb40: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4ddb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb44: 0x96020148  lhu         $v0, 0x148($s0)
    ctx->pc = 0x4ddb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x4ddb48: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4ddb48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb4c: 0xa602013a  sh          $v0, 0x13A($s0)
    ctx->pc = 0x4ddb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ddb50: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4ddb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb54: 0xa60001b8  sh          $zero, 0x1B8($s0)
    ctx->pc = 0x4ddb54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb58: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4ddb58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb5c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4ddb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ddb60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ddb60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ddb64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ddb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ddb68: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ddb68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ddb6c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4ddb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4ddb70:
    // 0x4ddb70: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ddb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ddb74: 0xac441140  sw          $a0, 0x1140($v0)
    ctx->pc = 0x4ddb74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1140u, _value); } while (0);
    // 0x4ddb78: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4ddb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4ddb7c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DDB7Cu;
    {
        const bool branch_taken_0x4ddb7c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB7Cu;
        // 0x4ddb80: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddb7c) {
            ctx->pc = 0x4DDB98u;
            goto label_4ddb98;
        }
    }
    ctx->pc = 0x4DDB84u;
    // 0x4ddb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ddb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddb8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ddb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddb90: 0x8137a66  j           func_4DE998
    ctx->pc = 0x4DDB90u;
    ctx->pc = 0x4DDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB90u;
    // 0x4ddb94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE998u, 0x4DDB90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDB98u;
label_4ddb98:
    // 0x4ddb98: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ddb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ddb9c: 0x84830160  lh          $v1, 0x160($a0)
    ctx->pc = 0x4ddb9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4ddba0: 0x24451120  addiu       $a1, $v0, 0x1120
    ctx->pc = 0x4ddba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4ddba4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ddba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4ddba8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ddba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4ddbac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ddbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4ddbb0: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x4ddbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4ddbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ddbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ddbb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ddbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ddbbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ddbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ddbc0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ddbc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ddbc4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ddbc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ddbc8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DDBC8u;
    {
        const bool branch_taken_0x4ddbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBC8u;
        // 0x4ddbcc: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddbc8) {
            ctx->pc = 0x4DDBE8u;
            goto label_4ddbe8;
        }
    }
    ctx->pc = 0x4DDBD0u;
    // 0x4ddbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddbd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ddbd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddbd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ddbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ddbdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ddbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddbe0: 0x8137724  j           func_4DDC90
    ctx->pc = 0x4DDBE0u;
    ctx->pc = 0x4DDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDBE0u;
    // 0x4ddbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDC90u, 0x4DDBE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDBE8u;
label_4ddbe8:
    // 0x4ddbe8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x4ddbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ddbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ddbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ddbf0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ddbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ddbf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ddbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ddbf8: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4ddbf8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ddbfc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4DDBFCu;
    {
        const bool branch_taken_0x4ddbfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDBFCu;
        // 0x4ddc00: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddbfc) {
            ctx->pc = 0x4DDC38u;
            goto label_4ddc38;
        }
    }
    ctx->pc = 0x4DDC04u;
    // 0x4ddc04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DDC04u;
    {
        const bool branch_taken_0x4ddc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddc04) {
            ctx->pc = 0x4DDC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDC04u;
            // 0x4ddc08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDC20u;
            goto label_4ddc20;
        }
    }
    ctx->pc = 0x4DDC0Cu;
    // 0x4ddc0c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4DDC0Cu;
    {
        const bool branch_taken_0x4ddc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddc0c) {
            ctx->pc = 0x4DDC48u;
            goto label_4ddc48;
        }
    }
    ctx->pc = 0x4DDC14u;
    // 0x4ddc14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4DDC14u;
    {
        const bool branch_taken_0x4ddc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC14u;
        // 0x4ddc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddc14) {
            ctx->pc = 0x4DDC64u;
            goto label_4ddc64;
        }
    }
    ctx->pc = 0x4DDC1Cu;
    // 0x4ddc1c: 0x0  nop
    ctx->pc = 0x4ddc1cu;
    // NOP
label_4ddc20:
    // 0x4ddc20: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DDC20u;
    {
        const bool branch_taken_0x4ddc20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC20u;
        // 0x4ddc24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddc20) {
            ctx->pc = 0x4DDC48u;
            goto label_4ddc48;
        }
    }
    ctx->pc = 0x4DDC28u;
    // 0x4ddc28: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4DDC28u;
    {
        const bool branch_taken_0x4ddc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ddc28) {
            ctx->pc = 0x4DDC58u;
            goto label_4ddc58;
        }
    }
    ctx->pc = 0x4DDC30u;
    // 0x4ddc30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4DDC30u;
    {
        const bool branch_taken_0x4ddc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC30u;
        // 0x4ddc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddc30) {
            ctx->pc = 0x4DDC64u;
            goto label_4ddc64;
        }
    }
    ctx->pc = 0x4DDC38u;
label_4ddc38:
    // 0x4ddc38: 0xc137720  jal         func_4DDC80
    ctx->pc = 0x4DDC38u;
    SET_GPR_U32(ctx, 31, 0x4DDC40u);
    ctx->pc = 0x4DDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC38u;
    // 0x4ddc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDC80u, 0x4DDC38u, 0x4DDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDC40u;
label_4ddc40:
    // 0x4ddc40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4DDC40u;
    {
        const bool branch_taken_0x4ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC40u;
        // 0x4ddc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddc40) {
            ctx->pc = 0x4DDC64u;
            goto label_4ddc64;
        }
    }
    ctx->pc = 0x4DDC48u;
label_4ddc48:
    // 0x4ddc48: 0xc13771e  jal         func_4DDC78
    ctx->pc = 0x4DDC48u;
    SET_GPR_U32(ctx, 31, 0x4DDC50u);
    ctx->pc = 0x4DDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC48u;
    // 0x4ddc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDC78u, 0x4DDC48u, 0x4DDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDC50u;
label_4ddc50:
    // 0x4ddc50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DDC50u;
    {
        const bool branch_taken_0x4ddc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC50u;
        // 0x4ddc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddc50) {
            ctx->pc = 0x4DDC64u;
            goto label_4ddc64;
        }
    }
    ctx->pc = 0x4DDC58u;
label_4ddc58:
    // 0x4ddc58: 0xc13771e  jal         func_4DDC78
    ctx->pc = 0x4DDC58u;
    SET_GPR_U32(ctx, 31, 0x4DDC60u);
    ctx->pc = 0x4DDC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC58u;
    // 0x4ddc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDC78u, 0x4DDC58u, 0x4DDC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDC60u;
label_4ddc60:
    // 0x4ddc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddc64:
    // 0x4ddc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ddc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddc68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ddc68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ddc6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ddc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddc70: 0x8137724  j           func_4DDC90
    ctx->pc = 0x4DDC70u;
    ctx->pc = 0x4DDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC70u;
    // 0x4ddc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDC90u, 0x4DDC70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDC78u;
}
