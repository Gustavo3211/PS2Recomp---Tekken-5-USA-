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

// Function: sub_0048DC00
// Address: 0x48dc00 - 0x48ddb0
void sub_0048DC00_0x48dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DC00_0x48dc00");
#endif

    switch (ctx->pc) {
        case 0x48dc10u: goto label_48dc10;
        case 0x48dc20u: goto label_48dc20;
        case 0x48dc28u: goto label_48dc28;
        case 0x48dc38u: goto label_48dc38;
        case 0x48dc64u: goto label_48dc64;
        case 0x48dc88u: goto label_48dc88;
        case 0x48dd2cu: goto label_48dd2c;
        case 0x48dd80u: goto label_48dd80;
        default: break;
    }

    ctx->pc = 0x48dc00u;

    // 0x48dc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48dc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dc08: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48DC08u;
    SET_GPR_U32(ctx, 31, 0x48DC10u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48DC08u, 0x48DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC10u;
label_48dc10:
    // 0x48dc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48dc14: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x48dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x48dc18: 0xc124136  jal         func_4904D8
    ctx->pc = 0x48DC18u;
    SET_GPR_U32(ctx, 31, 0x48DC20u);
    ctx->pc = 0x48DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DC18u;
    // 0x48dc1c: 0xa443001e  sh          $v1, 0x1E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48DC18u, 0x48DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC20u;
label_48dc20:
    // 0x48dc20: 0xc124136  jal         func_4904D8
    ctx->pc = 0x48DC20u;
    SET_GPR_U32(ctx, 31, 0x48DC28u);
    ctx->pc = 0x48DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DC20u;
    // 0x48dc24: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48DC20u, 0x48DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC28u;
label_48dc28:
    // 0x48dc28: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x48dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x48dc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dc30: 0x8124136  j           func_4904D8
    ctx->pc = 0x48DC30u;
    ctx->pc = 0x48DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DC30u;
    // 0x48dc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    sub_004904D8_0x4904d8(rdram, ctx, runtime); return;
    ctx->pc = 0x48DC38u;
label_48dc38:
    // 0x48dc38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48dc3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48dc40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48dc44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48dc48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48dc4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48dc50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x48dc54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x48dc58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x48dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x48dc5c: 0xc12a64c  jal         func_4A9930
    ctx->pc = 0x48DC5Cu;
    SET_GPR_U32(ctx, 31, 0x48DC64u);
    ctx->pc = 0x48DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DC5Cu;
    // 0x48dc60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9930u, 0x48DC5Cu, 0x48DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC64u;
label_48dc64:
    // 0x48dc64: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x48dc64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48dc68: 0x86340000  lh          $s4, 0x0($s1)
    ctx->pc = 0x48dc68u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48dc6c: 0x1a800042  blez        $s4, . + 4 + (0x42 << 2)
    ctx->pc = 0x48DC6Cu;
    {
        const bool branch_taken_0x48dc6c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x48DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DC6Cu;
        // 0x48dc70: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dc6c) {
            ctx->pc = 0x48DD78u;
            goto label_48dd78;
        }
    }
    ctx->pc = 0x48DC74u;
    // 0x48dc74: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48dc78: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x48dc78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x48dc7c: 0x2456be40  addiu       $s6, $v0, -0x41C0
    ctx->pc = 0x48dc7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
    // 0x48dc80: 0x3c150012  lui         $s5, 0x12
    ctx->pc = 0x48dc80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)18 << 16));
    // 0x48dc84: 0x0  nop
    ctx->pc = 0x48dc84u;
    // NOP
label_48dc88:
    // 0x48dc88: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x48dc88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48dc8c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48dc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48dc90: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x48dc90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48dc94: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48dc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48dc98: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x48dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x48dc9c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x48dc9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48dca0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x48dca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x48dca4: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x48dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48dca8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x48dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48dcac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x48dcacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48dcb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48dcb4: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x48dcb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x48dcb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48dcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48dcbc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x48dcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x48dcc0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x48dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48dcc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48dcc8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48dccc: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x48dcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x48dcd0: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x48dcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
    // 0x48dcd4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x48dcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48dcd8: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x48dcd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x48dcdc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x48dcdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x48dce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48dce4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48dce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48dce8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x48dce8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x48dcec: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x48dcecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x48dcf0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x48dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x48dcf4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x48dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x48dcf8: 0xd33024  and         $a2, $a2, $s3
    ctx->pc = 0x48dcf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 19));
    // 0x48dcfc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x48dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x48dd00: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x48dd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x48dd04: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x48dd04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x48dd08: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x48dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x48dd0c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48dd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48dd10: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x48dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x48dd14: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x48dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x48dd18: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x48dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x48dd1c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x48dd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48dd20: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x48dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x48dd24: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x48DD24u;
    SET_GPR_U32(ctx, 31, 0x48DD2Cu);
    ctx->pc = 0x48DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DD24u;
    // 0x48dd28: 0xae150018  sw          $s5, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x48DD24u, 0x48DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD2Cu;
label_48dd2c:
    // 0x48dd2c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x48dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x48dd30: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x48dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x48dd34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48dd38: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x48dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x48dd3c: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x48dd3cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48dd40: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48dd44: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x48dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x48dd48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48dd4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48dd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48dd50: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x48dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x48dd54: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x48dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x48dd58: 0x254202a  slt         $a0, $s2, $s4
    ctx->pc = 0x48dd58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x48dd5c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x48dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x48dd60: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x48dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x48dd64: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x48dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x48dd68: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x48dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x48dd6c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x48dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x48dd70: 0x1480ffc5  bnez        $a0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x48DD70u;
    {
        const bool branch_taken_0x48dd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD70u;
        // 0x48dd74: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd70) {
            ctx->pc = 0x48DC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dc88;
        }
    }
    ctx->pc = 0x48DD78u;
label_48dd78:
    // 0x48dd78: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48DD78u;
    SET_GPR_U32(ctx, 31, 0x48DD80u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48DD78u, 0x48DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD80u;
label_48dd80:
    // 0x48dd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48dd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dd84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48dd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48dd88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48dd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dd8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48dd8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48dd90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48dd90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dd94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48dd94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48dd98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48dd98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48dd9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x48dd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48dda0: 0xa440001e  sh          $zero, 0x1E($v0)
    ctx->pc = 0x48dda0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x48dda4: 0x3e00008  jr          $ra
    ctx->pc = 0x48DDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DDA4u;
        // 0x48dda8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DDACu;
    // 0x48ddac: 0x0  nop
    ctx->pc = 0x48ddacu;
    // NOP
    ctx->pc = 0x48ddb0u;
}
