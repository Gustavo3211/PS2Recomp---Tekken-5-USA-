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

// Function: sub_004EED80
// Address: 0x4eed80 - 0x4eef10
void sub_004EED80_0x4eed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EED80_0x4eed80");
#endif

    switch (ctx->pc) {
        case 0x4eed9cu: goto label_4eed9c;
        case 0x4eedb8u: goto label_4eedb8;
        case 0x4eeed8u: goto label_4eeed8;
        case 0x4eeee8u: goto label_4eeee8;
        case 0x4eeef8u: goto label_4eeef8;
        default: break;
    }

    ctx->pc = 0x4eed80u;

    // 0x4eed80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4eed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4eed84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eed88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eed88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eed8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4eed8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4eed90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4eed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4eed94: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EED94u;
    SET_GPR_U32(ctx, 31, 0x4EED9Cu);
    ctx->pc = 0x4EED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EED94u;
    // 0x4eed98: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EED94u, 0x4EED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EED9Cu;
label_4eed9c:
    // 0x4eed9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4eed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4eeda0: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4eeda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4eeda4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4eeda4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eeda8: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4EEDA8u;
    {
        const bool branch_taken_0x4eeda8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4eeda8) {
            ctx->pc = 0x4EEDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EEDA8u;
            // 0x4eedac: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EEDE0u;
            goto label_4eede0;
        }
    }
    ctx->pc = 0x4EEDB0u;
    // 0x4eedb0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EEDB0u;
    SET_GPR_U32(ctx, 31, 0x4EEDB8u);
    ctx->pc = 0x4EEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEDB0u;
    // 0x4eedb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EEDB0u, 0x4EEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEDB8u;
label_4eedb8:
    // 0x4eedb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4eedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4eedbc: 0x96030162  lhu         $v1, 0x162($s0)
    ctx->pc = 0x4eedbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4eedc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4eedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4eedc4: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4eedc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eedc8: 0xa60301c0  sh          $v1, 0x1C0($s0)
    ctx->pc = 0x4eedc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eedcc: 0xa60401b6  sh          $a0, 0x1B6($s0)
    ctx->pc = 0x4eedccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 4));
    // 0x4eedd0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4eedd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eedd4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4eedd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4eedd8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4eedd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eeddc: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4eeddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4eede0:
    // 0x4eede0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eede4: 0xac441208  sw          $a0, 0x1208($v0)
    ctx->pc = 0x4eede4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1208u, _value); } while (0);
    // 0x4eede8: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4eede8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4eedec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EEDECu;
    {
        const bool branch_taken_0x4eedec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEDECu;
        // 0x4eedf0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eedec) {
            ctx->pc = 0x4EEE08u;
            goto label_4eee08;
        }
    }
    ctx->pc = 0x4EEDF4u;
    // 0x4eedf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eedf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eedf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eedf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eedfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4eedfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eee00: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EEE00u;
    ctx->pc = 0x4EEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEE00u;
    // 0x4eee04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EEE08u;
