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

// Function: sub_004BBA58
// Address: 0x4bba58 - 0x4bc6f0
void sub_004BBA58_0x4bba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BBA58_0x4bba58");
#endif

    switch (ctx->pc) {
        case 0x4bba78u: goto label_4bba78;
        case 0x4bba94u: goto label_4bba94;
        case 0x4bba9cu: goto label_4bba9c;
        case 0x4bbefcu: goto label_4bbefc;
        case 0x4bbf0cu: goto label_4bbf0c;
        case 0x4bbf20u: goto label_4bbf20;
        case 0x4bbf3cu: goto label_4bbf3c;
        case 0x4bbf50u: goto label_4bbf50;
        case 0x4bbfc8u: goto label_4bbfc8;
        case 0x4bc2c0u: goto label_4bc2c0;
        case 0x4bc2dcu: goto label_4bc2dc;
        case 0x4bc334u: goto label_4bc334;
        case 0x4bc33cu: goto label_4bc33c;
        case 0x4bc34cu: goto label_4bc34c;
        case 0x4bc4c4u: goto label_4bc4c4;
        case 0x4bc4d4u: goto label_4bc4d4;
        case 0x4bc4e8u: goto label_4bc4e8;
        case 0x4bc510u: goto label_4bc510;
        case 0x4bc520u: goto label_4bc520;
        case 0x4bc534u: goto label_4bc534;
        case 0x4bc5bcu: goto label_4bc5bc;
        case 0x4bc5c4u: goto label_4bc5c4;
        case 0x4bc5ccu: goto label_4bc5cc;
        case 0x4bc680u: goto label_4bc680;
        default: break;
    }

    ctx->pc = 0x4bba58u;

    // 0x4bba58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bba5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bba60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bba60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bba68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bba6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4bba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4bba70: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4BBA70u;
    SET_GPR_U32(ctx, 31, 0x4BBA78u);
    ctx->pc = 0x4BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA70u;
    // 0x4bba74: 0x263201b4  addiu       $s2, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BBA70u, 0x4BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA78u;
label_4bba78:
    // 0x4bba78: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bba7c: 0xac620e14  sw          $v0, 0xE14($v1)
    ctx->pc = 0x4bba7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E14u, _value); } while (0);
    // 0x4bba80: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4bba80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bba84: 0x4400070  bltz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x4BBA84u;
    {
        const bool branch_taken_0x4bba84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBA84u;
        // 0x4bba88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bba84) {
            ctx->pc = 0x4BBC48u;
            goto label_4bbc48;
        }
    }
    ctx->pc = 0x4BBA8Cu;
    // 0x4bba8c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BBA8Cu;
    SET_GPR_U32(ctx, 31, 0x4BBA94u);
    ctx->pc = 0x4BBA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA8Cu;
    // 0x4bba90: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BBA8Cu, 0x4BBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA94u;
label_4bba94:
    // 0x4bba94: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4BBA94u;
    SET_GPR_U32(ctx, 31, 0x4BBA9Cu);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BBA94u, 0x4BBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA9Cu;
