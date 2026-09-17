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

// Function: sub_004F3FB8
// Address: 0x4f3fb8 - 0x4f4620
void sub_004F3FB8_0x4f3fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3FB8_0x4f3fb8");
#endif

    switch (ctx->pc) {
        case 0x4f3fd4u: goto label_4f3fd4;
        case 0x4f3ff0u: goto label_4f3ff0;
        case 0x4f414cu: goto label_4f414c;
        case 0x4f4238u: goto label_4f4238;
        case 0x4f42e4u: goto label_4f42e4;
        case 0x4f434cu: goto label_4f434c;
        case 0x4f4368u: goto label_4f4368;
        case 0x4f4390u: goto label_4f4390;
        case 0x4f4398u: goto label_4f4398;
        case 0x4f43a8u: goto label_4f43a8;
        case 0x4f4498u: goto label_4f4498;
        case 0x4f44a0u: goto label_4f44a0;
        case 0x4f44e4u: goto label_4f44e4;
        case 0x4f4600u: goto label_4f4600;
        case 0x4f4618u: goto label_4f4618;
        default: break;
    }

    ctx->pc = 0x4f3fb8u;

    // 0x4f3fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f3fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f3fcc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F3FCCu;
    SET_GPR_U32(ctx, 31, 0x4F3FD4u);
    ctx->pc = 0x4F3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3FCCu;
    // 0x4f3fd0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F3FCCu, 0x4F3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3FD4u;
label_4f3fd4:
    // 0x4f3fd4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3fd8: 0xac621258  sw          $v0, 0x1258($v1)
    ctx->pc = 0x4f3fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1258u, _value); } while (0);
    // 0x4f3fdc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f3fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3fe0: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4F3FE0u;
    {
        const bool branch_taken_0x4f3fe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3FE0u;
        // 0x4f3fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3fe0) {
            ctx->pc = 0x4F4030u;
            goto label_4f4030;
        }
    }
    ctx->pc = 0x4F3FE8u;
    // 0x4f3fe8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F3FE8u;
    SET_GPR_U32(ctx, 31, 0x4F3FF0u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F3FE8u, 0x4F3FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3FF0u;
label_4f3ff0:
    // 0x4f3ff0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4f3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f3ff4: 0x960601be  lhu         $a2, 0x1BE($s0)
    ctx->pc = 0x4f3ff4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f3ff8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4f3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4f3ffc: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x4f3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x4f4000: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4f4000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f4004: 0xa605016a  sh          $a1, 0x16A($s0)
    ctx->pc = 0x4f4004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f4008: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4f4008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f400c: 0xa603015c  sh          $v1, 0x15C($s0)
    ctx->pc = 0x4f400cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4010: 0xa6040158  sh          $a0, 0x158($s0)
    ctx->pc = 0x4f4010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f4014: 0xa606014a  sh          $a2, 0x14A($s0)
    ctx->pc = 0x4f4014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f4018: 0xa605000e  sh          $a1, 0xE($s0)
    ctx->pc = 0x4f4018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f401c: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4f401cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f4020: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4f4020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f4024: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f4024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4028: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f402c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f402cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f4030:
    // 0x4f4030: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4f4030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4f4034: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4038: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4f4038u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f403c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F403Cu;
    {
        const bool branch_taken_0x4f403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F403Cu;
        // 0x4f4040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f403c) {
            ctx->pc = 0x4F4060u;
            goto label_4f4060;
        }
    }
    ctx->pc = 0x4F4044u;
    // 0x4f4044: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F4044u;
    {
        const bool branch_taken_0x4f4044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4044u;
        // 0x4f4048: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4044) {
            ctx->pc = 0x4F4078u;
            goto label_4f4078;
        }
    }
    ctx->pc = 0x4F404Cu;
    // 0x4f404c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f404cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4054: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4054u;
        // 0x4f4058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F405Cu;
    // 0x4f405c: 0x0  nop
    ctx->pc = 0x4f405cu;
    // NOP
label_4f4060:
    // 0x4f4060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f4064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f4068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f406c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f406cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4070: 0x813d024  j           func_4F4090
    ctx->pc = 0x4F4070u;
    ctx->pc = 0x4F4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4070u;
    // 0x4f4074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4090u;
    goto label_4f4090;
    ctx->pc = 0x4F4078u;