label_4eee08:
    // 0x4eee08: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4eee08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4eee0c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EEE0Cu;
    {
        const bool branch_taken_0x4eee0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4EEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE0Cu;
        // 0x4eee10: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eee0c) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EEE14u;
    // 0x4eee14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eee18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eee18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eee1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eee1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eee20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4eee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eee24: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EEE24u;
    ctx->pc = 0x4EEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEE24u;
    // 0x4eee28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EEE2Cu;
    // 0x4eee2c: 0x0  nop
    ctx->pc = 0x4eee2cu;
    // NOP
label_4eee30:
    // 0x4eee30: 0x86040164  lh          $a0, 0x164($s0)
    ctx->pc = 0x4eee30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4eee34: 0x24a511f4  addiu       $a1, $a1, 0x11F4
    ctx->pc = 0x4eee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4596));
    // 0x4eee38: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4eee38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4eee3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eee40: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4eee40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4eee44: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4eee44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4eee48: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4eee48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4eee4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eee50: 0x24c611f8  addiu       $a2, $a2, 0x11F8
    ctx->pc = 0x4eee50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4600));
    // 0x4eee54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4eee54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4eee58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4eee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eee5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4eee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4eee60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4eee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4eee64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eee68: 0x24e711fc  addiu       $a3, $a3, 0x11FC
    ctx->pc = 0x4eee68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4604));
    // 0x4eee6c: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x4eee6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4eee70: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eee74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4eee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4eee78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eee78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eee7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eee80: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4eee80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4eee84: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4eee84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4eee88: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4eee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4eee8c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4eee8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4eee90: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4eee90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4eee94: 0x96020160  lhu         $v0, 0x160($s0)
    ctx->pc = 0x4eee94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4eee98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eee9c: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4eee9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eeea0: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4EEEA0u;
    {
        const bool branch_taken_0x4eeea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEEA0u;
        // 0x4eeea4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeea0) {
            ctx->pc = 0x4EEEE0u;
            goto label_4eeee0;
        }
    }
    ctx->pc = 0x4EEEA8u;
    // 0x4eeea8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EEEA8u;
    {
        const bool branch_taken_0x4eeea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eeea8) {
            ctx->pc = 0x4EEEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EEEA8u;
            // 0x4eeeac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EEEC0u;
            goto label_4eeec0;
        }
    }
    ctx->pc = 0x4EEEB0u;
    // 0x4eeeb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EEEB0u;
    {
        const bool branch_taken_0x4eeeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eeeb0) {
            ctx->pc = 0x4EEED0u;
            goto label_4eeed0;
        }
    }
    ctx->pc = 0x4EEEB8u;
    // 0x4eeeb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EEEB8u;
    {
        const bool branch_taken_0x4eeeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEEB8u;
        // 0x4eeebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeeb8) {
            ctx->pc = 0x4EEEFCu;
            goto label_4eeefc;
        }
    }
    ctx->pc = 0x4EEEC0u;
label_4eeec0:
    // 0x4eeec0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4EEEC0u;
    {
        const bool branch_taken_0x4eeec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4eeec0) {
            ctx->pc = 0x4EEEF0u;
            goto label_4eeef0;
        }
    }
    ctx->pc = 0x4EEEC8u;
    // 0x4eeec8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EEEC8u;
    {
        const bool branch_taken_0x4eeec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEEC8u;
        // 0x4eeecc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeec8) {
            ctx->pc = 0x4EEEFCu;
            goto label_4eeefc;
        }
    }
    ctx->pc = 0x4EEED0u;
label_4eeed0:
    // 0x4eeed0: 0xc13bbc4  jal         func_4EEF10
    ctx->pc = 0x4EEED0u;
    SET_GPR_U32(ctx, 31, 0x4EEED8u);
    ctx->pc = 0x4EEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEED0u;
    // 0x4eeed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EEF10u, 0x4EEED0u, 0x4EEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEED8u;
label_4eeed8:
    // 0x4eeed8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EEED8u;
    {
        const bool branch_taken_0x4eeed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEED8u;
        // 0x4eeedc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeed8) {
            ctx->pc = 0x4EEEFCu;
            goto label_4eeefc;
        }
    }
    ctx->pc = 0x4EEEE0u;
label_4eeee0:
    // 0x4eeee0: 0xc13bbca  jal         func_4EEF28
    ctx->pc = 0x4EEEE0u;
    SET_GPR_U32(ctx, 31, 0x4EEEE8u);
    ctx->pc = 0x4EEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEEE0u;
    // 0x4eeee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EEF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EEF28u, 0x4EEEE0u, 0x4EEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEEE8u;
label_4eeee8:
    // 0x4eeee8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EEEE8u;
    {
        const bool branch_taken_0x4eeee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEEE8u;
        // 0x4eeeec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeee8) {
            ctx->pc = 0x4EEEFCu;
            goto label_4eeefc;
        }
    }
    ctx->pc = 0x4EEEF0u;
label_4eeef0:
    // 0x4eeef0: 0xc13bc0a  jal         func_4EF028
    ctx->pc = 0x4EEEF0u;
    SET_GPR_U32(ctx, 31, 0x4EEEF8u);
    ctx->pc = 0x4EEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEEF0u;
    // 0x4eeef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF028u, 0x4EEEF0u, 0x4EEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEEF8u;
label_4eeef8:
    // 0x4eeef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eeef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eeefc:
    // 0x4eeefc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eeefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eef00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4eef00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eef04: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEF04u;
        // 0x4eef08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEF0Cu;
    // 0x4eef0c: 0x0  nop
    ctx->pc = 0x4eef0cu;
    // NOP
    ctx->pc = 0x4eef10u;
}