label_4bba9c:
    // 0x4bba9c: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4bba9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bbaa0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bbaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bbaa4: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x4bbaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4bbaa8: 0x24a50df4  addiu       $a1, $a1, 0xDF4
    ctx->pc = 0x4bbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3572));
    // 0x4bbaac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DF4u));
    // 0x4bbab0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bbab0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbab4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x4bbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x4bbab8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bbab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bbabc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbac0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbac4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbac8: 0x24c60e0c  addiu       $a2, $a2, 0xE0C
    ctx->pc = 0x4bbac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3596));
    // 0x4bbacc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bbad0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbad4: 0x262a0118  addiu       $t2, $s1, 0x118
    ctx->pc = 0x4bbad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4bbad8: 0x262c011c  addiu       $t4, $s1, 0x11C
    ctx->pc = 0x4bbad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x4bbadc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bbadcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bbae0: 0x262e0120  addiu       $t6, $s1, 0x120
    ctx->pc = 0x4bbae0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4bbae4: 0x262b0124  addiu       $t3, $s1, 0x124
    ctx->pc = 0x4bbae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4bbae8: 0x262d0128  addiu       $t5, $s1, 0x128
    ctx->pc = 0x4bbae8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4bbaec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4bbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4bbaf0: 0x262f012c  addiu       $t7, $s1, 0x12C
    ctx->pc = 0x4bbaf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4bbaf4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbaf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbafc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bbb00: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bbb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bbb04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bbb08: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bbb08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4bbb0c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bbb10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4bbb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4bbb14: 0x24216f80  addiu       $at, $at, 0x6F80
    ctx->pc = 0x4bbb14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28544));
    // 0x4bbb18: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4bbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4bbb1c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bbb1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bbb20: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4bbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bbb24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bbb28: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x4bbb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4bbb2c: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4bbb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbb30: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x4bbb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4bbb34: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4bbb34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4bbb38: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4bbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4bbb3c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4bbb3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bbb40: 0xa6230160  sh          $v1, 0x160($s1)
    ctx->pc = 0x4bbb40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbb44: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4bbb44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4bbb48: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4bbb48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bbb4c: 0xa6230162  sh          $v1, 0x162($s1)
    ctx->pc = 0x4bbb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbb50: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4bbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x4bbb54: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4bbb54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bbb58: 0xa6230164  sh          $v1, 0x164($s1)
    ctx->pc = 0x4bbb58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbb5c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bbb60: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bbb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bbb64: 0x862401be  lh          $a0, 0x1BE($s1)
    ctx->pc = 0x4bbb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4bbb68: 0xa6230138  sh          $v1, 0x138($s1)
    ctx->pc = 0x4bbb68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbb6c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4bbb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4bbb70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bbb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbb78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bbb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4bbb7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bbb80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbb84: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bbb84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bbb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bbb8c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbb90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbb94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bbb98: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bbb98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bbb9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bbba0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bbba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4bbba4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bbba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4bbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4bbbac: 0x24216fa0  addiu       $at, $at, 0x6FA0
    ctx->pc = 0x4bbbacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28576));
    // 0x4bbbb0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4bbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4bbbb4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bbbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bbbb8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4bbbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bbbbc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bbbc0: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4bbbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbbc4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4bbbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4bbbc8: 0xa5800000  sh          $zero, 0x0($t4)
    ctx->pc = 0x4bbbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bbbcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bbbd0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bbbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bbbd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bbbd8: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x4bbbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bbbdc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bbbe0: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4bbbe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bbbe4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4bbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bbbe8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bbbec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbbf0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbbf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bbbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bbbf8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4bbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4bbbfc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4bbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bbc00: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4bbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bbc04: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bbc08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbc0c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbc10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bbc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bbc14: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4bbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4bbc18: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4bbc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4bbc1c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4bbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4bbc20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bbc24: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bbc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bbc28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbc2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bbc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bbc30: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4bbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4bbc34: 0xa630002e  sh          $s0, 0x2E($s1)
    ctx->pc = 0x4bbc34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 16));
    // 0x4bbc38: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4bbc38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bbc3c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4bbc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bbc40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bbc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4bbc44: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4bbc44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bbc48:
    // 0x4bbc48: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4bbc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4bbc4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bbc50: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BBC50u;
    {
        const bool branch_taken_0x4bbc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC50u;
        // 0x4bbc54: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc50) {
            ctx->pc = 0x4BBC98u;
            goto label_4bbc98;
        }
    }
    ctx->pc = 0x4BBC58u;
    // 0x4bbc58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BBC58u;
    {
        const bool branch_taken_0x4bbc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbc58) {
            ctx->pc = 0x4BBC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BBC58u;
            // 0x4bbc5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BBC70u;
            goto label_4bbc70;
        }
    }
    ctx->pc = 0x4BBC60u;
    // 0x4bbc60: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BBC60u;
    {
        const bool branch_taken_0x4bbc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC60u;
        // 0x4bbc64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc60) {
            ctx->pc = 0x4BBC80u;
            goto label_4bbc80;
        }
    }
    ctx->pc = 0x4BBC68u;
    // 0x4bbc68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4BBC68u;
    {
        const bool branch_taken_0x4bbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC68u;
        // 0x4bbc6c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc68) {
            ctx->pc = 0x4BBCD0u;
            goto label_4bbcd0;
        }
    }
    ctx->pc = 0x4BBC70u;
label_4bbc70:
    // 0x4bbc70: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BBC70u;
    {
        const bool branch_taken_0x4bbc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC70u;
        // 0x4bbc74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc70) {
            ctx->pc = 0x4BBCB8u;
            goto label_4bbcb8;
        }
    }
    ctx->pc = 0x4BBC78u;
    // 0x4bbc78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4BBC78u;
    {
        const bool branch_taken_0x4bbc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC78u;
        // 0x4bbc7c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc78) {
            ctx->pc = 0x4BBCD0u;
            goto label_4bbcd0;
        }
    }
    ctx->pc = 0x4BBC80u;
label_4bbc80:
    // 0x4bbc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bbc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bbc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bbc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbc8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4bbc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bbc90: 0x812ef38  j           func_4BBCE0
    ctx->pc = 0x4BBC90u;
    ctx->pc = 0x4BBC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBC90u;
    // 0x4bbc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BBCE0u;
    goto label_4bbce0;
    ctx->pc = 0x4BBC98u;
label_4bbc98:
    // 0x4bbc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bbc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bbca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bbca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bbca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bbca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbca8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4bbca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bbcac: 0x812f184  j           func_4BC610
    ctx->pc = 0x4BBCACu;
    ctx->pc = 0x4BBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBCACu;
    // 0x4bbcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC610u;
    goto label_4bc610;
    ctx->pc = 0x4BBCB4u;
    // 0x4bbcb4: 0x0  nop
    ctx->pc = 0x4bbcb4u;
    // NOP
label_4bbcb8:
    // 0x4bbcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bbcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bbcc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bbcc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbcc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4bbcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bbcc8: 0x812f1b6  j           func_4BC6D8
    ctx->pc = 0x4BBCC8u;
    ctx->pc = 0x4BBCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBCC8u;
    // 0x4bbccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC6D8u;
    goto label_4bc6d8;
    ctx->pc = 0x4BBCD0u;
label_4bbcd0:
    // 0x4bbcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bbcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbcd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4bbcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bbcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBCD8u;
        // 0x4bbcdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBCE0u;
