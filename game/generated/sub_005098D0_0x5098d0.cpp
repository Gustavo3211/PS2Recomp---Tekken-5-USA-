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

// Function: sub_005098D0
// Address: 0x5098d0 - 0x509b78
void sub_005098D0_0x5098d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005098D0_0x5098d0");
#endif

    switch (ctx->pc) {
        case 0x509948u: goto label_509948;
        case 0x509978u: goto label_509978;
        case 0x50998cu: goto label_50998c;
        case 0x5099a8u: goto label_5099a8;
        case 0x5099d8u: goto label_5099d8;
        case 0x509a20u: goto label_509a20;
        case 0x509a3cu: goto label_509a3c;
        default: break;
    }

    ctx->pc = 0x5098d0u;

    // 0x5098d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5098d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x5098d4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x5098d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5098d8: 0x3c1e0090  lui         $fp, 0x90
    ctx->pc = 0x5098d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)144 << 16));
    // 0x5098dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5098dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5098e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5098e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5098e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5098e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5098e8: 0x261100a2  addiu       $s1, $s0, 0xA2
    ctx->pc = 0x5098e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 162));
    // 0x5098ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5098ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5098f0: 0x27c2f080  addiu       $v0, $fp, -0xF80
    ctx->pc = 0x5098f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963328));
    // 0x5098f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5098f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5098f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5098f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5098fc: 0x24540050  addiu       $s4, $v0, 0x50
    ctx->pc = 0x5098fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x509900: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x509900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x509904: 0x24550054  addiu       $s5, $v0, 0x54
    ctx->pc = 0x509904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x509908: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x509908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50990c: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50990cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x509910: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x509910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x509914: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x509914u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x509918: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x509918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x50991c: 0x26d3c5d4  addiu       $s3, $s6, -0x3A2C
    ctx->pc = 0x50991cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952404));
    // 0x509920: 0x26f2c5d8  addiu       $s2, $s7, -0x3A28
    ctx->pc = 0x509920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952408));
    // 0x509924: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x509924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x509928: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x509928u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x50992c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x50992cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5D8u, _value); } while (0);
    // 0x509930: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x509930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC5D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5D4u, _value); } while (0);
    // 0x509934: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x509934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x509938: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x509938u;
    {
        const bool branch_taken_0x509938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509938u;
        // 0x50993c: 0x260300b6  addiu       $v1, $s0, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509938) {
            ctx->pc = 0x509960u;
            goto label_509960;
        }
    }
    ctx->pc = 0x509940u;
    // 0x509940: 0xc142600  jal         func_509800
    ctx->pc = 0x509940u;
    SET_GPR_U32(ctx, 31, 0x509948u);
    ctx->pc = 0x509800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509800u, 0x509940u, 0x509948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509948u;
label_509948:
    // 0x509948: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x509948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50994c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x509950: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x509950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x509954: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x509954u;
    {
        const bool branch_taken_0x509954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509954u;
        // 0x509958: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509954) {
            ctx->pc = 0x5099ECu;
            goto label_5099ec;
        }
    }
    ctx->pc = 0x50995Cu;
    // 0x50995c: 0x0  nop
    ctx->pc = 0x50995cu;
    // NOP
label_509960:
    // 0x509960: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x509960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x509964: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x509964u;
    {
        const bool branch_taken_0x509964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x509968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509964u;
        // 0x509968: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509964) {
            ctx->pc = 0x509980u;
            goto label_509980;
        }
    }
    ctx->pc = 0x50996Cu;
    // 0x50996c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x50996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x509970: 0xc142600  jal         func_509800
    ctx->pc = 0x509970u;
    SET_GPR_U32(ctx, 31, 0x509978u);
    ctx->pc = 0x509974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509970u;
    // 0x509974: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509800u, 0x509970u, 0x509978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509978u;