label_4f4078:
    // 0x4f4078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f407c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f407cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4084: 0x813d03c  j           func_4F40F0
    ctx->pc = 0x4F4084u;
    ctx->pc = 0x4F4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4084u;
    // 0x4f4088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F40F0u;
    goto label_4f40f0;
    ctx->pc = 0x4F408Cu;
    // 0x4f408c: 0x0  nop
    ctx->pc = 0x4f408cu;
    // NOP
label_4f4090:
    // 0x4f4090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f4094: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4f4094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f409c: 0x24c2014a  addiu       $v0, $a2, 0x14A
    ctx->pc = 0x4f409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 330));
    // 0x4f40a0: 0x24c701bc  addiu       $a3, $a2, 0x1BC
    ctx->pc = 0x4f40a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4f40a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f40a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f40a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f40ac: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f40acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f40b0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F40B0u;
    {
        const bool branch_taken_0x4f40b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4F40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40B0u;
        // 0x4f40b4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f40b0) {
            ctx->pc = 0x4F40C8u;
            goto label_4f40c8;
        }
    }
    ctx->pc = 0x4F40B8u;
    // 0x4f40b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f40b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f40bc: 0x813d046  j           func_4F4118
    ctx->pc = 0x4F40BCu;
    ctx->pc = 0x4F40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F40BCu;
    // 0x4f40c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4118u;
    goto label_4f4118;
    ctx->pc = 0x4F40C4u;
    // 0x4f40c4: 0x0  nop
    ctx->pc = 0x4f40c4u;
    // NOP
label_4f40c8:
    // 0x4f40c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4f40cc: 0xa4c0015c  sh          $zero, 0x15C($a2)
    ctx->pc = 0x4f40ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f40d0: 0xa4c30158  sh          $v1, 0x158($a2)
    ctx->pc = 0x4f40d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f40d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f40d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f40d8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4f40d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f40dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f40e0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4f40e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f40e4: 0x813d046  j           func_4F4118
    ctx->pc = 0x4F40E4u;
    ctx->pc = 0x4F40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F40E4u;
    // 0x4f40e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4118u;
    goto label_4f4118;
    ctx->pc = 0x4F40ECu;
    // 0x4f40ec: 0x0  nop
    ctx->pc = 0x4f40ecu;
    // NOP
label_4f40f0:
    // 0x4f40f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f40f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f40f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f40f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f40f8: 0x8482015a  lh          $v0, 0x15A($a0)
    ctx->pc = 0x4f40f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x4f40fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F40FCu;
    {
        const bool branch_taken_0x4f40fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40FCu;
        // 0x4f4100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f40fc) {
            ctx->pc = 0x4F4110u;
            goto label_4f4110;
        }
    }
    ctx->pc = 0x4F4104u;
    // 0x4f4104: 0x813d180  j           func_4F4600
    ctx->pc = 0x4F4104u;
    ctx->pc = 0x4F4108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4104u;
    // 0x4f4108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4600u;
    goto label_4f4600;
    ctx->pc = 0x4F410Cu;
    // 0x4f410c: 0x0  nop
    ctx->pc = 0x4f410cu;
    // NOP
label_4f4110:
    // 0x4f4110: 0x813d046  j           func_4F4118
    ctx->pc = 0x4F4110u;
    ctx->pc = 0x4F4114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4110u;
    // 0x4f4114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4118u;
    goto label_4f4118;
    ctx->pc = 0x4F4118u;
label_4f4118:
    // 0x4f4118: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f4118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f411c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4f411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4f4120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f4120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f4124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f4128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f4128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f412c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f4130: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f4130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f4134: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f4138: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f413c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f4140: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4f4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4f4144: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4F4144u;
    SET_GPR_U32(ctx, 31, 0x4F414Cu);
    ctx->pc = 0x4F4148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4144u;
    // 0x4f4148: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4F4144u, 0x4F414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F414Cu;