label_4bbce0:
    // 0x4bbce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bbce4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4bbce4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bbcec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bbcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bbcf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bbcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbcf4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4bbcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4bbcf8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4bbcf8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4bbcfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bbcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bbd00: 0x2643015e  addiu       $v1, $s2, 0x15E
    ctx->pc = 0x4bbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4bbd04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bbd08: 0x26f10df4  addiu       $s1, $s7, 0xDF4
    ctx->pc = 0x4bbd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 3572));
    // 0x4bbd0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bbd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bbd10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bbd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bbd14: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bbd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bbd18: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4bbd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4bbd1c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4bbd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4bbd20: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bbd20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bbd24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bbd28: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bbd28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bbd2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bbd30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbd30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbd34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4bbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbd38: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbd3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbd40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbd44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bbd48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbd4c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bbd4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbd50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4bbd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4bbd54: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbd58: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4bbd58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbd5c: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4bbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4bbd60: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bbd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbd64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BBD64u;
    {
        const bool branch_taken_0x4bbd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD64u;
        // 0x4bbd68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd64) {
            ctx->pc = 0x4BBD98u;
            goto label_4bbd98;
        }
    }
    ctx->pc = 0x4BBD6Cu;
    // 0x4bbd6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bbd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bbd70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bbd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbd74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bbd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bbd78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bbd78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bbd7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bbd7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bbd80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bbd80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bbd84: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bbd84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bbd88: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bbd88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bbd8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bbd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bbd90: 0x812f0c0  j           func_4BC300
    ctx->pc = 0x4BBD90u;
    ctx->pc = 0x4BBD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBD90u;
    // 0x4bbd94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC300u;
    goto label_4bc300;
    ctx->pc = 0x4BBD98u;
label_4bbd98:
    // 0x4bbd98: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bbd9c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bbd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bbda0: 0x8c460e14  lw          $a2, 0xE14($v0)
    ctx->pc = 0x4bbda0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E14u));
    // 0x4bbda4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bbda8: 0x24550e00  addiu       $s5, $v0, 0xE00
    ctx->pc = 0x4bbda8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x4bbdac: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4bbdacu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4bbdb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bbdb4: 0x24940e04  addiu       $s4, $a0, 0xE04
    ctx->pc = 0x4bbdb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 3588));
    // 0x4bbdb8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E00u));
    // 0x4bbdbc: 0x27d30e08  addiu       $s3, $fp, 0xE08
    ctx->pc = 0x4bbdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 3592));
    // 0x4bbdc0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbdc4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4bbdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bbdc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbdc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbdcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbdd0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbdd4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4bbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bbdd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbddc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bbddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bbde0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bbde0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bbde4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbde8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bbde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bbdec: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4bbdecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4bbdf0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4bbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4bbdf4: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4bbdf4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bbdf8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbdfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbdfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbe00: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbe04: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bbe04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bbe08: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4bbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4bbe0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bbe0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bbe10: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4bbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4bbe14: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4bbe14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bbe18: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbe1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbe1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbe20: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbe24: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bbe24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bbe28: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4bbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4bbe2c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bbe2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bbe30: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4bbe34: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4bbe34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bbe38: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbe3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbe3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbe40: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4bbe40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bbe44: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x4bbe44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x4bbe48: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4bbe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4bbe4c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bbe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bbe50: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4bbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4bbe54: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbe58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbe58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbe5c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4bbe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bbe60: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4bbe60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4bbe64: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4bbe64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4bbe68: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4bbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4bbe6c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4bbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4bbe70: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bbe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bbe74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbe74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbe78: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4bbe78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbe7c: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x4bbe7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x4bbe80: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4bbe80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4bbe84: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4bbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4bbe88: 0x864201be  lh          $v0, 0x1BE($s2)
    ctx->pc = 0x4bbe88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x4bbe8c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbe90: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4bbe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4bbe94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bbe98: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4bbe98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbe9c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x4bbe9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4bbea0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4BBEA0u;
    {
        const bool branch_taken_0x4bbea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBEA0u;
        // 0x4bbea4: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbea0) {
            ctx->pc = 0x4BBF28u;
            goto label_4bbf28;
        }
    }
    ctx->pc = 0x4BBEA8u;
    // 0x4bbea8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4bbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4bbeac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbeb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bbeb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bbeb4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4bbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4bbeb8: 0x26d00df8  addiu       $s0, $s6, 0xDF8
    ctx->pc = 0x4bbeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 3576));
    // 0x4bbebc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbec0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbec4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bbec8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbecc: 0x86420120  lh          $v0, 0x120($s2)
    ctx->pc = 0x4bbeccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x4bbed0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbed4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbed8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bbedc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbee0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bbee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbee4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bbee8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bbee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bbeec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbef0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bbef4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BBEF4u;
    SET_GPR_U32(ctx, 31, 0x4BBEFCu);
    ctx->pc = 0x4BBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBEF4u;
    // 0x4bbef8: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BBEF4u, 0x4BBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBEFCu;
label_4bbefc:
    // 0x4bbefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bbf00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4bbf04: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BBF04u;
    SET_GPR_U32(ctx, 31, 0x4BBF0Cu);
    ctx->pc = 0x4BBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBF04u;
    // 0x4bbf08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BBF04u, 0x4BBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBF0Cu;
label_4bbf0c:
    // 0x4bbf0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bbf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf10: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4bbf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbf14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4bbf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf18: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BBF18u;
    SET_GPR_U32(ctx, 31, 0x4BBF20u);
    ctx->pc = 0x4BBF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBF18u;
    // 0x4bbf1c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BBF18u, 0x4BBF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBF20u;