label_509978:
    // 0x509978: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x509978u;
    {
        const bool branch_taken_0x509978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509978u;
        // 0x50997c: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509978) {
            ctx->pc = 0x5099ACu;
            goto label_5099ac;
        }
    }
    ctx->pc = 0x509980u;
label_509980:
    // 0x509980: 0x960200b8  lhu         $v0, 0xB8($s0)
    ctx->pc = 0x509980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x509984: 0xc1425a6  jal         func_509698
    ctx->pc = 0x509984u;
    SET_GPR_U32(ctx, 31, 0x50998Cu);
    ctx->pc = 0x509988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509984u;
    // 0x509988: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509698u, 0x509984u, 0x50998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50998Cu;
label_50998c:
    // 0x50998c: 0x260200bc  addiu       $v0, $s0, 0xBC
    ctx->pc = 0x50998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x509990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x509990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x509994: 0x4820005  bltzl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x509994u;
    {
        const bool branch_taken_0x509994 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x509994) {
            ctx->pc = 0x509998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509994u;
            // 0x509998: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5099ACu;
            goto label_5099ac;
        }
    }
    ctx->pc = 0x50999Cu;
    // 0x50999c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x50999cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5099a0: 0xc144c5a  jal         func_513168
    ctx->pc = 0x5099A0u;
    SET_GPR_U32(ctx, 31, 0x5099A8u);
    ctx->pc = 0x5099A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5099A0u;
    // 0x5099a4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513168u, 0x5099A0u, 0x5099A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5099A8u;
label_5099a8:
    // 0x5099a8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x5099a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_5099ac:
    // 0x5099ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5099acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x5099b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x5099b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5099b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x5099B4u;
    {
        const bool branch_taken_0x5099b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5099B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5099B4u;
        // 0x5099b8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5099b4) {
            ctx->pc = 0x5099D8u;
            goto label_5099d8;
        }
    }
    ctx->pc = 0x5099BCu;
    // 0x5099bc: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x5099bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x5099c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x5099c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5099c4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5099C4u;
    {
        const bool branch_taken_0x5099c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5099c4) {
            ctx->pc = 0x5099C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5099C4u;
            // 0x5099c8: 0x8ec2c5d4  lw          $v0, -0x3A2C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5099DCu;
            goto label_5099dc;
        }
    }
    ctx->pc = 0x5099CCu;
    // 0x5099cc: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x5099ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5099d0: 0xc144c5a  jal         func_513168
    ctx->pc = 0x5099D0u;
    SET_GPR_U32(ctx, 31, 0x5099D8u);
    ctx->pc = 0x5099D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5099D0u;
    // 0x5099d4: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513168u, 0x5099D0u, 0x5099D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5099D8u;
label_5099d8:
    // 0x5099d8: 0x8ec2c5d4  lw          $v0, -0x3A2C($s6)
    ctx->pc = 0x5099d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952404)));
label_5099dc:
    // 0x5099dc: 0x27c3f080  addiu       $v1, $fp, -0xF80
    ctx->pc = 0x5099dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963328));
    // 0x5099e0: 0x8ee4c5d8  lw          $a0, -0x3A28($s7)
    ctx->pc = 0x5099e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952408)));
    // 0x5099e4: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x5099e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x5099e8: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x5099e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
label_5099ec:
    // 0x5099ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5099ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5099f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5099f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5099f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5099f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5099f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5099f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5099fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5099fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x509a00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x509a00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x509a04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x509a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x509a08: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x509a08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x509a0c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x509a0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x509a10: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x509a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x509a14: 0x3e00008  jr          $ra
    ctx->pc = 0x509A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509A14u;
        // 0x509a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509A1Cu;
    // 0x509a1c: 0x0  nop
    ctx->pc = 0x509a1cu;
    // NOP
label_509a20:
    // 0x509a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x509a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x509a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509a28: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x509a28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x509a2c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x509a2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x509a30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x509a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x509a34: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x509A34u;
    SET_GPR_U32(ctx, 31, 0x509A3Cu);
    ctx->pc = 0x509A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509A34u;
    // 0x509a38: 0x108500  sll         $s0, $s0, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x509A34u, 0x509A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509A3Cu;