label_4f414c:
    // 0x4f414c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f414cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f4150: 0x27c8016a  addiu       $t0, $fp, 0x16A
    ctx->pc = 0x4f4150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 362));
    // 0x4f4154: 0x24c41230  addiu       $a0, $a2, 0x1230
    ctx->pc = 0x4f4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x4f4158: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f4158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f415c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f415cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1230u));
    // 0x4f4160: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f4160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f4164: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f4168: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f4168u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f416c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4170: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f4174: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f4174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f4178: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f417c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f417cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4f4184: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f4184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f4188: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f418c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f418cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f4190: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f4190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4194: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x4f4194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4f4198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F4198u;
    {
        const bool branch_taken_0x4f4198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4198u;
        // 0x4f419c: 0x25271234  addiu       $a3, $t1, 0x1234 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4198) {
            ctx->pc = 0x4F41B0u;
            goto label_4f41b0;
        }
    }
    ctx->pc = 0x4F41A0u;
    // 0x4f41a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f41a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F41A4u;
    {
        const bool branch_taken_0x4f41a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41A4u;
        // 0x4f41a8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f41a4) {
            ctx->pc = 0x4F41BCu;
            goto label_4f41bc;
        }
    }
    ctx->pc = 0x4F41ACu;
    // 0x4f41ac: 0x0  nop
    ctx->pc = 0x4f41acu;
    // NOP
label_4f41b0:
    // 0x4f41b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f41b4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4f41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f41b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f41b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4f41bc:
    // 0x4f41bc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f41c0: 0x24d61230  addiu       $s6, $a2, 0x1230
    ctx->pc = 0x4f41c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x4f41c4: 0x25371234  addiu       $s7, $t1, 0x1234
    ctx->pc = 0x4f41c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), 4660));
    // 0x4f41c8: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4f41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f41cc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4f41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f41d0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x4f41d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f41d4: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x4f41d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f41d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f41d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f41dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f41e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f41e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f41e4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f41e8: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4f41e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f41ec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f41f0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4F41F0u;
    {
        const bool branch_taken_0x4f41f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41F0u;
        // 0x4f41f4: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f41f0) {
            ctx->pc = 0x4F4230u;
            goto label_4f4230;
        }
    }
    ctx->pc = 0x4F41F8u;
    // 0x4f41f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f41fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f41fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f4200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f4200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f4204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f4208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f420c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f420cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f4210: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f4210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f4214: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f4214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f4218: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f4218u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f421c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f421cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f4220: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f4220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f4224: 0x813d186  j           func_4F4618
    ctx->pc = 0x4F4224u;
    ctx->pc = 0x4F4228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4224u;
    // 0x4f4228: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4618u;
    goto label_4f4618;
    ctx->pc = 0x4F422Cu;
    // 0x4f422c: 0x0  nop
    ctx->pc = 0x4f422cu;
    // NOP
label_4f4230:
    // 0x4f4230: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F4230u;
    SET_GPR_U32(ctx, 31, 0x4F4238u);
    ctx->pc = 0x4F4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4230u;
    // 0x4f4234: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F4230u, 0x4F4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4238u;
label_4f4238:
    // 0x4f4238: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4f4238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f423c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f423cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f4240: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4248: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f424c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f424cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f4250: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f4250u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f4254: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f4254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4258: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f4258u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f425c: 0x26311240  addiu       $s1, $s1, 0x1240
    ctx->pc = 0x4f425cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4672));
    // 0x4f4260: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4f4260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f4264: 0x2652123c  addiu       $s2, $s2, 0x123C
    ctx->pc = 0x4f4264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4668));
    // 0x4f4268: 0x26731244  addiu       $s3, $s3, 0x1244
    ctx->pc = 0x4f4268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4676));
    // 0x4f426c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4f426cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4270: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4f4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4f4274: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f4274u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1240u));
    // 0x4f4278: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f427c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4f427cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1244u));
    // 0x4f4280: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f4280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f4284: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f4284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f4288: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f4288u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f428c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4290: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x4f4290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x4f4294: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f4294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f4298: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4f4298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f429c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f429cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f42a0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4f42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4f42a4: 0xf03824  and         $a3, $a3, $s0
    ctx->pc = 0x4f42a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x4f42a8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4f42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4f42ac: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x4f42acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4f42b0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f42b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f42b4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4f42b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4f42b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f42b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f42bc: 0x26b51258  addiu       $s5, $s5, 0x1258
    ctx->pc = 0x4f42bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4696));
    // 0x4f42c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4f42c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f42c4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f42c8: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x4f42c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x4f42cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4f42ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4f42d0: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4f42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4f42d4: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x4f42d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x4f42d8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f42dc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F42DCu;
    SET_GPR_U32(ctx, 31, 0x4F42E4u);
    ctx->pc = 0x4F42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F42DCu;
    // 0x4f42e0: 0x2694d680  addiu       $s4, $s4, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F42DCu, 0x4F42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F42E4u;