label_4bbf20:
    // 0x4bbf20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BBF20u;
    {
        const bool branch_taken_0x4bbf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF20u;
        // 0x4bbf24: 0x3c130073  lui         $s3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf20) {
            ctx->pc = 0x4BBF54u;
            goto label_4bbf54;
        }
    }
    ctx->pc = 0x4BBF28u;
label_4bbf28:
    // 0x4bbf28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf2c: 0x26d00df8  addiu       $s0, $s6, 0xDF8
    ctx->pc = 0x4bbf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 3576));
    // 0x4bbf30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bbf34: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BBF34u;
    SET_GPR_U32(ctx, 31, 0x4BBF3Cu);
    ctx->pc = 0x4BBF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBF34u;
    // 0x4bbf38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BBF34u, 0x4BBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBF3Cu;
label_4bbf3c:
    // 0x4bbf3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bbf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf40: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4bbf40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bbf44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4bbf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbf48: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4BBF48u;
    SET_GPR_U32(ctx, 31, 0x4BBF50u);
    ctx->pc = 0x4BBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBF48u;
    // 0x4bbf4c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4BBF48u, 0x4BBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBF50u;
label_4bbf50:
    // 0x4bbf50: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4bbf50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
label_4bbf54:
    // 0x4bbf54: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bbf58: 0x2670d680  addiu       $s0, $s3, -0x2980
    ctx->pc = 0x4bbf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4bbf5c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bbf60: 0x94470e00  lhu         $a3, 0xE00($v0)
    ctx->pc = 0x4bbf60u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F0E00u));
    // 0x4bbf64: 0x26082494  addiu       $t0, $s0, 0x2494
    ctx->pc = 0x4bbf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4bbf68: 0x94850e04  lhu         $a1, 0xE04($a0)
    ctx->pc = 0x4bbf68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0E04u));
    // 0x4bbf6c: 0x26092498  addiu       $t1, $s0, 0x2498
    ctx->pc = 0x4bbf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4bbf70: 0x97c60e08  lhu         $a2, 0xE08($fp)
    ctx->pc = 0x4bbf70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3592)));
    // 0x4bbf74: 0x260a249c  addiu       $t2, $s0, 0x249C
    ctx->pc = 0x4bbf74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4bbf78: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4bbf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bbf7c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4bbf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbf80: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4bbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bbf84: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4bbf84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bbf88: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4bbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bbf8c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4bbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4bbf90: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4bbf90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4bbf94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bbf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bbf98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bbf98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bbf9c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bbf9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bbfa0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4bbfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4bbfa4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bbfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bbfa8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bbfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bbfac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4bbfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4bbfb0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4bbfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4bbfb4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4bbfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4bbfb8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4bbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4bbfbc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4bbfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4bbfc0: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BBFC0u;
    SET_GPR_U32(ctx, 31, 0x4BBFC8u);
    ctx->pc = 0x4BBFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBFC0u;
    // 0x4bbfc4: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BBFC0u, 0x4BBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBFC8u;
label_4bbfc8:
    // 0x4bbfc8: 0x26e40df4  addiu       $a0, $s7, 0xDF4
    ctx->pc = 0x4bbfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3572));
    // 0x4bbfcc: 0x264d011c  addiu       $t5, $s2, 0x11C
    ctx->pc = 0x4bbfccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x4bbfd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bbfd4: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4bbfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bbfd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbfdc: 0x960524a2  lhu         $a1, 0x24A2($s0)
    ctx->pc = 0x4bbfdcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4bbfe0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bbfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bbfe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bbfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bbfe8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bbfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bbfec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bbfecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bbff0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bbff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bbff8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BBFF8u;
    {
        const bool branch_taken_0x4bbff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBFF8u;
        // 0x4bbffc: 0x26c60df8  addiu       $a2, $s6, 0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 3576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbff8) {
            ctx->pc = 0x4BC010u;
            goto label_4bc010;
        }
    }
    ctx->pc = 0x4BC000u;
    // 0x4bc000: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bc000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC004u;
    {
        const bool branch_taken_0x4bc004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC004u;
        // 0x4bc008: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc004) {
            ctx->pc = 0x4BC018u;
            goto label_4bc018;
        }
    }
    ctx->pc = 0x4BC00Cu;
    // 0x4bc00c: 0x0  nop
    ctx->pc = 0x4bc00cu;
    // NOP