label_509a3c:
    // 0x509a3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x509a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509a40: 0x1083c3  sra         $s0, $s0, 15
    ctx->pc = 0x509a40u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 15));
    // 0x509a44: 0x24a600a8  addiu       $a2, $a1, 0xA8
    ctx->pc = 0x509a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x509a48: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x509a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x509a4c: 0x24217b80  addiu       $at, $at, 0x7B80
    ctx->pc = 0x509a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31616));
    // 0x509a50: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x509a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x509a54: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x509a54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x509a58: 0x24a700bc  addiu       $a3, $a1, 0xBC
    ctx->pc = 0x509a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x509a5c: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x509A5Cu;
    {
        const bool branch_taken_0x509a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x509A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509A5Cu;
        // 0x509a60: 0x24a800c0  addiu       $t0, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509a5c) {
            ctx->pc = 0x509B68u;
            goto label_509b68;
        }
    }
    ctx->pc = 0x509A64u;
    // 0x509a64: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x509a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x509a68: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x509a68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x509a6c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509a70: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509a74: 0xa4a3009e  sh          $v1, 0x9E($a1)
    ctx->pc = 0x509a74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 158), (uint16_t)GPR_U32(ctx, 3));
    // 0x509a78: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x509a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509a7c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509a80: 0xa4a200a0  sh          $v0, 0xA0($a1)
    ctx->pc = 0x509a80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x509a84: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509a84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509a88: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509a8c: 0xa4a300b4  sh          $v1, 0xB4($a1)
    ctx->pc = 0x509a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 3));
    // 0x509a90: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x509a90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509a94: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509a98: 0xa4a200a2  sh          $v0, 0xA2($a1)
    ctx->pc = 0x509a98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x509a9c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x509a9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509aa0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509aa4: 0xa4a400a4  sh          $a0, 0xA4($a1)
    ctx->pc = 0x509aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 164), (uint16_t)GPR_U32(ctx, 4));
    // 0x509aa8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509aac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509ab0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x509ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509ab4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x509ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x509ab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509abc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x509abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x509ac0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x509ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x509ac4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x509ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x509ac8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x509ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x509acc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x509accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509ad0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509ad4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x509ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x509ad8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x509ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x509adc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x509adcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x509ae0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509ae0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509ae4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509ae8: 0xa4a300ac  sh          $v1, 0xAC($a1)
    ctx->pc = 0x509ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 172), (uint16_t)GPR_U32(ctx, 3));
    // 0x509aec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x509aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509af0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509af4: 0xa4a200b8  sh          $v0, 0xB8($a1)
    ctx->pc = 0x509af4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 184), (uint16_t)GPR_U32(ctx, 2));
    // 0x509af8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509af8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509afc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509b00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x509b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509b04: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x509b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x509b08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509b0c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x509b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x509b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x509b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x509b14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x509b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x509b18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x509b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x509b1c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x509b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509b20: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x509b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x509b24: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x509b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x509b28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x509b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x509b2c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x509b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x509b30: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x509b30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509b34: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x509b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x509b38: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x509b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x509b3c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x509b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x509b40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x509b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x509b44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x509b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x509b48: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x509b48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x509b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509b50: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x509b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x509b54: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x509b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x509b58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x509b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x509b5c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x509b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x509b60: 0xa4a000b6  sh          $zero, 0xB6($a1)
    ctx->pc = 0x509b60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 182), (uint16_t)GPR_U32(ctx, 0));
    // 0x509b64: 0xaca000b0  sw          $zero, 0xB0($a1)
    ctx->pc = 0x509b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 0));
label_509b68:
    // 0x509b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x509b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509b70: 0x3e00008  jr          $ra
    ctx->pc = 0x509B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509B70u;
        // 0x509b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509B78u;
}