label_4f42e4:
    // 0x4f42e4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4f42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f42e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f42e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f42ec: 0x27c40168  addiu       $a0, $fp, 0x168
    ctx->pc = 0x4f42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x4f42f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f42f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f42f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f42f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f42f8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f42fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f42fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f4300: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4f4300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f4304: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4f4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4f4308: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f430c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f4310: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f4310u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f4314: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f4314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4318: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4f4318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4f431c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4f431cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4320: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4324: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4328: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4f4328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f432c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4f432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f4330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4334: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f4338: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f4338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f433c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f433cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f4340: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4f4340u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4f4344: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F4344u;
    SET_GPR_U32(ctx, 31, 0x4F434Cu);
    ctx->pc = 0x4F4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4344u;
    // 0x4f4348: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F4344u, 0x4F434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F434Cu;
label_4f434c:
    // 0x4f434c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f434cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4350: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4f4350u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4f4354: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4f4354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4358: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4f4358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f435c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f435cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f4360: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4360u;
    SET_GPR_U32(ctx, 31, 0x4F4368u);
    ctx->pc = 0x4F4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4360u;
    // 0x4f4364: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4360u, 0x4F4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4368u;
label_4f4368:
    // 0x4f4368: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f4368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f436c: 0x86e50000  lh          $a1, 0x0($s7)
    ctx->pc = 0x4f436cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f4370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4374: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f4374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4378: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f4378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f437c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f437cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f4380: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f4380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f4384: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f4384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f4388: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4388u;
    SET_GPR_U32(ctx, 31, 0x4F4390u);
    ctx->pc = 0x4F438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4388u;
    // 0x4f438c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4388u, 0x4F4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4390u;
label_4f4390:
    // 0x4f4390: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4390u;
    SET_GPR_U32(ctx, 31, 0x4F4398u);
    ctx->pc = 0x4F4394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4390u;
    // 0x4f4394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4390u, 0x4F4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4398u;
label_4f4398:
    // 0x4f4398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f4398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f439c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f43a0: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4F43A0u;
    SET_GPR_U32(ctx, 31, 0x4F43A8u);
    ctx->pc = 0x4F43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F43A0u;
    // 0x4f43a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4F43A0u, 0x4F43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F43A8u;
label_4f43a8:
    // 0x4f43a8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4f43a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f43ac: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4f43acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f43b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f43b4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f43b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f43b8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f43b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f43bc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f43c0: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4f43c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f43c4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f43c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f43c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f43cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f43ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f43d0: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4f43d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f43d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f43d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f43dc: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f43dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f43e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f43e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f43e4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4f43e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f43e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f43e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f43ec: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4f43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4f43f0: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4f43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4f43f4: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x4f43f4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f43f8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f43fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f43fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4400: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4f4400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f4404: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f4404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f4408: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4f4408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4f440c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f440cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f4410: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4414: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4f4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4f4418: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f4418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f441c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f4420: 0xa6872334  sh          $a3, 0x2334($s4)
    ctx->pc = 0x4f4420u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9012), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f4424: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f4424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f4428: 0xa6832336  sh          $v1, 0x2336($s4)
    ctx->pc = 0x4f4428u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f442c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4f442cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4f4430: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4f4430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4f4434: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4f4434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4f4438: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4f4438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4f443c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f443cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f4440: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4f4440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f4444: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4f4444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f4448: 0xa6832338  sh          $v1, 0x2338($s4)
    ctx->pc = 0x4f4448u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f444c: 0x87c2015a  lh          $v0, 0x15A($fp)
    ctx->pc = 0x4f444cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 346)));
    // 0x4f4450: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f4450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4454: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f4454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f4458: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4f4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4f445c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f445cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f4460: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4f4460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4f4464: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f4464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f4468: 0x8545000c  lh          $a1, 0xC($t2)
    ctx->pc = 0x4f4468u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4f446c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f446cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4470: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4f4470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f4474: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4f4474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4f4478: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f4478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f447c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f4480: 0x8545000e  lh          $a1, 0xE($t2)
    ctx->pc = 0x4f4480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x4f4484: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f4484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f4488: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f4488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f448c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f4490: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4490u;
    SET_GPR_U32(ctx, 31, 0x4F4498u);
    ctx->pc = 0x4F4494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4490u;
    // 0x4f4494: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4490u, 0x4F4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4498u;
label_4f4498:
    // 0x4f4498: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F4498u;
    SET_GPR_U32(ctx, 31, 0x4F44A0u);
    ctx->pc = 0x4F449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4498u;
    // 0x4f449c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F4498u, 0x4F44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F44A0u;
