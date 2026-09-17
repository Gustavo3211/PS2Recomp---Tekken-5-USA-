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

// Function: sub_00283198
// Address: 0x283198 - 0x283370
void sub_00283198_0x283198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283198_0x283198");
#endif

    switch (ctx->pc) {
        case 0x2831dcu: goto label_2831dc;
        case 0x283200u: goto label_283200;
        case 0x28327cu: goto label_28327c;
        case 0x283290u: goto label_283290;
        case 0x2832a4u: goto label_2832a4;
        case 0x2832f0u: goto label_2832f0;
        default: break;
    }

    ctx->pc = 0x283198u;

    // 0x283198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28319c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2831a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2831a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2831a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2831a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2831a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2831acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2831b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2831b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2831b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2831b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2831b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2831bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2831c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2831c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2831c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2831c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2831c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2831cc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2831ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2831d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2831d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2831d4: 0xc080b84  jal         func_202E10
    ctx->pc = 0x2831D4u;
    SET_GPR_U32(ctx, 31, 0x2831DCu);
    ctx->pc = 0x2831D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831D4u;
    // 0x2831d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E10u, 0x2831D4u, 0x2831DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831DCu;
label_2831dc:
    // 0x2831dc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2831dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2831e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2831e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2831e4: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2831E4u;
    {
        const bool branch_taken_0x2831e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2831e4) {
            ctx->pc = 0x2831E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2831E4u;
            // 0x2831e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832C8u;
            goto label_2832c8;
        }
    }
    ctx->pc = 0x2831ECu;
    // 0x2831ec: 0x34178005  ori         $s7, $zero, 0x8005
    ctx->pc = 0x2831ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x2831f0: 0x34168006  ori         $s6, $zero, 0x8006
    ctx->pc = 0x2831f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x2831f4: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x2831f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2831f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2831f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2831fc: 0x0  nop
    ctx->pc = 0x2831fcu;
    // NOP
label_283200:
    // 0x283200: 0x1457000b  bne         $v0, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x283200u;
    {
        const bool branch_taken_0x283200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x283200) {
            ctx->pc = 0x283230u;
            goto label_283230;
        }
    }
    ctx->pc = 0x283208u;
    // 0x283208: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x283208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28320c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x283210: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x283210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x283214: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x283214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x283218: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x283218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28321c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283220: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283224: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283224u;
    {
        const bool branch_taken_0x283224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283224u;
        // 0x283228: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283224) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x28322Cu;
    // 0x28322c: 0x0  nop
    ctx->pc = 0x28322cu;
    // NOP
label_283230:
    // 0x283230: 0x54560004  bnel        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x283230u;
    {
        const bool branch_taken_0x283230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x283230) {
            ctx->pc = 0x283234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283230u;
            // 0x283234: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283244u;
            goto label_283244;
        }
    }
    ctx->pc = 0x283238u;
    // 0x283238: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x283238u;
    {
        const bool branch_taken_0x283238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283238u;
        // 0x28323c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283238) {
            ctx->pc = 0x2832B4u;
            goto label_2832b4;
        }
    }
    ctx->pc = 0x283240u;
label_283240:
    // 0x283240: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x283240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_283244:
    // 0x283244: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x283244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283248: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x283248u;
    {
        const bool branch_taken_0x283248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283248) {
            ctx->pc = 0x28324Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283248u;
            // 0x28324c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832B8u;
            goto label_2832b8;
        }
    }
    ctx->pc = 0x283250u;
    // 0x283250: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x283250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x283254: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x283254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x283258: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x283258u;
    {
        const bool branch_taken_0x283258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283258) {
            ctx->pc = 0x28325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283258u;
            // 0x28325c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832B8u;
            goto label_2832b8;
        }
    }
    ctx->pc = 0x283260u;
    // 0x283260: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x283260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x283264: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x283264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x283268: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x283268u;
    {
        const bool branch_taken_0x283268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283268) {
            ctx->pc = 0x28326Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283268u;
            // 0x28326c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832B8u;
            goto label_2832b8;
        }
    }
    ctx->pc = 0x283270u;
    // 0x283270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283274: 0xc09e32e  jal         func_278CB8
    ctx->pc = 0x283274u;
    SET_GPR_U32(ctx, 31, 0x28327Cu);
    ctx->pc = 0x283278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283274u;
    // 0x283278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CB8u, 0x283274u, 0x28327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28327Cu;