label_4bc010:
    // 0x4bc010: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc014: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bc014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4bc018:
    // 0x4bc018: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bc018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bc01c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4bc01cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4bc020: 0x25cc0dfc  addiu       $t4, $t6, 0xDFC
    ctx->pc = 0x4bc020u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 3580));
    // 0x4bc024: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bc024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc028: 0x86420138  lh          $v0, 0x138($s2)
    ctx->pc = 0x4bc028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x4bc02c: 0x26e80df4  addiu       $t0, $s7, 0xDF4
    ctx->pc = 0x4bc02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 3572));
    // 0x4bc030: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4bc030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DFCu));
    // 0x4bc034: 0x266ad680  addiu       $t2, $s3, -0x2980
    ctx->pc = 0x4bc034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4bc038: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bc038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bc03c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4bc03cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bc040: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc044: 0x96c90df8  lhu         $t1, 0xDF8($s6)
    ctx->pc = 0x4bc044u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 3576)));
    // 0x4bc048: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc04c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bc04cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bc050: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc054: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4bc054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4bc058: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4bc058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bc05c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4bc05cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bc060: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4bc060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bc064: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4bc064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4bc068: 0x954b24a2  lhu         $t3, 0x24A2($t2)
    ctx->pc = 0x4bc068u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 9378)));
    // 0x4bc06c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc070: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bc070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bc074: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc078: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bc078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bc07c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc080: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bc080u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bc084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc088: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bc088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bc08c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bc090: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bc090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bc094: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc098: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bc098u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bc09c: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bc09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bc0a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bc0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bc0a4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4bc0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4bc0a8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4bc0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4bc0ac: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4bc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4bc0b0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bc0b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bc0b4: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4bc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4bc0b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc0bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC0BCu;
    {
        const bool branch_taken_0x4bc0bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC0BCu;
        // 0x4bc0c0: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc0bc) {
            ctx->pc = 0x4BC0CCu;
            goto label_4bc0cc;
        }
    }
    ctx->pc = 0x4BC0C4u;
    // 0x4bc0c4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bc0c8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4bc0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bc0cc:
    // 0x4bc0cc: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4bc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4bc0d0: 0x26c50df8  addiu       $a1, $s6, 0xDF8
    ctx->pc = 0x4bc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3576));
    // 0x4bc0d4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4bc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bc0d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc0dc: 0x8dc40dfc  lw          $a0, 0xDFC($t6)
    ctx->pc = 0x4bc0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 3580)));
    // 0x4bc0e0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4bc0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bc0e4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bc0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bc0e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4bc0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4bc0ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bc0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bc0f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4bc0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bc0f4: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BC0F4u;
    {
        const bool branch_taken_0x4bc0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC0F4u;
        // 0x4bc0f8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc0f4) {
            ctx->pc = 0x4BC138u;
            goto label_4bc138;
        }
    }
    ctx->pc = 0x4BC0FCu;
    // 0x4bc0fc: 0x96e20df4  lhu         $v0, 0xDF4($s7)
    ctx->pc = 0x4bc0fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3572)));
    // 0x4bc100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bc100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc10c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bc114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc118: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bc118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bc11c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bc11cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bc120: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bc120u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bc124: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bc124u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bc128: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bc128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bc12c: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4bc12cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc130: 0x812f0c0  j           func_4BC300
    ctx->pc = 0x4BC130u;
    ctx->pc = 0x4BC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC130u;
    // 0x4bc134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC300u;
    goto label_4bc300;
    ctx->pc = 0x4BC138u;
label_4bc138:
    // 0x4bc138: 0x2665d680  addiu       $a1, $s3, -0x2980
    ctx->pc = 0x4bc138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4bc13c: 0x26e40df4  addiu       $a0, $s7, 0xDF4
    ctx->pc = 0x4bc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3572));
    // 0x4bc140: 0x94a224a2  lhu         $v0, 0x24A2($a1)
    ctx->pc = 0x4bc140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 9378)));
    // 0x4bc144: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bc144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc148: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4bc148u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc14c: 0x84a324a0  lh          $v1, 0x24A0($a1)
    ctx->pc = 0x4bc14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 9376)));
    // 0x4bc150: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4bc150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bc154: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4bc154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4bc158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc15c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bc15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bc160: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bc160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bc164: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4bc164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bc168: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4BC168u;
    {
        const bool branch_taken_0x4bc168 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC168u;
        // 0x4bc16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc168) {
            ctx->pc = 0x4BC1A0u;
            goto label_4bc1a0;
        }
    }
    ctx->pc = 0x4BC170u;
    // 0x4bc170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc17c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc180: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bc180u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc184: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bc184u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bc188: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bc188u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bc18c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bc18cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bc190: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bc190u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bc194: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bc194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bc198: 0x812f0c0  j           func_4BC300
    ctx->pc = 0x4BC198u;
    ctx->pc = 0x4BC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC198u;
    // 0x4bc19c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC300u;
    goto label_4bc300;
    ctx->pc = 0x4BC1A0u;
label_4bc1a0:
    // 0x4bc1a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc1ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc1b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bc1b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc1b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bc1b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bc1b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bc1b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bc1bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bc1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bc1c0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bc1c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bc1c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bc1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bc1c8: 0x812f074  j           func_4BC1D0
    ctx->pc = 0x4BC1C8u;
    ctx->pc = 0x4BC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC1C8u;
    // 0x4bc1cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC1D0u;
    goto label_4bc1d0;
    ctx->pc = 0x4BC1D0u;
