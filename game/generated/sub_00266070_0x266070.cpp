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

// Function: sub_00266070
// Address: 0x266070 - 0x2661d0
void sub_00266070_0x266070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266070_0x266070");
#endif

    switch (ctx->pc) {
        case 0x2660bcu: goto label_2660bc;
        case 0x266100u: goto label_266100;
        case 0x266138u: goto label_266138;
        case 0x266170u: goto label_266170;
        default: break;
    }

    ctx->pc = 0x266070u;

    // 0x266070: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x266070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x266074: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266078: 0x24e27fff  addiu       $v0, $a3, 0x7FFF
    ctx->pc = 0x266078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32767));
    // 0x26607c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266080: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x266080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x266084: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x266084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x266088: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x266088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26608c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26608cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266090: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x266090u;
    {
        const bool branch_taken_0x266090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266090u;
        // 0x266094: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266090) {
            ctx->pc = 0x2660C8u;
            goto label_2660c8;
        }
    }
    ctx->pc = 0x266098u;
    // 0x266098: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x266098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x26609c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26609Cu;
    {
        const bool branch_taken_0x26609c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x26609c) {
            ctx->pc = 0x2660B0u;
            goto label_2660b0;
        }
    }
    ctx->pc = 0x2660A4u;
    // 0x2660a4: 0x2784aa90  addiu       $a0, $gp, -0x5570
    ctx->pc = 0x2660a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945424));
    // 0x2660a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2660A8u;
    {
        const bool branch_taken_0x2660a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660a8) {
            ctx->pc = 0x2660F8u;
            goto label_2660f8;
        }
    }
    ctx->pc = 0x2660B0u;
label_2660b0:
    // 0x2660b0: 0x2784aa98  addiu       $a0, $gp, -0x5568
    ctx->pc = 0x2660b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945432));
    // 0x2660b4: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x2660B4u;
    SET_GPR_U32(ctx, 31, 0x2660BCu);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x2660B4u, 0x2660BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660BCu;
label_2660bc:
    // 0x2660bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2660BCu;
    {
        const bool branch_taken_0x2660bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660BCu;
        // 0x2660c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660bc) {
            ctx->pc = 0x266104u;
            goto label_266104;
        }
    }
    ctx->pc = 0x2660C4u;
    // 0x2660c4: 0x0  nop
    ctx->pc = 0x2660c4u;
    // NOP
label_2660c8:
    // 0x2660c8: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x2660c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x2660cc: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2660ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2660d0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2660D0u;
    {
        const bool branch_taken_0x2660d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660d0) {
            ctx->pc = 0x2660D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2660D0u;
            // 0x2660d4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266110u;
            goto label_266110;
        }
    }
    ctx->pc = 0x2660D8u;
    // 0x2660d8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2660d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2660dc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2660dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2660e0: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2660e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2660e4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2660e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2660e8: 0x3442ffc8  ori         $v0, $v0, 0xFFC8
    ctx->pc = 0x2660e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65480);
    // 0x2660ec: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x2660ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2660f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2660f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2660f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2660f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2660f8:
    // 0x2660f8: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x2660F8u;
    SET_GPR_U32(ctx, 31, 0x266100u);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x2660F8u, 0x266100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266100u;
label_266100:
    // 0x266100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266104:
    // 0x266104: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x266104u;
    {
        const bool branch_taken_0x266104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266104u;
        // 0x266108: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266104) {
            ctx->pc = 0x2661B8u;
            goto label_2661b8;
        }
    }
    ctx->pc = 0x26610Cu;
    // 0x26610c: 0x0  nop
    ctx->pc = 0x26610cu;
    // NOP
label_266110:
    // 0x266110: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x266110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266114: 0x24432d70  addiu       $v1, $v0, 0x2D70
    ctx->pc = 0x266114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11632));
    // 0x266118: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26611c: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x26611cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x266120: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x266120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x266124: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x266124u;
    {
        const bool branch_taken_0x266124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266124u;
        // 0x266128: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266124) {
            ctx->pc = 0x26615Cu;
            goto label_26615c;
        }
    }
    ctx->pc = 0x26612Cu;
    // 0x26612c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x26612cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266130: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x266130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x266134: 0x0  nop
    ctx->pc = 0x266134u;
    // NOP
label_266138:
    // 0x266138: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266138u;
    {
        const bool branch_taken_0x266138 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266138u;
        // 0x26613c: 0x43040  sll         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266138) {
            ctx->pc = 0x26615Cu;
            goto label_26615c;
        }
    }
    ctx->pc = 0x266140u;
    // 0x266140: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x266144: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x266144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266148: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x266148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x26614c: 0x0  nop
    ctx->pc = 0x26614cu;
    // NOP
    // 0x266150: 0x0  nop
    ctx->pc = 0x266150u;
    // NOP
    // 0x266154: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x266154u;
    {
        const bool branch_taken_0x266154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266154u;
        // 0x266158: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266154) {
            ctx->pc = 0x266138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266138;
        }
    }
    ctx->pc = 0x26615Cu;
label_26615c:
    // 0x26615c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x26615cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x266160: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x266160u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x266164: 0x94262d88  lhu         $a2, 0x2D88($at)
    ctx->pc = 0x266164u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 11656)));
    // 0x266168: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x266168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26616c: 0x2787aa88  addiu       $a3, $gp, -0x5578
    ctx->pc = 0x26616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945416));
label_266170:
    // 0x266170: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x266170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x266174: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x266174u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x266178: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x266178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26617c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26617Cu;
    {
        const bool branch_taken_0x26617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26617Cu;
        // 0x266180: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26617c) {
            ctx->pc = 0x266194u;
            goto label_266194;
        }
    }
    ctx->pc = 0x266184u;
    // 0x266184: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x266188: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x266188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26618c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x26618cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266190: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x266190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_266194:
    // 0x266194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x266194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x266198: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x266198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26619c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26619Cu;
    {
        const bool branch_taken_0x26619c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2661A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26619Cu;
        // 0x2661a0: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26619c) {
            ctx->pc = 0x266170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266170;
        }
    }
    ctx->pc = 0x2661A4u;
    // 0x2661a4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2661a8: 0xc81025  or          $v0, $a2, $t0
    ctx->pc = 0x2661a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2661ac: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2661acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2661b0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2661b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2661b4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2661b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2661b8:
    // 0x2661b8: 0xac700084  sw          $s0, 0x84($v1)
    ctx->pc = 0x2661b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 16));
    // 0x2661bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2661bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2661c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2661c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2661c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2661C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2661C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661C4u;
        // 0x2661c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2661C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2661CCu;
    // 0x2661cc: 0x0  nop
    ctx->pc = 0x2661ccu;
    // NOP
    ctx->pc = 0x2661d0u;
}