label_4f44a0:
    // 0x4f44a0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4f44a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f44a4: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4f44a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f44a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f44a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f44ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f44acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f44b0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4f44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f44b4: 0x84e20010  lh          $v0, 0x10($a3)
    ctx->pc = 0x4f44b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4f44b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f44b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f44bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f44bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f44c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f44c4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f44c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f44c8: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4f44c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4f44cc: 0x84e20012  lh          $v0, 0x12($a3)
    ctx->pc = 0x4f44ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x4f44d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f44d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f44d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f44d8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4f44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4f44dc: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4F44DCu;
    SET_GPR_U32(ctx, 31, 0x4F44E4u);
    ctx->pc = 0x4F44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F44DCu;
    // 0x4f44e0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4F44DCu, 0x4F44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F44E4u;
label_4f44e4:
    // 0x4f44e4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4f44e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f44e8: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4f44e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f44ec: 0x268c2340  addiu       $t4, $s4, 0x2340
    ctx->pc = 0x4f44ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 9024));
    // 0x4f44f0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f44f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f44f4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f44f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f44f8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f44f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f44fc: 0x248b000f  addiu       $t3, $a0, 0xF
    ctx->pc = 0x4f44fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x4f4500: 0x28890000  slti        $t1, $a0, 0x0
    ctx->pc = 0x4f4500u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f4504: 0x246a000f  addiu       $t2, $v1, 0xF
    ctx->pc = 0x4f4504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x4f4508: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x4f4508u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f450c: 0x2447000f  addiu       $a3, $v0, 0xF
    ctx->pc = 0x4f450cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4f4510: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x4f4510u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f4514: 0x169200b  movn        $a0, $t3, $t1
    ctx->pc = 0x4f4514u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 11));
    // 0x4f4518: 0x145180b  movn        $v1, $t2, $a1
    ctx->pc = 0x4f4518u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x4f451c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4f451cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4520: 0xe6100b  movn        $v0, $a3, $a2
    ctx->pc = 0x4f4520u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x4f4524: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4f4524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f4528: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x4f4528u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x4f452c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x4f452cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x4f4530: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4f4530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x4f4534: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f4534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f4538: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f4538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f453c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f4540: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f4540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f4544: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f4544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f4548: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4f4548u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4f454c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4550: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f4550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f4554: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f4554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f4558: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4f4558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4f455c: 0x268a2344  addiu       $t2, $s4, 0x2344
    ctx->pc = 0x4f455cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 9028));
    // 0x4f4560: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4f4560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4f4564: 0x26892348  addiu       $t1, $s4, 0x2348
    ctx->pc = 0x4f4564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 9032));
    // 0x4f4568: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4f4568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4f456c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x4f456cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f4570: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f4570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f4574: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4f4574u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f4578: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4f4578u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f457c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4f457cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f4580: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4f4580u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4f4584: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4f4584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f4588: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4f4588u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4f458c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4f458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f4590: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4f4590u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f4594: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4f4594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f4598: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f4598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f459c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f459cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f45a0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f45a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f45a4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f45a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f45a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f45ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f45acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f45b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f45b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f45b4: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4f45b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4f45b8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f45b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f45bc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f45bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f45c0: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4f45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4f45c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f45c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f45c8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4f45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4f45cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f45ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f45d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4f45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4f45d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f45d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f45d8: 0xa68b2332  sh          $t3, 0x2332($s4)
    ctx->pc = 0x4f45d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9010), (uint16_t)GPR_U32(ctx, 11));
    // 0x4f45dc: 0xa680232c  sh          $zero, 0x232C($s4)
    ctx->pc = 0x4f45dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9004), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f45e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f45e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f45e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f45e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f45e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f45e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f45ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f45ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f45f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f45f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f45f4: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4F45F4u;
    ctx->pc = 0x4F45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F45F4u;
    // 0x4f45f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4F45FCu;
    // 0x4f45fc: 0x0  nop
    ctx->pc = 0x4f45fcu;
    // NOP
label_4f4600:
    // 0x4f4600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f4604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f4608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f460c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F460Cu;
    ctx->pc = 0x4F4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F460Cu;
    // 0x4f4610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F4614u;
    // 0x4f4614: 0x0  nop
    ctx->pc = 0x4f4614u;
    // NOP
label_4f4618:
    // 0x4f4618: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4620u;
}