label_4bc1d0:
    // 0x4bc1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bc1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bc1d4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bc1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bc1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bc1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bc1dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bc1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bc1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bc1e4: 0x24730df4  addiu       $s3, $v1, 0xDF4
    ctx->pc = 0x4bc1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3572));
    // 0x4bc1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bc1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bc1ec: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4bc1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc1f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bc1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bc1f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4bc1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc1f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bc1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bc1fc: 0x8642015e  lh          $v0, 0x15E($s2)
    ctx->pc = 0x4bc1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x4bc200: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4bc200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DF4u));
    // 0x4bc204: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bc204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bc208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc20c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc210: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bc210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bc214: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc218: 0x96450164  lhu         $a1, 0x164($s2)
    ctx->pc = 0x4bc218u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x4bc21c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4bc21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bc220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4bc220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4bc224: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc228: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc22c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bc22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bc230: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc234: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bc234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bc238: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4bc238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bc23c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BC23Cu;
    {
        const bool branch_taken_0x4bc23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC23Cu;
        // 0x4bc240: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc23c) {
            ctx->pc = 0x4BC260u;
            goto label_4bc260;
        }
    }
    ctx->pc = 0x4BC244u;
    // 0x4bc244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc24c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bc254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc258: 0x812f0c0  j           func_4BC300
    ctx->pc = 0x4BC258u;
    ctx->pc = 0x4BC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC258u;
    // 0x4bc25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC300u;
    goto label_4bc300;
    ctx->pc = 0x4BC260u;
label_4bc260:
    // 0x4bc260: 0x96430162  lhu         $v1, 0x162($s2)
    ctx->pc = 0x4bc260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4bc264: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4bc264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4bc268: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4bc268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4bc26c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bc26cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bc270: 0xa6032330  sh          $v1, 0x2330($s0)
    ctx->pc = 0x4bc270u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4bc274: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc278: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4bc278u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4bc27c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4bc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4bc280: 0x26310df8  addiu       $s1, $s1, 0xDF8
    ctx->pc = 0x4bc280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3576));
    // 0x4bc284: 0x8c440e00  lw          $a0, 0xE00($v0)
    ctx->pc = 0x4bc284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0E00u));
    // 0x4bc288: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4bc288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc28c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4bc28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4bc290: 0x8d250e04  lw          $a1, 0xE04($t1)
    ctx->pc = 0x4bc290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3588)));
    // 0x4bc294: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4bc294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4bc298: 0xa6032334  sh          $v1, 0x2334($s0)
    ctx->pc = 0x4bc298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc29c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4bc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4bc2a0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bc2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bc2a4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4bc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4bc2a8: 0xa6022336  sh          $v0, 0x2336($s0)
    ctx->pc = 0x4bc2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc2ac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x4bc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4bc2b0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4bc2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4bc2b4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4bc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4bc2b8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4BC2B8u;
    SET_GPR_U32(ctx, 31, 0x4BC2C0u);
    ctx->pc = 0x4BC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC2B8u;
    // 0x4bc2bc: 0xa6032338  sh          $v1, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4BC2B8u, 0x4BC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC2C0u;
label_4bc2c0:
    // 0x4bc2c0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4bc2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bc2c4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bc2c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bc2c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bc2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc2cc: 0xa603233a  sh          $v1, 0x233A($s0)
    ctx->pc = 0x4bc2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc2d0: 0xa602233c  sh          $v0, 0x233C($s0)
    ctx->pc = 0x4bc2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc2d4: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4BC2D4u;
    SET_GPR_U32(ctx, 31, 0x4BC2DCu);
    ctx->pc = 0x4BC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC2D4u;
    // 0x4bc2d8: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4BC2D4u, 0x4BC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC2DCu;
label_4bc2dc:
    // 0x4bc2dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bc2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc2e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc2e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc2ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc2ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bc2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc2f4: 0x812f0c0  j           func_4BC300
    ctx->pc = 0x4BC2F4u;
    ctx->pc = 0x4BC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC2F4u;
    // 0x4bc2f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC300u;
    goto label_4bc300;
    ctx->pc = 0x4BC2FCu;
    // 0x4bc2fc: 0x0  nop
    ctx->pc = 0x4bc2fcu;
    // NOP
label_4bc300:
    // 0x4bc300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bc304: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4bc304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4bc308: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4bc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4bc30c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4bc30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4bc310: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4bc310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4bc314: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4bc314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4bc318: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4bc318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4bc31c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4bc31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4bc320: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4bc320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4bc324: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4bc324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4bc328: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4bc328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4bc32c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BC32Cu;
    SET_GPR_U32(ctx, 31, 0x4BC334u);
    ctx->pc = 0x4BC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC32Cu;
    // 0x4bc330: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BC32Cu, 0x4BC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC334u;
label_4bc334:
    // 0x4bc334: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BC334u;
    SET_GPR_U32(ctx, 31, 0x4BC33Cu);
    ctx->pc = 0x4BC338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC334u;
    // 0x4bc338: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BC334u, 0x4BC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC33Cu;
label_4bc33c:
    // 0x4bc33c: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x4BC33Cu;
    {
        const bool branch_taken_0x4bc33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC33Cu;
        // 0x4bc340: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc33c) {
            ctx->pc = 0x4BC5DCu;
            goto label_4bc5dc;
        }
    }
    ctx->pc = 0x4BC344u;
    // 0x4bc344: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BC344u;
    SET_GPR_U32(ctx, 31, 0x4BC34Cu);
    ctx->pc = 0x4BC348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC344u;
    // 0x4bc348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BC344u, 0x4BC34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC34Cu;