label_28327c:
    // 0x28327c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28327Cu;
    {
        const bool branch_taken_0x28327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28327Cu;
        // 0x283280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28327c) {
            ctx->pc = 0x2832B4u;
            goto label_2832b4;
        }
    }
    ctx->pc = 0x283284u;
    // 0x283284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x283284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283288: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x283288u;
    SET_GPR_U32(ctx, 31, 0x283290u);
    ctx->pc = 0x28328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283288u;
    // 0x28328c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x283288u, 0x283290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283290u;
label_283290:
    // 0x283290: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283290u;
    {
        const bool branch_taken_0x283290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283290u;
        // 0x283294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283290) {
            ctx->pc = 0x2832B4u;
            goto label_2832b4;
        }
    }
    ctx->pc = 0x283298u;
    // 0x283298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x283298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28329c: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x28329Cu;
    SET_GPR_U32(ctx, 31, 0x2832A4u);
    ctx->pc = 0x2832A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28329Cu;
    // 0x2832a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x28329Cu, 0x2832A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832A4u;
label_2832a4:
    // 0x2832a4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x2832a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2832a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2832a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2832ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2832ACu;
    {
        const bool branch_taken_0x2832ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2832ac) {
            ctx->pc = 0x2832B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2832ACu;
            // 0x2832b0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832C8u;
            goto label_2832c8;
        }
    }
    ctx->pc = 0x2832B4u;
label_2832b4:
    // 0x2832b4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2832b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2832b8:
    // 0x2832b8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2832b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2832bc: 0x1475ffd0  bne         $v1, $s5, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2832BCu;
    {
        const bool branch_taken_0x2832bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2832C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832BCu;
        // 0x2832c0: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832bc) {
            ctx->pc = 0x283200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283200;
        }
    }
    ctx->pc = 0x2832C4u;
    // 0x2832c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2832c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2832c8:
    // 0x2832c8: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x2832cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2832ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2832d0: 0x5464000f  bnel        $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2832D0u;
    {
        const bool branch_taken_0x2832d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2832d0) {
            ctx->pc = 0x2832D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2832D0u;
            // 0x2832d4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283310u;
            goto label_283310;
        }
    }
    ctx->pc = 0x2832D8u;
    // 0x2832d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2832d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2832dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2832dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2832e0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2832E0u;
    {
        const bool branch_taken_0x2832e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2832e0) {
            ctx->pc = 0x2832E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2832E0u;
            // 0x2832e4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283310u;
            goto label_283310;
        }
    }
    ctx->pc = 0x2832E8u;
    // 0x2832e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2832e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2832ec: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2832ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2832f0:
    // 0x2832f0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2832f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2832f4: 0x0  nop
    ctx->pc = 0x2832f4u;
    // NOP
    // 0x2832f8: 0x0  nop
    ctx->pc = 0x2832f8u;
    // NOP
    // 0x2832fc: 0x0  nop
    ctx->pc = 0x2832fcu;
    // NOP
    // 0x283300: 0x0  nop
    ctx->pc = 0x283300u;
    // NOP
    // 0x283304: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x283304u;
    {
        const bool branch_taken_0x283304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x283304) {
            ctx->pc = 0x283308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283304u;
            // 0x283308: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2832F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2832f0;
        }
    }
    ctx->pc = 0x28330Cu;
    // 0x28330c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x28330cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_283310:
    // 0x283310: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x283310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x283314: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x283314u;
    {
        const bool branch_taken_0x283314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283314u;
        // 0x283318: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283314) {
            ctx->pc = 0x283340u;
            goto label_283340;
        }
    }
    ctx->pc = 0x28331Cu;
    // 0x28331c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x28331cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283320: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283320u;
        // 0x283324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283320) {
            ctx->pc = 0x283344u;
            goto label_283344;
        }
    }
    ctx->pc = 0x283328u;
    // 0x283328: 0x862202c4  lh          $v0, 0x2C4($s1)
    ctx->pc = 0x283328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x28332c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28332Cu;
    {
        const bool branch_taken_0x28332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28332Cu;
        // 0x283330: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28332c) {
            ctx->pc = 0x283344u;
            goto label_283344;
        }
    }
    ctx->pc = 0x283334u;
    // 0x283334: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x283334u;
    {
        const bool branch_taken_0x283334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283334u;
        // 0x283338: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283334) {
            ctx->pc = 0x2831DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2831dc;
        }
    }
    ctx->pc = 0x28333Cu;
    // 0x28333c: 0x0  nop
    ctx->pc = 0x28333cu;
    // NOP
label_283340:
    // 0x283340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x283340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283344:
    // 0x283344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x283348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28334c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28334cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x283350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x283354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x283354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x283358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28335c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28335cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283360: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x283360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x283364: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283368: 0x3e00008  jr          $ra
    ctx->pc = 0x283368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283368u;
        // 0x28336c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283370u;
}