label_4bc34c:
    // 0x4bc34c: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x4BC34Cu;
    {
        const bool branch_taken_0x4bc34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC34Cu;
        // 0x4bc350: 0x27c20160  addiu       $v0, $fp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc34c) {
            ctx->pc = 0x4BC5DCu;
            goto label_4bc5dc;
        }
    }
    ctx->pc = 0x4BC354u;
    // 0x4bc354: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bc354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bc358: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4bc358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4bc35c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4bc35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4bc360: 0x24840e10  addiu       $a0, $a0, 0xE10
    ctx->pc = 0x4bc360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3600));
    // 0x4bc364: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8
    ctx->pc = 0x4bc364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
    // 0x4bc368: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4bc368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc36c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bc36cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bc370: 0x26100df4  addiu       $s0, $s0, 0xDF4
    ctx->pc = 0x4bc370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3572));
    // 0x4bc374: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4bc374u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc378: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x4bc378u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc37c: 0x27c60162  addiu       $a2, $fp, 0x162
    ctx->pc = 0x4bc37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 354));
    // 0x4bc380: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bc380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0E10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E10u, _value); } while (0);
    // 0x4bc384: 0x27c80166  addiu       $t0, $fp, 0x166
    ctx->pc = 0x4bc384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 358));
    // 0x4bc388: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4bc388u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4bc38c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4bc38cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4bc390: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4bc390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DF4u));
    // 0x4bc394: 0x26940e00  addiu       $s4, $s4, 0xE00
    ctx->pc = 0x4bc394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3584));
    // 0x4bc398: 0x87c20008  lh          $v0, 0x8($fp)
    ctx->pc = 0x4bc398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4bc39c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4bc39cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4bc3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc3a4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4bc3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4bc3a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc3ac: 0x26730e04  addiu       $s3, $s3, 0xE04
    ctx->pc = 0x4bc3acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3588));
    // 0x4bc3b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc3b4: 0x26b50e08  addiu       $s5, $s5, 0xE08
    ctx->pc = 0x4bc3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3592));
    // 0x4bc3b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bc3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bc3bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc3c0: 0x27d60124  addiu       $s6, $fp, 0x124
    ctx->pc = 0x4bc3c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 292));
    // 0x4bc3c4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4bc3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4bc3c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4bc3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc3cc: 0x26310df8  addiu       $s1, $s1, 0xDF8
    ctx->pc = 0x4bc3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3576));
    // 0x4bc3d0: 0x27d7012c  addiu       $s7, $fp, 0x12C
    ctx->pc = 0x4bc3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 300));
    // 0x4bc3d4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x4bc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x4bc3d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc3dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc3e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bc3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bc3e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc3e8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4bc3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc3ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4bc3f0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc3f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc3f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bc3fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4bc3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc400: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc404: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bc404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4bc408: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bc408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bc40c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4bc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bc410: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bc410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bc414: 0xa7c0015e  sh          $zero, 0x15E($fp)
    ctx->pc = 0x4bc414u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bc418: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4bc418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bc41c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4bc41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc420: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bc420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc424: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc428: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4bc428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4bc42c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4bc42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc430: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4bc430u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc434: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x4bc434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4bc438: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bc438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bc43c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bc43cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc440: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4bc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4bc444: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4bc444u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc448: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bc448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bc44c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bc44cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc450: 0xa7c20164  sh          $v0, 0x164($fp)
    ctx->pc = 0x4bc450u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc454: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4bc454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4bc458: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bc458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc45c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4bc45cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc460: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4bc460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x4bc464: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4bc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bc468: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4bc468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bc46c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc470: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bc474: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4bc474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bc478: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bc478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bc47c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4bc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4bc480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc484: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4bc484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bc488: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4bc488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4bc48c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc490: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc494: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bc494u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bc498: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bc498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bc49c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bc49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bc4a0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4bc4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4bc4a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4bc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bc4a8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4bc4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bc4ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc4b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc4b4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bc4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bc4b8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4bc4bc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BC4BCu;
    SET_GPR_U32(ctx, 31, 0x4BC4C4u);
    ctx->pc = 0x4BC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC4BCu;
    // 0x4bc4c0: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BC4BCu, 0x4BC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC4C4u;
label_4bc4c4:
    // 0x4bc4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bc4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc4c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bc4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bc4cc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BC4CCu;
    SET_GPR_U32(ctx, 31, 0x4BC4D4u);
    ctx->pc = 0x4BC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC4CCu;
    // 0x4bc4d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BC4CCu, 0x4BC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC4D4u;
label_4bc4d4:
    // 0x4bc4d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bc4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc4d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4bc4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc4dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4bc4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc4e0: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4BC4E0u;
    SET_GPR_U32(ctx, 31, 0x4BC4E8u);
    ctx->pc = 0x4BC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC4E0u;
    // 0x4bc4e4: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4BC4E0u, 0x4BC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC4E8u;
label_4bc4e8:
    // 0x4bc4e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4bc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc4ec: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4bc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bc4f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc4f4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4bc4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bc4f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc4f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc4fc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bc4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bc500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc504: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bc504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bc508: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BC508u;
    SET_GPR_U32(ctx, 31, 0x4BC510u);
    ctx->pc = 0x4BC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC508u;
    // 0x4bc50c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BC508u, 0x4BC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC510u;
label_4bc510:
    // 0x4bc510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bc510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc514: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bc514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bc518: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BC518u;
    SET_GPR_U32(ctx, 31, 0x4BC520u);
    ctx->pc = 0x4BC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC518u;
    // 0x4bc51c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BC518u, 0x4BC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC520u;
label_4bc520:
    // 0x4bc520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bc520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc524: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4bc524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4bc528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc52c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BC52Cu;
    SET_GPR_U32(ctx, 31, 0x4BC534u);
    ctx->pc = 0x4BC530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC52Cu;
    // 0x4bc530: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BC52Cu, 0x4BC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC534u;
label_4bc534:
    // 0x4bc534: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4bc534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bc538: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4bc538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bc53c: 0x27c50128  addiu       $a1, $fp, 0x128
    ctx->pc = 0x4bc53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 296));
    // 0x4bc540: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4bc540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4bc544: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4bc544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4bc548: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc54c: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4bc54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4bc550: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc554: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4bc554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4bc558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc55c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bc55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc560: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bc560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bc564: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4bc564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bc568: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bc568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc56c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc574: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4bc574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4bc578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc57c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bc580: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bc580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bc584: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4bc584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bc588: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc590: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4bc590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4bc594: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc598: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4bc598u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4bc59c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4bc59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc5a0: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4bc5a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bc5a4: 0xa4c7232e  sh          $a3, 0x232E($a2)
    ctx->pc = 0x4bc5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 7));
    // 0x4bc5a8: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4bc5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bc5ac: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4bc5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4bc5b0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4bc5b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bc5b4: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4BC5B4u;
    SET_GPR_U32(ctx, 31, 0x4BC5BCu);
    ctx->pc = 0x4BC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC5B4u;
    // 0x4bc5b8: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4BC5B4u, 0x4BC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC5BCu;
label_4bc5bc:
    // 0x4bc5bc: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BC5BCu;
    SET_GPR_U32(ctx, 31, 0x4BC5C4u);
    ctx->pc = 0x4BC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC5BCu;
    // 0x4bc5c0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BC5BCu, 0x4BC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC5C4u;
label_4bc5c4:
    // 0x4bc5c4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BC5C4u;
    SET_GPR_U32(ctx, 31, 0x4BC5CCu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BC5C4u, 0x4BC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC5CCu;
label_4bc5cc:
    // 0x4bc5cc: 0x27c301bc  addiu       $v1, $fp, 0x1BC
    ctx->pc = 0x4bc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 444));
    // 0x4bc5d0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bc5d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bc5d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc5d8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bc5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bc5dc:
    // 0x4bc5dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4bc5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc5e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4bc5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc5e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4bc5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc5e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4bc5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bc5ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4bc5ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bc5f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4bc5f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bc5f4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4bc5f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bc5f8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4bc5f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bc5fc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4bc5fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bc600: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4bc600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4bc604: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC604u;
        // 0x4bc608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC60Cu;
    // 0x4bc60c: 0x0  nop
    ctx->pc = 0x4bc60cu;
    // NOP
label_4bc610:
    // 0x4bc610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bc614: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bc614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bc618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bc618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bc61c: 0x24a50df4  addiu       $a1, $a1, 0xDF4
    ctx->pc = 0x4bc61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3572));
    // 0x4bc620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bc620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bc624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bc624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bc62c: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4bc62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4bc630: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bc630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc634: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4bc634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc638: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bc638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DF4u));
    // 0x4bc63c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bc63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bc640: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc648: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bc648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bc64c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc650: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bc650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc654: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4bc654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4bc658: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bc658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bc65c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc660: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bc660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bc664: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bc664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc668: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC668u;
    {
        const bool branch_taken_0x4bc668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc668) {
            ctx->pc = 0x4BC66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC668u;
            // 0x4bc66c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC684u;
            goto label_4bc684;
        }
    }
    ctx->pc = 0x4BC670u;
    // 0x4bc670: 0x96230164  lhu         $v1, 0x164($s1)
    ctx->pc = 0x4bc670u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x4bc674: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4bc674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4bc678: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BC678u;
    SET_GPR_U32(ctx, 31, 0x4BC680u);
    ctx->pc = 0x4BC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC678u;
    // 0x4bc67c: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BC678u, 0x4BC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC680u;
label_4bc680:
    // 0x4bc680: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4bc680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4bc684:
    // 0x4bc684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bc684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bc688: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4bc688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4bc68c: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4bc68cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4bc690: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC690u;
    {
        const bool branch_taken_0x4bc690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC690u;
        // 0x4bc694: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc690) {
            ctx->pc = 0x4BC6B0u;
            goto label_4bc6b0;
        }
    }
    ctx->pc = 0x4BC698u;
    // 0x4bc698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bc698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc69c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc69cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bc6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc6a8: 0x812f1b6  j           func_4BC6D8
    ctx->pc = 0x4BC6A8u;
    ctx->pc = 0x4BC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC6A8u;
    // 0x4bc6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC6D8u;
    goto label_4bc6d8;
    ctx->pc = 0x4BC6B0u;
label_4bc6b0:
    // 0x4bc6b0: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4bc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4bc6b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc6b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bc6b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bc6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bc6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc6c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc6c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bc6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC6CCu;
        // 0x4bc6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC6D4u;
    // 0x4bc6d4: 0x0  nop
    ctx->pc = 0x4bc6d4u;
    // NOP
label_4bc6d8:
    // 0x4bc6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bc6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bc6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bc6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bc6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bc6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc6e4: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4BC6E4u;
    ctx->pc = 0x4BC6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC6E4u;
    // 0x4bc6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BC6ECu;
    // 0x4bc6ec: 0x0  nop
    ctx->pc = 0x4bc6ecu;
    // NOP
    ctx->pc = 0x4bc6f0u;
}
