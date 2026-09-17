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

// Function: sub_0027C570
// Address: 0x27c570 - 0x27e998
void sub_0027C570_0x27c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C570_0x27c570");
#endif

    switch (ctx->pc) {
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c810u: goto label_27c810;
        case 0x27c818u: goto label_27c818;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9f8u: goto label_27c9f8;
        case 0x27caecu: goto label_27caec;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cef4u: goto label_27cef4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27d200u: goto label_27d200;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d230u: goto label_27d230;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d268u: goto label_27d268;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d318u: goto label_27d318;
        case 0x27d6f0u: goto label_27d6f0;
        case 0x27d71cu: goto label_27d71c;
        case 0x27da98u: goto label_27da98;
        case 0x27dac4u: goto label_27dac4;
        case 0x27de60u: goto label_27de60;
        case 0x27de84u: goto label_27de84;
        case 0x27deacu: goto label_27deac;
        case 0x27dee0u: goto label_27dee0;
        case 0x27df00u: goto label_27df00;
        case 0x27df24u: goto label_27df24;
        case 0x27df5cu: goto label_27df5c;
        case 0x27e208u: goto label_27e208;
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e508u: goto label_27e508;
        case 0x27e5d0u: goto label_27e5d0;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6c0u: goto label_27e6c0;
        case 0x27e6d8u: goto label_27e6d8;
        case 0x27e740u: goto label_27e740;
        case 0x27e824u: goto label_27e824;
        case 0x27e90cu: goto label_27e90c;
        default: break;
    }

    ctx->pc = 0x27c570u;

    // 0x27c570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27c574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27c578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c57c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27c580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27c588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27c58c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x27c58cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27c590: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27c594: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27C594u;
    {
        const bool branch_taken_0x27c594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C594u;
        // 0x27c598: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c594) {
            ctx->pc = 0x27C5C0u;
            goto label_27c5c0;
        }
    }
    ctx->pc = 0x27C59Cu;
    // 0x27c59c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x27c59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27c5a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C5A0u;
    {
        const bool branch_taken_0x27c5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5A0u;
        // 0x27c5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5a0) {
            ctx->pc = 0x27C5C4u;
            goto label_27c5c4;
        }
    }
    ctx->pc = 0x27C5A8u;
    // 0x27c5a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27c5ac: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C5ACu;
    {
        const bool branch_taken_0x27c5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c5ac) {
            ctx->pc = 0x27C5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5ACu;
            // 0x27c5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C5C4u;
            goto label_27c5c4;
        }
    }
    ctx->pc = 0x27C5B4u;
    // 0x27c5b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C5B4u;
    {
        const bool branch_taken_0x27c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5B4u;
        // 0x27c5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5b4) {
            ctx->pc = 0x27C5C4u;
            goto label_27c5c4;
        }
    }
    ctx->pc = 0x27C5BCu;
    // 0x27c5bc: 0x0  nop
    ctx->pc = 0x27c5bcu;
    // NOP
label_27c5c0:
    // 0x27c5c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c5c4:
    // 0x27c5c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C5C4u;
    {
        const bool branch_taken_0x27c5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5c4) {
            ctx->pc = 0x27C5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5C4u;
            // 0x27c5c8: 0x8e220310  lw          $v0, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C5E0u;
            goto label_27c5e0;
        }
    }
    ctx->pc = 0x27C5CCu;
    // 0x27c5cc: 0xc09d49e  jal         func_275278
    ctx->pc = 0x27C5CCu;
    SET_GPR_U32(ctx, 31, 0x27C5D4u);
    ctx->pc = 0x27C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5CCu;
    // 0x27c5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275278u, 0x27C5CCu, 0x27C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5D4u;
label_27c5d4:
    // 0x27c5d4: 0x144008e8  bnez        $v0, . + 4 + (0x8E8 << 2)
    ctx->pc = 0x27C5D4u;
    {
        const bool branch_taken_0x27c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5D4u;
        // 0x27c5d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5d4) {
            ctx->pc = 0x27E978u;
            goto label_27e978;
        }
    }
    ctx->pc = 0x27C5DCu;
    // 0x27c5dc: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_27c5e0:
    // 0x27c5e0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x27C5E0u;
    {
        const bool branch_taken_0x27c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E0u;
        // 0x27c5e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e0) {
            ctx->pc = 0x27C658u;
            goto label_27c658;
        }
    }
    ctx->pc = 0x27C5E8u;
    // 0x27c5e8: 0x86220146  lh          $v0, 0x146($s1)
    ctx->pc = 0x27c5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 326)));
    // 0x27c5ec: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27C5ECu;
    {
        const bool branch_taken_0x27c5ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27c5ec) {
            ctx->pc = 0x27C628u;
            goto label_27c628;
        }
    }
    ctx->pc = 0x27C5F4u;
    // 0x27c5f4: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27c5f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27c5f8: 0x862202fe  lh          $v0, 0x2FE($s1)
    ctx->pc = 0x27c5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x27c5fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27c5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c600: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27C600u;
    {
        const bool branch_taken_0x27c600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C600u;
        // 0x27c604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c600) {
            ctx->pc = 0x27C64Cu;
            goto label_27c64c;
        }
    }
    ctx->pc = 0x27C608u;
    // 0x27c608: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x27c608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27c60c: 0x94e20024  lhu         $v0, 0x24($a3)
    ctx->pc = 0x27c60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x27c610: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27c610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c614: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27C614u;
    {
        const bool branch_taken_0x27c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c614) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C61Cu;
    // 0x27c61c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27C61Cu;
    {
        const bool branch_taken_0x27c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C61Cu;
        // 0x27c620: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c61c) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C624u;
    // 0x27c624: 0x0  nop
    ctx->pc = 0x27c624u;
    // NOP
label_27c628:
    // 0x27c628: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27C628u;
    {
        const bool branch_taken_0x27c628 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27c628) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C630u;
    // 0x27c630: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27c630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27c634: 0x862202fe  lh          $v0, 0x2FE($s1)
    ctx->pc = 0x27c634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x27c638: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27c638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27c63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C63Cu;
    {
        const bool branch_taken_0x27c63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C63Cu;
        // 0x27c640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c63c) {
            ctx->pc = 0x27C64Cu;
            goto label_27c64c;
        }
    }
    ctx->pc = 0x27C644u;
    // 0x27c644: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C64Cu;
label_27c64c:
    // 0x27c64c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C64Cu;
    {
        const bool branch_taken_0x27c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C64Cu;
        // 0x27c650: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c64c) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C654u;
    // 0x27c654: 0x0  nop
    ctx->pc = 0x27c654u;
    // NOP
label_27c658:
    // 0x27c658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27c658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c65c:
    // 0x27c65c: 0x54800068  bnel        $a0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x27C65Cu;
    {
        const bool branch_taken_0x27c65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c65c) {
            ctx->pc = 0x27C660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C65Cu;
            // 0x27c660: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C800u;
            goto label_27c800;
        }
    }
    ctx->pc = 0x27C664u;
    // 0x27c664: 0x8e2900d0  lw          $t1, 0xD0($s1)
    ctx->pc = 0x27c664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x27c668: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x27c66c: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x27c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x27c670: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x27c670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c674: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x27c678: 0x962600a4  lhu         $a2, 0xA4($s1)
    ctx->pc = 0x27c678u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x27c67c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x27c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x27c680: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x27c680u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27c684: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27c688: 0x24470fff  addiu       $a3, $v0, 0xFFF
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x27c68c: 0x24680fff  addiu       $t0, $v1, 0xFFF
    ctx->pc = 0x27c68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x27c690: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x27c690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x27c694: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x27c694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x27c698: 0x105180b  movn        $v1, $t0, $a1
    ctx->pc = 0x27c698u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x27c69c: 0xe4100b  movn        $v0, $a3, $a0
    ctx->pc = 0x27c69cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x27c6a0: 0x9624009e  lhu         $a0, 0x9E($s1)
    ctx->pc = 0x27c6a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
    // 0x27c6a4: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x27c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x27c6a8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x27c6a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x27c6ac: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x27c6acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x27c6b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27c6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27c6b4: 0xa62400a0  sh          $a0, 0xA0($s1)
    ctx->pc = 0x27c6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x27c6b8: 0xa622009c  sh          $v0, 0x9C($s1)
    ctx->pc = 0x27c6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c6bc: 0xa623009e  sh          $v1, 0x9E($s1)
    ctx->pc = 0x27c6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c6c0: 0xa62600a4  sh          $a2, 0xA4($s1)
    ctx->pc = 0x27c6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 6));
    // 0x27c6c4: 0xa22001f7  sb          $zero, 0x1F7($s1)
    ctx->pc = 0x27c6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 503), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c6c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C6C8u;
    {
        const bool branch_taken_0x27c6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6C8u;
        // 0x27c6cc: 0xa22001f8  sb          $zero, 0x1F8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6c8) {
            ctx->pc = 0x27C6DCu;
            goto label_27c6dc;
        }
    }
    ctx->pc = 0x27C6D0u;
    // 0x27c6d0: 0x962200a6  lhu         $v0, 0xA6($s1)
    ctx->pc = 0x27c6d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x27c6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c6d8: 0xa62200a6  sh          $v0, 0xA6($s1)
    ctx->pc = 0x27c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 166), (uint16_t)GPR_U32(ctx, 2));
label_27c6dc:
    // 0x27c6dc: 0x86220144  lh          $v0, 0x144($s1)
    ctx->pc = 0x27c6dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x27c6e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27C6E0u;
    {
        const bool branch_taken_0x27c6e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6E0u;
        // 0x27c6e4: 0x96240144  lhu         $a0, 0x144($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6e0) {
            ctx->pc = 0x27C710u;
            goto label_27c710;
        }
    }
    ctx->pc = 0x27C6E8u;
    // 0x27c6e8: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x27c6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27c6ec: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27c6ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27c6f0: 0x94e3002a  lhu         $v1, 0x2A($a3)
    ctx->pc = 0x27c6f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 42)));
    // 0x27c6f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C6F4u;
    {
        const bool branch_taken_0x27c6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6F4u;
        // 0x27c6f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6f4) {
            ctx->pc = 0x27C718u;
            goto label_27c718;
        }
    }
    ctx->pc = 0x27C6FCu;
    // 0x27c6fc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x27c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x27c700: 0xa626009a  sh          $a2, 0x9A($s1)
    ctx->pc = 0x27c700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 6));
    // 0x27c704: 0x1000089b  b           . + 4 + (0x89B << 2)
    ctx->pc = 0x27C704u;
    {
        const bool branch_taken_0x27c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C704u;
        // 0x27c708: 0xa6220144  sh          $v0, 0x144($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c704) {
            ctx->pc = 0x27E974u;
            goto label_27e974;
        }
    }
    ctx->pc = 0x27C70Cu;
    // 0x27c70c: 0x0  nop
    ctx->pc = 0x27c70cu;
    // NOP
label_27c710:
    // 0x27c710: 0x96260096  lhu         $a2, 0x96($s1)
    ctx->pc = 0x27c710u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27c714: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x27c714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_27c718:
    // 0x27c718: 0x86220146  lh          $v0, 0x146($s1)
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 326)));
    // 0x27c71c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C71Cu;
    {
        const bool branch_taken_0x27c71c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C71Cu;
        // 0x27c720: 0xa626009a  sh          $a2, 0x9A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c71c) {
            ctx->pc = 0x27C738u;
            goto label_27c738;
        }
    }
    ctx->pc = 0x27C724u;
    // 0x27c724: 0x5d40000a  bgtzl       $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x27C724u;
    {
        const bool branch_taken_0x27c724 = (GPR_S32(ctx, 10) > 0);
        if (branch_taken_0x27c724) {
            ctx->pc = 0x27C728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C724u;
            // 0x27c728: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C750u;
            goto label_27c750;
        }
    }
    ctx->pc = 0x27C72Cu;
    // 0x27c72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27C730u;
    {
        const bool branch_taken_0x27c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C730u;
        // 0x27c734: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c730) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C738u;
label_27c738:
    // 0x27c738: 0x55400005  bnel        $t2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C738u;
    {
        const bool branch_taken_0x27c738 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c738) {
            ctx->pc = 0x27C73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C738u;
            // 0x27c73c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C750u;
            goto label_27c750;
        }
    }
    ctx->pc = 0x27C740u;
    // 0x27c740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c744: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27c748:
    // 0x27c748: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x27c748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x27c74c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x27c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_27c750:
    // 0x27c750: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x27c750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x27c754: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c758: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x27c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x27c75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c764: 0x24450fff  addiu       $a1, $v0, 0xFFF
    ctx->pc = 0x27c764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x27c768: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x27c768u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27c76c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27c76cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c770: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x27c770u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x27c774: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x27c774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x27c778: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x27c77c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c780: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x27c780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27c784: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x27c784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c788: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C788u;
    {
        const bool branch_taken_0x27c788 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C788u;
        // 0x27c78c: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c788) {
            ctx->pc = 0x27C798u;
            goto label_27c798;
        }
    }
    ctx->pc = 0x27C790u;
    // 0x27c790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c794: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27c794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
label_27c798:
    // 0x27c798: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27c798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27c79c: 0x94e30024  lhu         $v1, 0x24($a3)
    ctx->pc = 0x27c79cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x27c7a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27c7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c7a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C7A8u;
    {
        const bool branch_taken_0x27c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c7a8) {
            ctx->pc = 0x27C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C7A8u;
            // 0x27c7ac: 0x94e20024  lhu         $v0, 0x24($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C7BCu;
            goto label_27c7bc;
        }
    }
    ctx->pc = 0x27C7B0u;
    // 0x27c7b0: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x27c7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c7b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x27c7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7b8: 0x94e20024  lhu         $v0, 0x24($a3)
    ctx->pc = 0x27c7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
label_27c7bc:
    // 0x27c7bc: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x27c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c7c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c7cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27C7CCu;
    {
        const bool branch_taken_0x27c7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7CCu;
        // 0x27c7d0: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7cc) {
            ctx->pc = 0x27C7DCu;
            goto label_27c7dc;
        }
    }
    ctx->pc = 0x27C7D4u;
    // 0x27c7d4: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x27c7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x27c7d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c7d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c7dc:
    // 0x27c7dc: 0x8623009a  lh          $v1, 0x9A($s1)
    ctx->pc = 0x27c7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 154)));
    // 0x27c7e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27c7e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27c7e4: 0xe62100ac  swc1        $f1, 0xAC($s1)
    ctx->pc = 0x27c7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x27c7e8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x27c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x27c7ec: 0xa62600a2  sh          $a2, 0xA2($s1)
    ctx->pc = 0x27c7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 6));
    // 0x27c7f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27c7f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27c7f4: 0x1000085f  b           . + 4 + (0x85F << 2)
    ctx->pc = 0x27C7F4u;
    {
        const bool branch_taken_0x27c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7F4u;
        // 0x27c7f8: 0xa22301fe  sb          $v1, 0x1FE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 510), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7f4) {
            ctx->pc = 0x27E974u;
            goto label_27e974;
        }
    }
    ctx->pc = 0x27C7FCu;
    // 0x27c7fc: 0x0  nop
    ctx->pc = 0x27c7fcu;
    // NOP
label_27c800:
    // 0x27c800: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x27C800u;
    {
        const bool branch_taken_0x27c800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c800) {
            ctx->pc = 0x27C804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C800u;
            // 0x27c804: 0x92230190  lbu         $v1, 0x190($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C808u;
    // 0x27c808: 0xc081df8  jal         func_2077E0
    ctx->pc = 0x27C808u;
    SET_GPR_U32(ctx, 31, 0x27C810u);
    ctx->pc = 0x27C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C808u;
    // 0x27c80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077E0u, 0x27C808u, 0x27C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C810u;
label_27c810:
    // 0x27c810: 0xc091df4  jal         func_2477D0
    ctx->pc = 0x27C810u;
    SET_GPR_U32(ctx, 31, 0x27C818u);
    ctx->pc = 0x27C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C810u;
    // 0x27c814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477D0u, 0x27C810u, 0x27C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C818u;
label_27c818:
    // 0x27c818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c81c: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x27c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27c820: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x27c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27c824: 0xc0a0b7c  jal         func_282DF0
    ctx->pc = 0x27C824u;
    SET_GPR_U32(ctx, 31, 0x27C82Cu);
    ctx->pc = 0x27C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C824u;
    // 0x27c828: 0x96270306  lhu         $a3, 0x306($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 774)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282DF0u, 0x27C824u, 0x27C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C82Cu;
label_27c82c:
    // 0x27c82c: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x27c82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27c830: 0x92230190  lbu         $v1, 0x190($s1)
    ctx->pc = 0x27c830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
label_27c834:
    // 0x27c834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c838: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C838u;
    {
        const bool branch_taken_0x27c838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c838) {
            ctx->pc = 0x27C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C838u;
            // 0x27c83c: 0x96250096  lhu         $a1, 0x96($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C84Cu;
            goto label_27c84c;
        }
    }
    ctx->pc = 0x27C840u;
    // 0x27c840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c844: 0xa62202fe  sh          $v0, 0x2FE($s1)
    ctx->pc = 0x27c844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c848: 0x96250096  lhu         $a1, 0x96($s1)
    ctx->pc = 0x27c848u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
label_27c84c:
    // 0x27c84c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x27c84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c850: 0x9222030f  lbu         $v0, 0x30F($s1)
    ctx->pc = 0x27c850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 783)));
    // 0x27c854: 0x9223030d  lbu         $v1, 0x30D($s1)
    ctx->pc = 0x27c854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 781)));
    // 0x27c858: 0x86240180  lh          $a0, 0x180($s1)
    ctx->pc = 0x27c858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x27c85c: 0xa62502f4  sh          $a1, 0x2F4($s1)
    ctx->pc = 0x27c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 756), (uint16_t)GPR_U32(ctx, 5));
    // 0x27c860: 0xa62202f6  sh          $v0, 0x2F6($s1)
    ctx->pc = 0x27c860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 758), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c864: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C864u;
    {
        const bool branch_taken_0x27c864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x27C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C864u;
        // 0x27c868: 0xa62302fa  sh          $v1, 0x2FA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 762), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c864) {
            ctx->pc = 0x27C874u;
            goto label_27c874;
        }
    }
    ctx->pc = 0x27C86Cu;
    // 0x27c86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c870: 0xa22201bb  sb          $v0, 0x1BB($s1)
    ctx->pc = 0x27c870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 443), (uint8_t)GPR_U32(ctx, 2));
label_27c874:
    // 0x27c874: 0xa220019a  sb          $zero, 0x19A($s1)
    ctx->pc = 0x27c874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 410), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c878: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x27c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27c87c: 0xa2200186  sb          $zero, 0x186($s1)
    ctx->pc = 0x27c87cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 390), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c880: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27c880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c884: 0xa220019b  sb          $zero, 0x19B($s1)
    ctx->pc = 0x27c884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c888: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x27c888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x27c88c: 0xa6300144  sh          $s0, 0x144($s1)
    ctx->pc = 0x27c88cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c894: 0xc6600750  lwc1        $f0, 0x750($s3)
    ctx->pc = 0x27c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c898: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27c89c: 0xe62100ec  swc1        $f1, 0xEC($s1)
    ctx->pc = 0x27c89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x27c8a0: 0xc6610758  lwc1        $f1, 0x758($s3)
    ctx->pc = 0x27c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c8a4: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x27c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
    // 0x27c8a8: 0xae2400d4  sw          $a0, 0xD4($s1)
    ctx->pc = 0x27c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
    // 0x27c8ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c8acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27c8b0: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x27c8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x27c8b4: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x27c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x27c8b8: 0xa6320146  sh          $s2, 0x146($s1)
    ctx->pc = 0x27c8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 326), (uint16_t)GPR_U32(ctx, 18));
    // 0x27c8bc: 0xa620008e  sh          $zero, 0x8E($s1)
    ctx->pc = 0x27c8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 142), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c8c0: 0xa2200198  sb          $zero, 0x198($s1)
    ctx->pc = 0x27c8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 408), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c8c4: 0xa2200191  sb          $zero, 0x191($s1)
    ctx->pc = 0x27c8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 401), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c8c8: 0xa2200192  sb          $zero, 0x192($s1)
    ctx->pc = 0x27c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 402), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c8cc: 0xa220019e  sb          $zero, 0x19E($s1)
    ctx->pc = 0x27c8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 414), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c8d0: 0xa220019f  sb          $zero, 0x19F($s1)
    ctx->pc = 0x27c8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 415), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c8d4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C8D4u;
    {
        const bool branch_taken_0x27c8d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8D4u;
        // 0x27c8d8: 0xa220019c  sb          $zero, 0x19C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 412), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8d4) {
            ctx->pc = 0x27C8E4u;
            goto label_27c8e4;
        }
    }
    ctx->pc = 0x27C8DCu;
    // 0x27c8dc: 0xc07d17e  jal         func_1F45F8
    ctx->pc = 0x27C8DCu;
    SET_GPR_U32(ctx, 31, 0x27C8E4u);
    ctx->pc = 0x27C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8DCu;
    // 0x27c8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45F8u, 0x27C8DCu, 0x27C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8E4u;
label_27c8e4:
    // 0x27c8e4: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x27c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27c8e8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x27c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x27c8ec: 0xa23201a1  sb          $s2, 0x1A1($s1)
    ctx->pc = 0x27c8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 18));
    // 0x27c8f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27c8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27c8f4: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x27c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
    // 0x27c8f8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27c8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27c8fc: 0xa620015e  sh          $zero, 0x15E($s1)
    ctx->pc = 0x27c8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c900: 0xa22001a6  sb          $zero, 0x1A6($s1)
    ctx->pc = 0x27c900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 422), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c904: 0xa22001a2  sb          $zero, 0x1A2($s1)
    ctx->pc = 0x27c904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 418), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c908: 0xa22001a3  sb          $zero, 0x1A3($s1)
    ctx->pc = 0x27c908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 419), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c90c: 0xa6200166  sh          $zero, 0x166($s1)
    ctx->pc = 0x27c90cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c910: 0xa6200168  sh          $zero, 0x168($s1)
    ctx->pc = 0x27c910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c914: 0xa630015c  sh          $s0, 0x15C($s1)
    ctx->pc = 0x27c914u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c918: 0xa22001a4  sb          $zero, 0x1A4($s1)
    ctx->pc = 0x27c918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 420), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c91c: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x27c91cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c920: 0xa22001a5  sb          $zero, 0x1A5($s1)
    ctx->pc = 0x27c920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c924: 0xa22001a7  sb          $zero, 0x1A7($s1)
    ctx->pc = 0x27c924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 423), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c928: 0xa22001a8  sb          $zero, 0x1A8($s1)
    ctx->pc = 0x27c928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 424), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c92c: 0xa22001a9  sb          $zero, 0x1A9($s1)
    ctx->pc = 0x27c92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 425), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c930: 0xa22001aa  sb          $zero, 0x1AA($s1)
    ctx->pc = 0x27c930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 426), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c934: 0x96240148  lhu         $a0, 0x148($s1)
    ctx->pc = 0x27c934u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27c938: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x27c93c: 0xa2320194  sb          $s2, 0x194($s1)
    ctx->pc = 0x27c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 18));
    // 0x27c940: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c944: 0xa620017c  sh          $zero, 0x17C($s1)
    ctx->pc = 0x27c944u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c948: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x27c94c: 0xa630017e  sh          $s0, 0x17E($s1)
    ctx->pc = 0x27c94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 382), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27c954: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x27c954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x27c958: 0xa22201ab  sb          $v0, 0x1AB($s1)
    ctx->pc = 0x27c958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 427), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c95c: 0xa2320193  sb          $s2, 0x193($s1)
    ctx->pc = 0x27c95cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 403), (uint8_t)GPR_U32(ctx, 18));
    // 0x27c960: 0xa22001ac  sb          $zero, 0x1AC($s1)
    ctx->pc = 0x27c960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 428), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c964: 0xa22001ad  sb          $zero, 0x1AD($s1)
    ctx->pc = 0x27c964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 429), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c968: 0xa22001af  sb          $zero, 0x1AF($s1)
    ctx->pc = 0x27c968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 431), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c96c: 0xa620016a  sh          $zero, 0x16A($s1)
    ctx->pc = 0x27c96cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c970: 0xa620016c  sh          $zero, 0x16C($s1)
    ctx->pc = 0x27c970u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 364), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c974: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x27c974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x27c978: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x27c978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
    // 0x27c97c: 0xa22001ae  sb          $zero, 0x1AE($s1)
    ctx->pc = 0x27c97cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 430), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c980: 0xa6300164  sh          $s0, 0x164($s1)
    ctx->pc = 0x27c980u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c984: 0xa624014a  sh          $a0, 0x14A($s1)
    ctx->pc = 0x27c984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 4));
    // 0x27c988: 0xa630016e  sh          $s0, 0x16E($s1)
    ctx->pc = 0x27c988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 366), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c98c: 0xa22001b0  sb          $zero, 0x1B0($s1)
    ctx->pc = 0x27c98cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c990: 0xa22001b1  sb          $zero, 0x1B1($s1)
    ctx->pc = 0x27c990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c994: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x27c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27c998: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x27c998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c99c: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C99Cu;
    {
        const bool branch_taken_0x27c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x27C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C99Cu;
        // 0x27c9a0: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c99c) {
            ctx->pc = 0x27C9C4u;
            goto label_27c9c4;
        }
    }
    ctx->pc = 0x27C9A4u;
    // 0x27c9a4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_27c9a8:
    // 0x27c9a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x27c9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c9ac: 0x0  nop
    ctx->pc = 0x27c9acu;
    // NOP
    // 0x27c9b0: 0x0  nop
    ctx->pc = 0x27c9b0u;
    // NOP
    // 0x27c9b4: 0x0  nop
    ctx->pc = 0x27c9b4u;
    // NOP
    // 0x27c9b8: 0x0  nop
    ctx->pc = 0x27c9b8u;
    // NOP
    // 0x27c9bc: 0x5444fffa  bnel        $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27C9BCu;
    {
        const bool branch_taken_0x27c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x27c9bc) {
            ctx->pc = 0x27C9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C9BCu;
            // 0x27c9c0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c9a8;
        }
    }
    ctx->pc = 0x27C9C4u;
label_27c9c4:
    // 0x27c9c4: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x27c9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27c9c8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C9C8u;
    {
        const bool branch_taken_0x27c9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c9c8) {
            ctx->pc = 0x27C9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C9C8u;
            // 0x27c9cc: 0x94630010  lhu         $v1, 0x10($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C9D4u;
            goto label_27c9d4;
        }
    }
    ctx->pc = 0x27C9D0u;
    // 0x27c9d0: 0x94c30024  lhu         $v1, 0x24($a2)
    ctx->pc = 0x27c9d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
label_27c9d4:
    // 0x27c9d4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c9d8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27c9dc: 0xa6230170  sh          $v1, 0x170($s1)
    ctx->pc = 0x27c9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c9e0: 0xa6220174  sh          $v0, 0x174($s1)
    ctx->pc = 0x27c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 372), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c9e4: 0xa6300180  sh          $s0, 0x180($s1)
    ctx->pc = 0x27c9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 384), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c9e8: 0xa220018f  sb          $zero, 0x18F($s1)
    ctx->pc = 0x27c9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 399), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c9ec: 0xa6300172  sh          $s0, 0x172($s1)
    ctx->pc = 0x27c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 370), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c9f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27C9F0u;
    SET_GPR_U32(ctx, 31, 0x27C9F8u);
    ctx->pc = 0x27C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9F0u;
    // 0x27c9f4: 0xa22001b3  sb          $zero, 0x1B3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 435), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27C9F0u, 0x27C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9F8u;
label_27c9f8:
    // 0x27c9f8: 0xa6300178  sh          $s0, 0x178($s1)
    ctx->pc = 0x27c9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 16));
    // 0x27c9fc: 0x8625003e  lh          $a1, 0x3E($s1)
    ctx->pc = 0x27c9fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x27ca00: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x27ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x27ca04: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x27ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x27ca08: 0xa6220176  sh          $v0, 0x176($s1)
    ctx->pc = 0x27ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 374), (uint16_t)GPR_U32(ctx, 2));
    // 0x27ca0c: 0xa6230182  sh          $v1, 0x182($s1)
    ctx->pc = 0x27ca0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 386), (uint16_t)GPR_U32(ctx, 3));
    // 0x27ca10: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x27ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x27ca14: 0xa22001b5  sb          $zero, 0x1B5($s1)
    ctx->pc = 0x27ca14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 437), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca18: 0xa22001b6  sb          $zero, 0x1B6($s1)
    ctx->pc = 0x27ca18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 438), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca1c: 0xa22001b7  sb          $zero, 0x1B7($s1)
    ctx->pc = 0x27ca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 439), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ca20: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27CA20u;
    {
        const bool branch_taken_0x27ca20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x27CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA20u;
        // 0x27ca24: 0xa62002a2  sh          $zero, 0x2A2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 674), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca20) {
            ctx->pc = 0x27CA70u;
            goto label_27ca70;
        }
    }
    ctx->pc = 0x27CA28u;
    // 0x27ca28: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x27ca28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x27ca2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27ca2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ca30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x27ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27ca34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ca38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27ca3c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27ca3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27ca40: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x27ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x27ca44: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x27ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x27ca48: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x27ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ca4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ca4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ca50: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CA50u;
    {
        const bool branch_taken_0x27ca50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ca50) {
            ctx->pc = 0x27CA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CA50u;
            // 0x27ca54: 0xe4610050  swc1        $f1, 0x50($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CA64u;
            goto label_27ca64;
        }
    }
    ctx->pc = 0x27CA58u;
    // 0x27ca58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x27ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27ca5c: 0xa462004a  sh          $v0, 0x4A($v1)
    ctx->pc = 0x27ca5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x27ca60: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x27ca60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_27ca64:
    // 0x27ca64: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x27ca64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x27ca68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27CA68u;
    {
        const bool branch_taken_0x27ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA68u;
        // 0x27ca6c: 0xa4600044  sh          $zero, 0x44($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca68) {
            ctx->pc = 0x27CB28u;
            goto label_27cb28;
        }
    }
    ctx->pc = 0x27CA70u;
label_27ca70:
    // 0x27ca70: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x27ca74: 0x54a2002d  bnel        $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27CA74u;
    {
        const bool branch_taken_0x27ca74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ca74) {
            ctx->pc = 0x27CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CA74u;
            // 0x27ca78: 0x86220218  lh          $v0, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB2Cu;
            goto label_27cb2c;
        }
    }
    ctx->pc = 0x27CA7Cu;
    // 0x27ca7c: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x27ca7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x27ca80: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27ca84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27ca88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ca8c: 0x94a40044  lhu         $a0, 0x44($a1)
    ctx->pc = 0x27ca8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x27ca90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27ca94: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27ca94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27ca98: 0x2610a540  addiu       $s0, $s0, -0x5AC0
    ctx->pc = 0x27ca98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944064));
    // 0x27ca9c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x27ca9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x27caa0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27CAA0u;
    {
        const bool branch_taken_0x27caa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAA0u;
        // 0x27caa4: 0x24030072  addiu       $v1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caa0) {
            ctx->pc = 0x27CAECu;
            goto label_27caec;
        }
    }
    ctx->pc = 0x27CAA8u;
    // 0x27caa8: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x27caa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x27caac: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27CAACu;
    {
        const bool branch_taken_0x27caac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27caac) {
            ctx->pc = 0x27CAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CAACu;
            // 0x27cab0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CADCu;
            goto label_27cadc;
        }
    }
    ctx->pc = 0x27CAB4u;
    // 0x27cab4: 0x90a20041  lbu         $v0, 0x41($a1)
    ctx->pc = 0x27cab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
    // 0x27cab8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CAB8u;
    {
        const bool branch_taken_0x27cab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27cab8) {
            ctx->pc = 0x27CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CAB8u;
            // 0x27cabc: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CADCu;
            goto label_27cadc;
        }
    }
    ctx->pc = 0x27CAC0u;
    // 0x27cac0: 0x90a20042  lbu         $v0, 0x42($a1)
    ctx->pc = 0x27cac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x27cac4: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CAC4u;
    {
        const bool branch_taken_0x27cac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27cac4) {
            ctx->pc = 0x27CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CAC4u;
            // 0x27cac8: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CADCu;
            goto label_27cadc;
        }
    }
    ctx->pc = 0x27CACCu;
    // 0x27cacc: 0x90a20043  lbu         $v0, 0x43($a1)
    ctx->pc = 0x27caccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 67)));
    // 0x27cad0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CAD0u;
    {
        const bool branch_taken_0x27cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cad0) {
            ctx->pc = 0x27CAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CAD0u;
            // 0x27cad4: 0x922201ec  lbu         $v0, 0x1EC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CAF0u;
            goto label_27caf0;
        }
    }
    ctx->pc = 0x27CAD8u;
    // 0x27cad8: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x27cad8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_27cadc:
    // 0x27cadc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x27cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27cae0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x27cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27cae4: 0xc080a2a  jal         func_2028A8
    ctx->pc = 0x27CAE4u;
    SET_GPR_U32(ctx, 31, 0x27CAECu);
    ctx->pc = 0x27CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAE4u;
    // 0x27cae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2028A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2028A8u, 0x27CAE4u, 0x27CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAECu;
label_27caec:
    // 0x27caec: 0x922201ec  lbu         $v0, 0x1EC($s1)
    ctx->pc = 0x27caecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
label_27caf0:
    // 0x27caf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27CAF0u;
    {
        const bool branch_taken_0x27caf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAF0u;
        // 0x27caf4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caf0) {
            ctx->pc = 0x27CB20u;
            goto label_27cb20;
        }
    }
    ctx->pc = 0x27CAF8u;
    // 0x27caf8: 0x9625003c  lhu         $a1, 0x3C($s1)
    ctx->pc = 0x27caf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x27cafc: 0x2463a540  addiu       $v1, $v1, -0x5AC0
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
    // 0x27cb00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x27cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27cb04: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x27cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27cb08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x27cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27cb10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27cb14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27cb18: 0xc08437a  jal         func_210DE8
    ctx->pc = 0x27CB18u;
    SET_GPR_U32(ctx, 31, 0x27CB20u);
    ctx->pc = 0x27CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB18u;
    // 0x27cb1c: 0xa446006c  sh          $a2, 0x6C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 108), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210DE8u, 0x27CB18u, 0x27CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB20u;
label_27cb20:
    // 0x27cb20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27cb24: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x27cb24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
label_27cb28:
    // 0x27cb28: 0x86220218  lh          $v0, 0x218($s1)
    ctx->pc = 0x27cb28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
label_27cb2c:
    // 0x27cb2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CB2Cu;
    {
        const bool branch_taken_0x27cb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB2Cu;
        // 0x27cb30: 0x96230218  lhu         $v1, 0x218($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb2c) {
            ctx->pc = 0x27CB40u;
            goto label_27cb40;
        }
    }
    ctx->pc = 0x27CB34u;
    // 0x27cb34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27CB34u;
    {
        const bool branch_taken_0x27cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB34u;
        // 0x27cb38: 0xa623014e  sh          $v1, 0x14E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 334), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb34) {
            ctx->pc = 0x27CB78u;
            goto label_27cb78;
        }
    }
    ctx->pc = 0x27CB3Cu;
    // 0x27cb3c: 0x0  nop
    ctx->pc = 0x27cb3cu;
    // NOP
label_27cb40:
    // 0x27cb40: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x27cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27cb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb48: 0xc09ebae  jal         func_27AEB8
    ctx->pc = 0x27CB48u;
    SET_GPR_U32(ctx, 31, 0x27CB50u);
    ctx->pc = 0x27CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB48u;
    // 0x27cb4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AEB8u, 0x27CB48u, 0x27CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB50u;
label_27cb50:
    // 0x27cb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cb54: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x27cb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27cb58: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x27cb58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27cb5c: 0x3084c000  andi        $a0, $a0, 0xC000
    ctx->pc = 0x27cb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x27cb60: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x27cb64: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x27cb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x27cb68: 0xa625014e  sh          $a1, 0x14E($s1)
    ctx->pc = 0x27cb68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 334), (uint16_t)GPR_U32(ctx, 5));
    // 0x27cb6c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CB6Cu;
    {
        const bool branch_taken_0x27cb6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB6Cu;
        // 0x27cb70: 0xa2240199  sb          $a0, 0x199($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb6c) {
            ctx->pc = 0x27CB78u;
            goto label_27cb78;
        }
    }
    ctx->pc = 0x27CB74u;
    // 0x27cb74: 0xa620014e  sh          $zero, 0x14E($s1)
    ctx->pc = 0x27cb74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 334), (uint16_t)GPR_U32(ctx, 0));
label_27cb78:
    // 0x27cb78: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27cb7c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x27cb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb80: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x27cb80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x27cb84: 0xae2700cc  sw          $a3, 0xCC($s1)
    ctx->pc = 0x27cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 7));
    // 0x27cb88: 0x71ac2  srl         $v1, $a3, 11
    ctx->pc = 0x27cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x27cb8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x27cb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x27cb90: 0x30e60100  andi        $a2, $a3, 0x100
    ctx->pc = 0x27cb90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x27cb94: 0x95050010  lhu         $a1, 0x10($t0)
    ctx->pc = 0x27cb94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x27cb98: 0x962200cc  lhu         $v0, 0xCC($s1)
    ctx->pc = 0x27cb98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x27cb9c: 0x52202  srl         $a0, $a1, 8
    ctx->pc = 0x27cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x27cba0: 0xa2230185  sb          $v1, 0x185($s1)
    ctx->pc = 0x27cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 389), (uint8_t)GPR_U32(ctx, 3));
    // 0x27cba4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x27cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x27cba8: 0xa2240184  sb          $a0, 0x184($s1)
    ctx->pc = 0x27cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 388), (uint8_t)GPR_U32(ctx, 4));
    // 0x27cbac: 0xa6220152  sh          $v0, 0x152($s1)
    ctx->pc = 0x27cbacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 338), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cbb0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CBB0u;
    {
        const bool branch_taken_0x27cbb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBB0u;
        // 0x27cbb4: 0xa6250150  sh          $a1, 0x150($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 336), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbb0) {
            ctx->pc = 0x27CBD4u;
            goto label_27cbd4;
        }
    }
    ctx->pc = 0x27CBB8u;
    // 0x27cbb8: 0x922201c0  lbu         $v0, 0x1C0($s1)
    ctx->pc = 0x27cbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27cbbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CBBCu;
    {
        const bool branch_taken_0x27cbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cbbc) {
            ctx->pc = 0x27CBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CBBCu;
            // 0x27cbc0: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CBD8u;
            goto label_27cbd8;
        }
    }
    ctx->pc = 0x27CBC4u;
    // 0x27cbc4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x27cbc8: 0xa6200152  sh          $zero, 0x152($s1)
    ctx->pc = 0x27cbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x27cbcc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x27cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x27cbd0: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x27cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_27cbd4:
    // 0x27cbd4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_27cbd8:
    // 0x27cbd8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CBD8u;
    {
        const bool branch_taken_0x27cbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBD8u;
        // 0x27cbdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbd8) {
            ctx->pc = 0x27CBFCu;
            goto label_27cbfc;
        }
    }
    ctx->pc = 0x27CBE0u;
    // 0x27cbe0: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x27cbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27cbe4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CBE4u;
    {
        const bool branch_taken_0x27cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBE4u;
        // 0x27cbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbe4) {
            ctx->pc = 0x27CBFCu;
            goto label_27cbfc;
        }
    }
    ctx->pc = 0x27CBECu;
    // 0x27cbec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27cbf0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CBF0u;
    {
        const bool branch_taken_0x27cbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27cbf0) {
            ctx->pc = 0x27CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CBF0u;
            // 0x27cbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CBFCu;
            goto label_27cbfc;
        }
    }
    ctx->pc = 0x27CBF8u;
    // 0x27cbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cbfc:
    // 0x27cbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CBFCu;
    {
        const bool branch_taken_0x27cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBFCu;
        // 0x27cc00: 0x2403ff1f  addiu       $v1, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbfc) {
            ctx->pc = 0x27CC10u;
            goto label_27cc10;
        }
    }
    ctx->pc = 0x27CC04u;
    // 0x27cc04: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x27cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x27cc08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27cc0c: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x27cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_27cc10:
    // 0x27cc10: 0x922201ee  lbu         $v0, 0x1EE($s1)
    ctx->pc = 0x27cc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 494)));
    // 0x27cc14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CC14u;
    {
        const bool branch_taken_0x27cc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC14u;
        // 0x27cc18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc14) {
            ctx->pc = 0x27CC28u;
            goto label_27cc28;
        }
    }
    ctx->pc = 0x27CC1Cu;
    // 0x27cc1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27CC1Cu;
    {
        const bool branch_taken_0x27cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC1Cu;
        // 0x27cc20: 0xa2220189  sb          $v0, 0x189($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 393), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc1c) {
            ctx->pc = 0x27CC2Cu;
            goto label_27cc2c;
        }
    }
    ctx->pc = 0x27CC24u;
    // 0x27cc24: 0x0  nop
    ctx->pc = 0x27cc24u;
    // NOP
label_27cc28:
    // 0x27cc28: 0xa2200189  sb          $zero, 0x189($s1)
    ctx->pc = 0x27cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 393), (uint8_t)GPR_U32(ctx, 0));
label_27cc2c:
    // 0x27cc2c: 0x922201ec  lbu         $v0, 0x1EC($s1)
    ctx->pc = 0x27cc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x27cc30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CC30u;
    {
        const bool branch_taken_0x27cc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc30) {
            ctx->pc = 0x27CC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC30u;
            // 0x27cc34: 0x96220300  lhu         $v0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CC50u;
            goto label_27cc50;
        }
    }
    ctx->pc = 0x27CC38u;
    // 0x27cc38: 0xa2200187  sb          $zero, 0x187($s1)
    ctx->pc = 0x27cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 391), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cc3c: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x27cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x27cc40: 0xa6200156  sh          $zero, 0x156($s1)
    ctx->pc = 0x27cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 342), (uint16_t)GPR_U32(ctx, 0));
    // 0x27cc44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27CC44u;
    {
        const bool branch_taken_0x27cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC44u;
        // 0x27cc48: 0xa6200162  sh          $zero, 0x162($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc44) {
            ctx->pc = 0x27CC6Cu;
            goto label_27cc6c;
        }
    }
    ctx->pc = 0x27CC4Cu;
    // 0x27cc4c: 0x0  nop
    ctx->pc = 0x27cc4cu;
    // NOP
label_27cc50:
    // 0x27cc50: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x27cc54: 0x30443c00  andi        $a0, $v0, 0x3C00
    ctx->pc = 0x27cc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27cc58: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CC58u;
    {
        const bool branch_taken_0x27cc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC58u;
        // 0x27cc5c: 0x24021c00  addiu       $v0, $zero, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc58) {
            ctx->pc = 0x27CC68u;
            goto label_27cc68;
        }
    }
    ctx->pc = 0x27CC60u;
    // 0x27cc60: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CC60u;
    {
        const bool branch_taken_0x27cc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27cc60) {
            ctx->pc = 0x27CC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC60u;
            // 0x27cc64: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CC70u;
            goto label_27cc70;
        }
    }
    ctx->pc = 0x27CC68u;
label_27cc68:
    // 0x27cc68: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x27cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_27cc6c:
    // 0x27cc6c: 0x922201f0  lbu         $v0, 0x1F0($s1)
    ctx->pc = 0x27cc6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
label_27cc70:
    // 0x27cc70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CC70u;
    {
        const bool branch_taken_0x27cc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc70) {
            ctx->pc = 0x27CC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC70u;
            // 0x27cc74: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CC78u;
            goto label_27cc78;
        }
    }
    ctx->pc = 0x27CC78u;
label_27cc78:
    // 0x27cc78: 0x922401ef  lbu         $a0, 0x1EF($s1)
    ctx->pc = 0x27cc78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
    // 0x27cc7c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27CC7Cu;
    {
        const bool branch_taken_0x27cc7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC7Cu;
        // 0x27cc80: 0xa220018a  sb          $zero, 0x18A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 394), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc7c) {
            ctx->pc = 0x27CCD0u;
            goto label_27ccd0;
        }
    }
    ctx->pc = 0x27CC84u;
    // 0x27cc84: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x27cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27cc88: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x27cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x27cc8c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27cc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27cc90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CC90u;
    {
        const bool branch_taken_0x27cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc90) {
            ctx->pc = 0x27CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CC90u;
            // 0x27cc94: 0x86220148  lh          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCACu;
            goto label_27ccac;
        }
    }
    ctx->pc = 0x27CC98u;
    // 0x27cc98: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x27cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27cc9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27cca0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27CCA0u;
    {
        const bool branch_taken_0x27cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cca0) {
            ctx->pc = 0x27CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCA0u;
            // 0x27cca4: 0x9622014c  lhu         $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD08u;
            goto label_27cd08;
        }
    }
    ctx->pc = 0x27CCA8u;
    // 0x27cca8: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27cca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
label_27ccac:
    // 0x27ccac: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CCACu;
    {
        const bool branch_taken_0x27ccac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCACu;
        // 0x27ccb0: 0x96230148  lhu         $v1, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccac) {
            ctx->pc = 0x27CCD8u;
            goto label_27ccd8;
        }
    }
    ctx->pc = 0x27CCB4u;
    // 0x27ccb4: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x27ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27ccb8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27ccbc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CCBCu;
    {
        const bool branch_taken_0x27ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccbc) {
            ctx->pc = 0x27CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCBCu;
            // 0x27ccc0: 0x9222018b  lbu         $v0, 0x18B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 395)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCDCu;
            goto label_27ccdc;
        }
    }
    ctx->pc = 0x27CCC4u;
    // 0x27ccc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27CCC4u;
    {
        const bool branch_taken_0x27ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCC4u;
        // 0x27ccc8: 0x9622014c  lhu         $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccc4) {
            ctx->pc = 0x27CD08u;
            goto label_27cd08;
        }
    }
    ctx->pc = 0x27CCCCu;
    // 0x27cccc: 0x0  nop
    ctx->pc = 0x27ccccu;
    // NOP
label_27ccd0:
    // 0x27ccd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27CCD0u;
    {
        const bool branch_taken_0x27ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCD0u;
        // 0x27ccd4: 0x8e2700c4  lw          $a3, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccd0) {
            ctx->pc = 0x27CD04u;
            goto label_27cd04;
        }
    }
    ctx->pc = 0x27CCD8u;
label_27ccd8:
    // 0x27ccd8: 0x9222018b  lbu         $v0, 0x18B($s1)
    ctx->pc = 0x27ccd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 395)));
label_27ccdc:
    // 0x27ccdc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CCDCu;
    {
        const bool branch_taken_0x27ccdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ccdc) {
            ctx->pc = 0x27CCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCDCu;
            // 0x27cce0: 0x96220300  lhu         $v0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CCF4u;
            goto label_27ccf4;
        }
    }
    ctx->pc = 0x27CCE4u;
    // 0x27cce4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x27cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27cce8: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CCE8u;
    {
        const bool branch_taken_0x27cce8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27cce8) {
            ctx->pc = 0x27CCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCE8u;
            // 0x27ccec: 0xa620014c  sh          $zero, 0x14C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 332), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD10u;
            goto label_27cd10;
        }
    }
    ctx->pc = 0x27CCF0u;
    // 0x27ccf0: 0x96220300  lhu         $v0, 0x300($s1)
    ctx->pc = 0x27ccf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27ccf4:
    // 0x27ccf4: 0x24031c00  addiu       $v1, $zero, 0x1C00
    ctx->pc = 0x27ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x27ccf8: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x27ccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27ccfc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CCFCu;
    {
        const bool branch_taken_0x27ccfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ccfc) {
            ctx->pc = 0x27CD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCFCu;
            // 0x27cd00: 0xa620014c  sh          $zero, 0x14C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 332), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD10u;
            goto label_27cd10;
        }
    }
    ctx->pc = 0x27CD04u;
label_27cd04:
    // 0x27cd04: 0x9622014c  lhu         $v0, 0x14C($s1)
    ctx->pc = 0x27cd04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
label_27cd08:
    // 0x27cd08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cd0c: 0xa622014c  sh          $v0, 0x14C($s1)
    ctx->pc = 0x27cd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 332), (uint16_t)GPR_U32(ctx, 2));
label_27cd10:
    // 0x27cd10: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x27cd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27cd14: 0xa224018b  sb          $a0, 0x18B($s1)
    ctx->pc = 0x27cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 395), (uint8_t)GPR_U32(ctx, 4));
    // 0x27cd18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CD18u;
    {
        const bool branch_taken_0x27cd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD18u;
        // 0x27cd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd18) {
            ctx->pc = 0x27CD2Cu;
            goto label_27cd2c;
        }
    }
    ctx->pc = 0x27CD20u;
    // 0x27cd20: 0x9222020d  lbu         $v0, 0x20D($s1)
    ctx->pc = 0x27cd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 525)));
    // 0x27cd24: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CD24u;
    {
        const bool branch_taken_0x27cd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd24) {
            ctx->pc = 0x27CD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CD24u;
            // 0x27cd28: 0xa223018c  sb          $v1, 0x18C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 396), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CD2Cu;
label_27cd2c:
    // 0x27cd2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cd30: 0xa223018c  sb          $v1, 0x18C($s1)
    ctx->pc = 0x27cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 396), (uint8_t)GPR_U32(ctx, 3));
label_27cd34:
    // 0x27cd34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x27cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x27cd38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27cd3c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x27cd40: 0x8d03003c  lw          $v1, 0x3C($t0)
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27cd44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27cd48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x27cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x27cd4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CD4Cu;
    {
        const bool branch_taken_0x27cd4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd4c) {
            ctx->pc = 0x27CD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CD4Cu;
            // 0x27cd50: 0xa220018d  sb          $zero, 0x18D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 397), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD54u;
            goto label_27cd54;
        }
    }
    ctx->pc = 0x27CD54u;
label_27cd54:
    // 0x27cd54: 0x92230190  lbu         $v1, 0x190($s1)
    ctx->pc = 0x27cd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x27cd58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cd5c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CD5Cu;
    {
        const bool branch_taken_0x27cd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD5Cu;
        // 0x27cd60: 0xa220018e  sb          $zero, 0x18E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 398), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd5c) {
            ctx->pc = 0x27CD80u;
            goto label_27cd80;
        }
    }
    ctx->pc = 0x27CD64u;
    // 0x27cd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cd68: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CD68u;
    {
        const bool branch_taken_0x27cd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD68u;
        // 0x27cd6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd68) {
            ctx->pc = 0x27CD84u;
            goto label_27cd84;
        }
    }
    ctx->pc = 0x27CD70u;
    // 0x27cd70: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x27cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x27cd74: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x27cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27cd78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CD78u;
    {
        const bool branch_taken_0x27cd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD78u;
        // 0x27cd7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd78) {
            ctx->pc = 0x27CD8Cu;
            goto label_27cd8c;
        }
    }
    ctx->pc = 0x27CD80u;
label_27cd80:
    // 0x27cd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd84:
    // 0x27cd84: 0xa22201f7  sb          $v0, 0x1F7($s1)
    ctx->pc = 0x27cd84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 503), (uint8_t)GPR_U32(ctx, 2));
    // 0x27cd88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd8c:
    // 0x27cd8c: 0x9224030d  lbu         $a0, 0x30D($s1)
    ctx->pc = 0x27cd8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 781)));
    // 0x27cd90: 0xa22301f8  sb          $v1, 0x1F8($s1)
    ctx->pc = 0x27cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 3));
    // 0x27cd94: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27cd98: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x27cd9c: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x27cd9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x27cda0: 0x31f03  sra         $v1, $v1, 28
    ctx->pc = 0x27cda0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 28));
    // 0x27cda4: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x27cda4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27cda8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27CDA8u;
    {
        const bool branch_taken_0x27cda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDA8u;
        // 0x27cdac: 0x30720001  andi        $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cda8) {
            ctx->pc = 0x27CE10u;
            goto label_27ce10;
        }
    }
    ctx->pc = 0x27CDB0u;
    // 0x27cdb0: 0xc7818cac  lwc1        $f1, -0x7354($gp)
    ctx->pc = 0x27cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cdb4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x27cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdb8: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27cdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27cdbc: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x27cdbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27cdc0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x27cdc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x27cdc4: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x27cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x27cdc8: 0xa220030d  sb          $zero, 0x30D($s1)
    ctx->pc = 0x27cdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cdcc: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x27cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x27cdd0: 0xa623007a  sh          $v1, 0x7A($s1)
    ctx->pc = 0x27cdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x27cdd4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27cdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cdd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CDD8u;
    {
        const bool branch_taken_0x27cdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDD8u;
        // 0x27cddc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdd8) {
            ctx->pc = 0x27CDF0u;
            goto label_27cdf0;
        }
    }
    ctx->pc = 0x27CDE0u;
    // 0x27cde0: 0xc7808cb0  lwc1        $f0, -0x7350($gp)
    ctx->pc = 0x27cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cde4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CDE4u;
    {
        const bool branch_taken_0x27cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDE4u;
        // 0x27cde8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cde4) {
            ctx->pc = 0x27CE08u;
            goto label_27ce08;
        }
    }
    ctx->pc = 0x27CDECu;
    // 0x27cdec: 0x0  nop
    ctx->pc = 0x27cdecu;
    // NOP
label_27cdf0:
    // 0x27cdf0: 0xc7808cb4  lwc1        $f0, -0x734C($gp)
    ctx->pc = 0x27cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdf4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27cdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cdf8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CDF8u;
    {
        const bool branch_taken_0x27cdf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cdf8) {
            ctx->pc = 0x27CDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDF8u;
            // 0x27cdfc: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE0Cu;
            goto label_27ce0c;
        }
    }
    ctx->pc = 0x27CE00u;
    // 0x27ce00: 0xc7808cb8  lwc1        $f0, -0x7348($gp)
    ctx->pc = 0x27ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27ce04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27ce08:
    // 0x27ce08: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x27ce08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_27ce0c:
    // 0x27ce0c: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x27ce0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_27ce10:
    // 0x27ce10: 0x922201b9  lbu         $v0, 0x1B9($s1)
    ctx->pc = 0x27ce10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 441)));
    // 0x27ce14: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27CE14u;
    {
        const bool branch_taken_0x27ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE14u;
        // 0x27ce18: 0x24031c00  addiu       $v1, $zero, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce14) {
            ctx->pc = 0x27CEE8u;
            goto label_27cee8;
        }
    }
    ctx->pc = 0x27CE1Cu;
    // 0x27ce1c: 0x96220300  lhu         $v0, 0x300($s1)
    ctx->pc = 0x27ce1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x27ce20: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x27ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27ce24: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x27CE24u;
    {
        const bool branch_taken_0x27ce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE24u;
        // 0x27ce28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce24) {
            ctx->pc = 0x27CEECu;
            goto label_27ceec;
        }
    }
    ctx->pc = 0x27CE2Cu;
    // 0x27ce2c: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x27ce2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x27ce30: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27ce30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27ce34: 0xc7818cbc  lwc1        $f1, -0x7344($gp)
    ctx->pc = 0x27ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ce38: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ce3c: 0xc7828cc0  lwc1        $f2, -0x7340($gp)
    ctx->pc = 0x27ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ce40: 0xa623007a  sh          $v1, 0x7A($s1)
    ctx->pc = 0x27ce40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x27ce44: 0x84e2001a  lh          $v0, 0x1A($a3)
    ctx->pc = 0x27ce44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x27ce48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ce48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ce4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ce4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ce50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27ce50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27ce54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ce54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ce58: 0x0  nop
    ctx->pc = 0x27ce58u;
    // NOP
    // 0x27ce5c: 0x0  nop
    ctx->pc = 0x27ce5cu;
    // NOP
    // 0x27ce60: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x27ce60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x27ce64: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27ce64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CE68u;
    {
        const bool branch_taken_0x27ce68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ce68) {
            ctx->pc = 0x27CE80u;
            goto label_27ce80;
        }
    }
    ctx->pc = 0x27CE70u;
    // 0x27ce70: 0xc7808cc4  lwc1        $f0, -0x733C($gp)
    ctx->pc = 0x27ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CE74u;
    {
        const bool branch_taken_0x27ce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE74u;
        // 0x27ce78: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce74) {
            ctx->pc = 0x27CE98u;
            goto label_27ce98;
        }
    }
    ctx->pc = 0x27CE7Cu;
    // 0x27ce7c: 0x0  nop
    ctx->pc = 0x27ce7cu;
    // NOP
label_27ce80:
    // 0x27ce80: 0xc7808cc8  lwc1        $f0, -0x7338($gp)
    ctx->pc = 0x27ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce84: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27ce84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CE88u;
    {
        const bool branch_taken_0x27ce88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ce88) {
            ctx->pc = 0x27CE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CE88u;
            // 0x27ce8c: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE9Cu;
            goto label_27ce9c;
        }
    }
    ctx->pc = 0x27CE90u;
    // 0x27ce90: 0xc7808ccc  lwc1        $f0, -0x7334($gp)
    ctx->pc = 0x27ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27ce94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27ce98:
    // 0x27ce98: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x27ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ce9c:
    // 0x27ce9c: 0xc7818cd0  lwc1        $f1, -0x7330($gp)
    ctx->pc = 0x27ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cea0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x27cea0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27cea4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27cea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cea8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CEA8u;
    {
        const bool branch_taken_0x27cea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cea8) {
            ctx->pc = 0x27CEC0u;
            goto label_27cec0;
        }
    }
    ctx->pc = 0x27CEB0u;
    // 0x27ceb0: 0xc7808cd4  lwc1        $f0, -0x732C($gp)
    ctx->pc = 0x27ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ceb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CEB4u;
    {
        const bool branch_taken_0x27ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEB4u;
        // 0x27ceb8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceb4) {
            ctx->pc = 0x27CED8u;
            goto label_27ced8;
        }
    }
    ctx->pc = 0x27CEBCu;
    // 0x27cebc: 0x0  nop
    ctx->pc = 0x27cebcu;
    // NOP
label_27cec0:
    // 0x27cec0: 0xc7808cd8  lwc1        $f0, -0x7328($gp)
    ctx->pc = 0x27cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cec4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27cec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cec8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CEC8u;
    {
        const bool branch_taken_0x27cec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cec8) {
            ctx->pc = 0x27CECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CEC8u;
            // 0x27cecc: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CEDCu;
            goto label_27cedc;
        }
    }
    ctx->pc = 0x27CED0u;
    // 0x27ced0: 0xc7808cdc  lwc1        $f0, -0x7324($gp)
    ctx->pc = 0x27ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ced4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27ced4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27ced8:
    // 0x27ced8: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27ced8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_27cedc:
    // 0x27cedc: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x27cedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x27cee0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x27cee0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cee4: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x27cee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_27cee8:
    // 0x27cee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ceec:
    // 0x27ceec: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x27CEECu;
    SET_GPR_U32(ctx, 31, 0x27CEF4u);
    ctx->pc = 0x27CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEECu;
    // 0x27cef0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x27CEECu, 0x27CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEF4u;
label_27cef4:
    // 0x27cef4: 0x96220306  lhu         $v0, 0x306($s1)
    ctx->pc = 0x27cef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 774)));
    // 0x27cef8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CEF8u;
    {
        const bool branch_taken_0x27cef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cef8) {
            ctx->pc = 0x27CEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CEF8u;
            // 0x27cefc: 0x96220300  lhu         $v0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CF0Cu;
            goto label_27cf0c;
        }
    }
    ctx->pc = 0x27CF00u;
    // 0x27cf00: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x27cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x27cf04: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x27cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    // 0x27cf08: 0x96220300  lhu         $v0, 0x300($s1)
    ctx->pc = 0x27cf08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27cf0c:
    // 0x27cf0c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27cf10: 0x30443c00  andi        $a0, $v0, 0x3C00
    ctx->pc = 0x27cf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27cf14: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x27CF14u;
    {
        const bool branch_taken_0x27cf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF14u;
        // 0x27cf18: 0x28821001  slti        $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf14) {
            ctx->pc = 0x27D0E0u;
            goto label_27d0e0;
        }
    }
    ctx->pc = 0x27CF1Cu;
    // 0x27cf1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27CF1Cu;
    {
        const bool branch_taken_0x27cf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF1Cu;
        // 0x27cf20: 0x24021800  addiu       $v0, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf1c) {
            ctx->pc = 0x27CF60u;
            goto label_27cf60;
        }
    }
    ctx->pc = 0x27CF24u;
    // 0x27cf24: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x27cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27cf28: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27CF28u;
    {
        const bool branch_taken_0x27cf28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF28u;
        // 0x27cf2c: 0x28820401  slti        $v0, $a0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf28) {
            ctx->pc = 0x27CFB0u;
            goto label_27cfb0;
        }
    }
    ctx->pc = 0x27CF30u;
    // 0x27cf30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CF30u;
    {
        const bool branch_taken_0x27cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf30) {
            ctx->pc = 0x27CF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF30u;
            // 0x27cf34: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CF48u;
            goto label_27cf48;
        }
    }
    ctx->pc = 0x27CF38u;
    // 0x27cf38: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27CF38u;
    {
        const bool branch_taken_0x27cf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf38) {
            ctx->pc = 0x27CF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF38u;
            // 0x27cf3c: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CFA0u;
            goto label_27cfa0;
        }
    }
    ctx->pc = 0x27CF40u;
    // 0x27cf40: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x27CF40u;
    {
        const bool branch_taken_0x27cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf40) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27CF48u;
label_27cf48:
    // 0x27cf48: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x27CF48u;
    {
        const bool branch_taken_0x27cf48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF48u;
        // 0x27cf4c: 0x24020c00  addiu       $v0, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf48) {
            ctx->pc = 0x27D010u;
            goto label_27d010;
        }
    }
    ctx->pc = 0x27CF50u;
    // 0x27cf50: 0x5082005b  beql        $a0, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x27CF50u;
    {
        const bool branch_taken_0x27cf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cf50) {
            ctx->pc = 0x27CF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF50u;
            // 0x27cf54: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D0C0u;
            goto label_27d0c0;
        }
    }
    ctx->pc = 0x27CF58u;
    // 0x27cf58: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x27CF58u;
    {
        const bool branch_taken_0x27cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf58) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27CF60u;
label_27cf60:
    // 0x27cf60: 0x50820081  beql        $a0, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x27CF60u;
    {
        const bool branch_taken_0x27cf60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cf60) {
            ctx->pc = 0x27CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF60u;
            // 0x27cf64: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D168u;
            goto label_27d168;
        }
    }
    ctx->pc = 0x27CF68u;
    // 0x27cf68: 0x28821801  slti        $v0, $a0, 0x1801
    ctx->pc = 0x27cf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6145) ? 1 : 0);
    // 0x27cf6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CF6Cu;
    {
        const bool branch_taken_0x27cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF6Cu;
        // 0x27cf70: 0x24021c00  addiu       $v0, $zero, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf6c) {
            ctx->pc = 0x27CF88u;
            goto label_27cf88;
        }
    }
    ctx->pc = 0x27CF74u;
    // 0x27cf74: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x27cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x27cf78: 0x50820069  beql        $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x27CF78u;
    {
        const bool branch_taken_0x27cf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cf78) {
            ctx->pc = 0x27CF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF78u;
            // 0x27cf7c: 0x96220096  lhu         $v0, 0x96($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27CF80u;
    // 0x27cf80: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x27CF80u;
    {
        const bool branch_taken_0x27cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf80) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27CF88u;
label_27cf88:
    // 0x27cf88: 0x1082007b  beq         $a0, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x27CF88u;
    {
        const bool branch_taken_0x27cf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF88u;
        // 0x27cf8c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf88) {
            ctx->pc = 0x27D178u;
            goto label_27d178;
        }
    }
    ctx->pc = 0x27CF90u;
    // 0x27cf90: 0x5082008f  beql        $a0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x27CF90u;
    {
        const bool branch_taken_0x27cf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27cf90) {
            ctx->pc = 0x27CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF90u;
            // 0x27cf94: 0x96220156  lhu         $v0, 0x156($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 342)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D1D0u;
            goto label_27d1d0;
        }
    }
    ctx->pc = 0x27CF98u;
    // 0x27cf98: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x27CF98u;
    {
        const bool branch_taken_0x27cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf98) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27CFA0u;
label_27cfa0:
    // 0x27cfa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cfa4: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27cfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cfa8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x27CFA8u;
    {
        const bool branch_taken_0x27cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA8u;
        // 0x27cfac: 0xae2500c0  sw          $a1, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfa8) {
            ctx->pc = 0x27D0D4u;
            goto label_27d0d4;
        }
    }
    ctx->pc = 0x27CFB0u;
label_27cfb0:
    // 0x27cfb0: 0xc09e9ce  jal         func_27A738
    ctx->pc = 0x27CFB0u;
    SET_GPR_U32(ctx, 31, 0x27CFB8u);
    ctx->pc = 0x27CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFB0u;
    // 0x27cfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A738u, 0x27CFB0u, 0x27CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFB8u;
label_27cfb8:
    // 0x27cfb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CFB8u;
    {
        const bool branch_taken_0x27cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFB8u;
        // 0x27cfbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfb8) {
            ctx->pc = 0x27CFE0u;
            goto label_27cfe0;
        }
    }
    ctx->pc = 0x27CFC0u;
    // 0x27cfc0: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x27cfc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27cfc4: 0x962300a2  lhu         $v1, 0xA2($s1)
    ctx->pc = 0x27cfc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x27cfc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cfcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27cfd0: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27cfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cfd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27CFD4u;
    {
        const bool branch_taken_0x27cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFD4u;
        // 0x27cfd8: 0xa62300a2  sh          $v1, 0xA2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfd4) {
            ctx->pc = 0x27CFE8u;
            goto label_27cfe8;
        }
    }
    ctx->pc = 0x27CFDCu;
    // 0x27cfdc: 0x0  nop
    ctx->pc = 0x27cfdcu;
    // NOP
label_27cfe0:
    // 0x27cfe0: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27cfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cfe4: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27cfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
label_27cfe8:
    // 0x27cfe8: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27cfec: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27cfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27cff0: 0x94a30024  lhu         $v1, 0x24($a1)
    ctx->pc = 0x27cff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27cff4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27cff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27cff8: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x27CFF8u;
    {
        const bool branch_taken_0x27cff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cff8) {
            ctx->pc = 0x27CFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CFF8u;
            // 0x27cffc: 0xae2500c0  sw          $a1, 0xC0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D0B8u;
            goto label_27d0b8;
        }
    }
    ctx->pc = 0x27D000u;
    // 0x27d000: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x27d000u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d004: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27D004u;
    {
        const bool branch_taken_0x27d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D004u;
        // 0x27d008: 0xa6230096  sh          $v1, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d004) {
            ctx->pc = 0x27D0B4u;
            goto label_27d0b4;
        }
    }
    ctx->pc = 0x27D00Cu;
    // 0x27d00c: 0x0  nop
    ctx->pc = 0x27d00cu;
    // NOP
label_27d010:
    // 0x27d010: 0x96230302  lhu         $v1, 0x302($s1)
    ctx->pc = 0x27d010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 770)));
    // 0x27d014: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x27d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x27d018: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D018u;
    {
        const bool branch_taken_0x27d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d018) {
            ctx->pc = 0x27D01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D018u;
            // 0x27d01c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D028u;
            goto label_27d028;
        }
    }
    ctx->pc = 0x27D020u;
    // 0x27d020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D020u;
    {
        const bool branch_taken_0x27d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D020u;
        // 0x27d024: 0x96220096  lhu         $v0, 0x96($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d020) {
            ctx->pc = 0x27D044u;
            goto label_27d044;
        }
    }
    ctx->pc = 0x27D028u;
label_27d028:
    // 0x27d028: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D028u;
    {
        const bool branch_taken_0x27d028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d028) {
            ctx->pc = 0x27D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D028u;
            // 0x27d02c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D038u;
            goto label_27d038;
        }
    }
    ctx->pc = 0x27D030u;
    // 0x27d030: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D030u;
    {
        const bool branch_taken_0x27d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D030u;
        // 0x27d034: 0x96220096  lhu         $v0, 0x96($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d030) {
            ctx->pc = 0x27D064u;
            goto label_27d064;
        }
    }
    ctx->pc = 0x27D038u;
label_27d038:
    // 0x27d038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D038u;
    {
        const bool branch_taken_0x27d038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D038u;
        // 0x27d03c: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d038) {
            ctx->pc = 0x27D058u;
            goto label_27d058;
        }
    }
    ctx->pc = 0x27D040u;
    // 0x27d040: 0x9622009e  lhu         $v0, 0x9E($s1)
    ctx->pc = 0x27d040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
label_27d044:
    // 0x27d044: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27d044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27d048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D04Cu;
    {
        const bool branch_taken_0x27d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D04Cu;
        // 0x27d050: 0xa6220096  sh          $v0, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d04c) {
            ctx->pc = 0x27D070u;
            goto label_27d070;
        }
    }
    ctx->pc = 0x27D054u;
    // 0x27d054: 0x0  nop
    ctx->pc = 0x27d054u;
    // NOP
label_27d058:
    // 0x27d058: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D058u;
    {
        const bool branch_taken_0x27d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d058) {
            ctx->pc = 0x27D05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D058u;
            // 0x27d05c: 0xa6230096  sh          $v1, 0x96($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D070u;
            goto label_27d070;
        }
    }
    ctx->pc = 0x27D060u;
    // 0x27d060: 0x9622009e  lhu         $v0, 0x9E($s1)
    ctx->pc = 0x27d060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
label_27d064:
    // 0x27d064: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27d064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27d068: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27d068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d06c: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d06cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
label_27d070:
    // 0x27d070: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d074: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27d074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d078: 0x94a40024  lhu         $a0, 0x24($a1)
    ctx->pc = 0x27d078u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27d07c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x27d07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27d080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D080u;
    {
        const bool branch_taken_0x27d080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D080u;
        // 0x27d084: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d080) {
            ctx->pc = 0x27D098u;
            goto label_27d098;
        }
    }
    ctx->pc = 0x27D088u;
    // 0x27d088: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x27d088u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27d08c: 0x1010  mfhi        $v0
    ctx->pc = 0x27d08cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27d090: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d090u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d094: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d098:
    // 0x27d098: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x27d09c: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D09Cu;
    {
        const bool branch_taken_0x27d09c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27d09c) {
            ctx->pc = 0x27D0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D09Cu;
            // 0x27d0a0: 0xa62600a2  sh          $a2, 0xA2($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D0B4u;
            goto label_27d0b4;
        }
    }
    ctx->pc = 0x27D0A4u;
    // 0x27d0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0ac: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d0acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d0b0: 0xa62600a2  sh          $a2, 0xA2($s1)
    ctx->pc = 0x27d0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 6));
label_27d0b4:
    // 0x27d0b4: 0xae2500c0  sw          $a1, 0xC0($s1)
    ctx->pc = 0x27d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
label_27d0b8:
    // 0x27d0b8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x27D0B8u;
    {
        const bool branch_taken_0x27d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0b8) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D0C0u;
label_27d0c0:
    // 0x27d0c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d0c4: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x27d0c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27d0c8: 0xae2500c0  sw          $a1, 0xC0($s1)
    ctx->pc = 0x27d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
    // 0x27d0cc: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27d0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d0d0: 0xa6230146  sh          $v1, 0x146($s1)
    ctx->pc = 0x27d0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 326), (uint16_t)GPR_U32(ctx, 3));
label_27d0d4:
    // 0x27d0d4: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d0d8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x27D0D8u;
    {
        const bool branch_taken_0x27d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D8u;
        // 0x27d0dc: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0d8) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D0E0u;
label_27d0e0:
    // 0x27d0e0: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x27d0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27d0e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x27d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d0ec: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D0ECu;
    {
        const bool branch_taken_0x27d0ec = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x27D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0ECu;
        // 0x27d0f0: 0xa6220096  sh          $v0, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0ec) {
            ctx->pc = 0x27D0FCu;
            goto label_27d0fc;
        }
    }
    ctx->pc = 0x27D0F4u;
    // 0x27d0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0f8: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
label_27d0fc:
    // 0x27d0fc: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x27d0fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d100: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d104: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d108: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27d108u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d10c: 0xae2500c0  sw          $a1, 0xC0($s1)
    ctx->pc = 0x27d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
    // 0x27d110: 0xa6230146  sh          $v1, 0x146($s1)
    ctx->pc = 0x27d110u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 326), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d114: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27D114u;
    {
        const bool branch_taken_0x27d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D114u;
        // 0x27d118: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d114) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D11Cu;
    // 0x27d11c: 0x0  nop
    ctx->pc = 0x27d11cu;
    // NOP
label_27d120:
    // 0x27d120: 0x962300a2  lhu         $v1, 0xA2($s1)
    ctx->pc = 0x27d120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x27d124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d128: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d12c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27d130: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d130u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d134: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x27d134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d138: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d13c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27d13cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27d140: 0x94a30024  lhu         $v1, 0x24($a1)
    ctx->pc = 0x27d140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27d144: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27d144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27d148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D148u;
    {
        const bool branch_taken_0x27d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D148u;
        // 0x27d14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d148) {
            ctx->pc = 0x27D158u;
            goto label_27d158;
        }
    }
    ctx->pc = 0x27D150u;
    // 0x27d150: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x27d150u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d154: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x27d154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
label_27d158:
    // 0x27d158: 0xae2500c0  sw          $a1, 0xC0($s1)
    ctx->pc = 0x27d158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
    // 0x27d15c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27D15Cu;
    {
        const bool branch_taken_0x27d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D15Cu;
        // 0x27d160: 0xa2220198  sb          $v0, 0x198($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 408), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d15c) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D164u;
    // 0x27d164: 0x0  nop
    ctx->pc = 0x27d164u;
    // NOP
label_27d168:
    // 0x27d168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d16c: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27d16cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27D170u;
    {
        const bool branch_taken_0x27d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D170u;
        // 0x27d174: 0xae2500c0  sw          $a1, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d170) {
            ctx->pc = 0x27D214u;
            goto label_27d214;
        }
    }
    ctx->pc = 0x27D178u;
label_27d178:
    // 0x27d178: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27d178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27d17c: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27D17Cu;
    {
        const bool branch_taken_0x27d17c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27d17c) {
            ctx->pc = 0x27D180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D17Cu;
            // 0x27d180: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D1C0u;
            goto label_27d1c0;
        }
    }
    ctx->pc = 0x27D184u;
    // 0x27d184: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27d188: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x27d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x27d18c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D18Cu;
    {
        const bool branch_taken_0x27d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d18c) {
            ctx->pc = 0x27D190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D18Cu;
            // 0x27d190: 0x866202bc  lh          $v0, 0x2BC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D1ACu;
            goto label_27d1ac;
        }
    }
    ctx->pc = 0x27D194u;
    // 0x27d194: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x27d194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x27d198: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27d198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d19c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27d19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27d1a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D1A0u;
    {
        const bool branch_taken_0x27d1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1A0u;
        // 0x27d1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1a0) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D1A8u;
    // 0x27d1a8: 0x866202bc  lh          $v0, 0x2BC($s3)
    ctx->pc = 0x27d1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 700)));
label_27d1ac:
    // 0x27d1ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D1ACu;
    {
        const bool branch_taken_0x27d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d1ac) {
            ctx->pc = 0x27D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D1ACu;
            // 0x27d1b0: 0xa22001a0  sb          $zero, 0x1A0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 416), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D1BCu;
            goto label_27d1bc;
        }
    }
    ctx->pc = 0x27D1B4u;
    // 0x27d1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d1b8:
    // 0x27d1b8: 0xa22201a0  sb          $v0, 0x1A0($s1)
    ctx->pc = 0x27d1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 416), (uint8_t)GPR_U32(ctx, 2));
label_27d1bc:
    // 0x27d1bc: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_27d1c0:
    // 0x27d1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d1c4: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27d1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d1c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27D1C8u;
    {
        const bool branch_taken_0x27d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1C8u;
        // 0x27d1cc: 0xae2500c0  sw          $a1, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1c8) {
            ctx->pc = 0x27D214u;
            goto label_27d214;
        }
    }
    ctx->pc = 0x27D1D0u;
label_27d1d0:
    // 0x27d1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d1d4: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x27d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d1e8: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x27d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x27d1ec: 0xa225019a  sb          $a1, 0x19A($s1)
    ctx->pc = 0x27d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 410), (uint8_t)GPR_U32(ctx, 5));
    // 0x27d1f0: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x27d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x27d1f4: 0xa6220156  sh          $v0, 0x156($s1)
    ctx->pc = 0x27d1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 342), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d1f8: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27D1F8u;
    SET_GPR_U32(ctx, 31, 0x27D200u);
    ctx->pc = 0x27D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1F8u;
    // 0x27d1fc: 0xa6200148  sh          $zero, 0x148($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27D1F8u, 0x27D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D200u;
label_27d200:
    // 0x27d200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d204: 0xc080578  jal         func_2015E0
    ctx->pc = 0x27D204u;
    SET_GPR_U32(ctx, 31, 0x27D20Cu);
    ctx->pc = 0x27D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D204u;
    // 0x27d208: 0xa62202b6  sh          $v0, 0x2B6($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015E0u, 0x27D204u, 0x27D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D20Cu;
label_27d20c:
    // 0x27d20c: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x27d20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x27d210: 0xa62200a2  sh          $v0, 0xA2($s1)
    ctx->pc = 0x27d210u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 2));
label_27d214:
    // 0x27d214: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x27d214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
label_27d218:
    // 0x27d218: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D218u;
    {
        const bool branch_taken_0x27d218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D218u;
        // 0x27d21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d218) {
            ctx->pc = 0x27D240u;
            goto label_27d240;
        }
    }
    ctx->pc = 0x27D220u;
    // 0x27d220: 0xc6200754  lwc1        $f0, 0x754($s1)
    ctx->pc = 0x27d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d228: 0xc0b0b10  jal         func_2C2C40
    ctx->pc = 0x27D228u;
    SET_GPR_U32(ctx, 31, 0x27D230u);
    ctx->pc = 0x27D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D228u;
    // 0x27d22c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C40u, 0x27D228u, 0x27D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D230u;
label_27d230:
    // 0x27d230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d234: 0xc0b0b10  jal         func_2C2C40
    ctx->pc = 0x27D234u;
    SET_GPR_U32(ctx, 31, 0x27D23Cu);
    ctx->pc = 0x27D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D234u;
    // 0x27d238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C40u, 0x27D234u, 0x27D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D23Cu;
label_27d23c:
    // 0x27d23c: 0xae2007e4  sw          $zero, 0x7E4($s1)
    ctx->pc = 0x27d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2020), GPR_U32(ctx, 0));
label_27d240:
    // 0x27d240: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x27D240u;
    {
        const bool branch_taken_0x27d240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d240) {
            ctx->pc = 0x27D244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D240u;
            // 0x27d244: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D280u;
            goto label_27d280;
        }
    }
    ctx->pc = 0x27D248u;
    // 0x27d248: 0x5600000d  bnel        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x27D248u;
    {
        const bool branch_taken_0x27d248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d248) {
            ctx->pc = 0x27D24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D248u;
            // 0x27d24c: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D280u;
            goto label_27d280;
        }
    }
    ctx->pc = 0x27D250u;
    // 0x27d250: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27d254: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D254u;
    {
        const bool branch_taken_0x27d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d254) {
            ctx->pc = 0x27D258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D254u;
            // 0x27d258: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D27Cu;
            goto label_27d27c;
        }
    }
    ctx->pc = 0x27D25Cu;
    // 0x27d25c: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x27d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d260: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x27D260u;
    SET_GPR_U32(ctx, 31, 0x27D268u);
    ctx->pc = 0x27D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D260u;
    // 0x27d264: 0x26240750  addiu       $a0, $s1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x27D260u, 0x27D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D268u;
label_27d268:
    // 0x27d268: 0xc6210754  lwc1        $f1, 0x754($s1)
    ctx->pc = 0x27d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d26c: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x27d26cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d270: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27d270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27d274: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x27d274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x27d278: 0xe6210754  swc1        $f1, 0x754($s1)
    ctx->pc = 0x27d278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1876), bits); }
label_27d27c:
    // 0x27d27c: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27d27cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27d280:
    // 0x27d280: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x27d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x27d284: 0x310303c0  andi        $v1, $t0, 0x3C0
    ctx->pc = 0x27d284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)960);
    // 0x27d288: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x27D288u;
    {
        const bool branch_taken_0x27d288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D288u;
        // 0x27d28c: 0x286200c1  slti        $v0, $v1, 0xC1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d288) {
            ctx->pc = 0x27D3A8u;
            goto label_27d3a8;
        }
    }
    ctx->pc = 0x27D290u;
    // 0x27d290: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D290u;
    {
        const bool branch_taken_0x27d290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d290) {
            ctx->pc = 0x27D294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D290u;
            // 0x27d294: 0x240202c0  addiu       $v0, $zero, 0x2C0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D2A0u;
            goto label_27d2a0;
        }
    }
    ctx->pc = 0x27D298u;
    // 0x27d298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D298u;
    {
        const bool branch_taken_0x27d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D298u;
        // 0x27d29c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d298) {
            ctx->pc = 0x27D2A8u;
            goto label_27d2a8;
        }
    }
    ctx->pc = 0x27D2A0u;
label_27d2a0:
    // 0x27d2a0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x27D2A0u;
    {
        const bool branch_taken_0x27d2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2A0u;
        // 0x27d2a4: 0x24020340  addiu       $v0, $zero, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2a0) {
            ctx->pc = 0x27D3A4u;
            goto label_27d3a4;
        }
    }
    ctx->pc = 0x27D2A8u;
label_27d2a8:
    // 0x27d2a8: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27D2A8u;
    {
        const bool branch_taken_0x27d2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2A8u;
        // 0x27d2ac: 0x310303c0  andi        $v1, $t0, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2a8) {
            ctx->pc = 0x27D3A8u;
            goto label_27d3a8;
        }
    }
    ctx->pc = 0x27D2B0u;
    // 0x27d2b0: 0x922201b9  lbu         $v0, 0x1B9($s1)
    ctx->pc = 0x27d2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 441)));
    // 0x27d2b4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x27D2B4u;
    {
        const bool branch_taken_0x27d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2B4u;
        // 0x27d2b8: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2b4) {
            ctx->pc = 0x27D3ACu;
            goto label_27d3ac;
        }
    }
    ctx->pc = 0x27D2BCu;
    // 0x27d2bc: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d2c0: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27d2c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x27d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x27d2c8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27D2C8u;
    {
        const bool branch_taken_0x27d2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2C8u;
        // 0x27d2cc: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2c8) {
            ctx->pc = 0x27D3ACu;
            goto label_27d3ac;
        }
    }
    ctx->pc = 0x27D2D0u;
    // 0x27d2d0: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x27d2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x27d2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2d8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x27d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27d2dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x27d2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d2e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27d2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27d2e4: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27D2E4u;
    SET_GPR_U32(ctx, 31, 0x27D2ECu);
    ctx->pc = 0x27D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D2E4u;
    // 0x27d2e8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27D2E4u, 0x27D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2ECu;
label_27d2ec:
    // 0x27d2ec: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x27d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d2f0: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27d2f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d2f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d2f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27d2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d2fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d304: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d308: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27d308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27d30c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27d310: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27D310u;
    SET_GPR_U32(ctx, 31, 0x27D318u);
    ctx->pc = 0x27D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D310u;
    // 0x27d314: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27D310u, 0x27D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D318u;
label_27d318:
    // 0x27d318: 0xc7818ce0  lwc1        $f1, -0x7320($gp)
    ctx->pc = 0x27d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d31c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27d31cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27d320: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x27d320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d324: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D324u;
    {
        const bool branch_taken_0x27d324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D324u;
        // 0x27d328: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d324) {
            ctx->pc = 0x27D338u;
            goto label_27d338;
        }
    }
    ctx->pc = 0x27D32Cu;
    // 0x27d32c: 0xc7808ce4  lwc1        $f0, -0x731C($gp)
    ctx->pc = 0x27d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D330u;
    {
        const bool branch_taken_0x27d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D330u;
        // 0x27d334: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d330) {
            ctx->pc = 0x27D350u;
            goto label_27d350;
        }
    }
    ctx->pc = 0x27D338u;
label_27d338:
    // 0x27d338: 0xc7808ce8  lwc1        $f0, -0x7318($gp)
    ctx->pc = 0x27d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d33c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27d33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d340: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D340u;
    {
        const bool branch_taken_0x27d340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d340) {
            ctx->pc = 0x27D350u;
            goto label_27d350;
        }
    }
    ctx->pc = 0x27D348u;
    // 0x27d348: 0xc7808cec  lwc1        $f0, -0x7314($gp)
    ctx->pc = 0x27d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d34c: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x27d34cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27d350:
    // 0x27d350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d354: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x27d354u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x27d358: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27d358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d35c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D35Cu;
    {
        const bool branch_taken_0x27d35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d35c) {
            ctx->pc = 0x27D36Cu;
            goto label_27d36c;
        }
    }
    ctx->pc = 0x27D364u;
    // 0x27d364: 0xc7808cf0  lwc1        $f0, -0x7310($gp)
    ctx->pc = 0x27d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d368: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27d368u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27d36c:
    // 0x27d36c: 0xc7808cf4  lwc1        $f0, -0x730C($gp)
    ctx->pc = 0x27d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d370: 0xc7818cf8  lwc1        $f1, -0x7308($gp)
    ctx->pc = 0x27d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d374: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27d374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27d378: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27d378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d37c: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27d37cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x27d380: 0x0  nop
    ctx->pc = 0x27d380u;
    // NOP
    // 0x27d384: 0x0  nop
    ctx->pc = 0x27d384u;
    // NOP
    // 0x27d388: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d388u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d38c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d390: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d394: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d398: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27d398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27d39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d3a0: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x27d3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
label_27d3a4:
    // 0x27d3a4: 0x310303c0  andi        $v1, $t0, 0x3C0
    ctx->pc = 0x27d3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)960);
label_27d3a8:
    // 0x27d3a8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x27d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_27d3ac:
    // 0x27d3ac: 0x5062024a  beql        $v1, $v0, . + 4 + (0x24A << 2)
    ctx->pc = 0x27D3ACu;
    {
        const bool branch_taken_0x27d3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d3ac) {
            ctx->pc = 0x27D3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D3ACu;
            // 0x27d3b0: 0x9622008a  lhu         $v0, 0x8A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D3B4u;
    // 0x27d3b4: 0x286201c1  slti        $v0, $v1, 0x1C1
    ctx->pc = 0x27d3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)449) ? 1 : 0);
    // 0x27d3b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27D3B8u;
    {
        const bool branch_taken_0x27d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3B8u;
        // 0x27d3bc: 0x240202c0  addiu       $v0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3b8) {
            ctx->pc = 0x27D438u;
            goto label_27d438;
        }
    }
    ctx->pc = 0x27D3C0u;
    // 0x27d3c0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x27d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x27d3c4: 0x106201e6  beq         $v1, $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x27D3C4u;
    {
        const bool branch_taken_0x27d3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3C4u;
        // 0x27d3c8: 0x286200c1  slti        $v0, $v1, 0xC1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3c4) {
            ctx->pc = 0x27DB60u;
            goto label_27db60;
        }
    }
    ctx->pc = 0x27D3CCu;
    // 0x27d3cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27D3CCu;
    {
        const bool branch_taken_0x27d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3CCu;
        // 0x27d3d0: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3cc) {
            ctx->pc = 0x27D400u;
            goto label_27d400;
        }
    }
    ctx->pc = 0x27D3D4u;
    // 0x27d3d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x27d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27d3d8: 0x10620241  beq         $v1, $v0, . + 4 + (0x241 << 2)
    ctx->pc = 0x27D3D8u;
    {
        const bool branch_taken_0x27d3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D8u;
        // 0x27d3dc: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d8) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D3E0u;
    // 0x27d3e0: 0x54400240  bnel        $v0, $zero, . + 4 + (0x240 << 2)
    ctx->pc = 0x27D3E0u;
    {
        const bool branch_taken_0x27d3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d3e0) {
            ctx->pc = 0x27D3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D3E0u;
            // 0x27d3e4: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D3E8u;
    // 0x27d3e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27d3ec: 0x506201dd  beql        $v1, $v0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x27D3ECu;
    {
        const bool branch_taken_0x27d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d3ec) {
            ctx->pc = 0x27D3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D3ECu;
            // 0x27d3f0: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DB64u;
            goto label_27db64;
        }
    }
    ctx->pc = 0x27D3F4u;
    // 0x27d3f4: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x27D3F4u;
    {
        const bool branch_taken_0x27d3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3F4u;
        // 0x27d3f8: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3f4) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D3FCu;
    // 0x27d3fc: 0x0  nop
    ctx->pc = 0x27d3fcu;
    // NOP
label_27d400:
    // 0x27d400: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27D400u;
    {
        const bool branch_taken_0x27d400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D400u;
        // 0x27d404: 0x28620141  slti        $v0, $v1, 0x141 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d400) {
            ctx->pc = 0x27D4C4u;
            goto label_27d4c4;
        }
    }
    ctx->pc = 0x27D408u;
    // 0x27d408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D408u;
    {
        const bool branch_taken_0x27d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D408u;
        // 0x27d40c: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d408) {
            ctx->pc = 0x27D428u;
            goto label_27d428;
        }
    }
    ctx->pc = 0x27D410u;
    // 0x27d410: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27d414: 0x50620230  beql        $v1, $v0, . + 4 + (0x230 << 2)
    ctx->pc = 0x27D414u;
    {
        const bool branch_taken_0x27d414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d414) {
            ctx->pc = 0x27D418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D414u;
            // 0x27d418: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D41Cu;
    // 0x27d41c: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x27D41Cu;
    {
        const bool branch_taken_0x27d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D41Cu;
        // 0x27d420: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d41c) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D424u;
    // 0x27d424: 0x0  nop
    ctx->pc = 0x27d424u;
    // NOP
label_27d428:
    // 0x27d428: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27D428u;
    {
        const bool branch_taken_0x27d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d428) {
            ctx->pc = 0x27D42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D428u;
            // 0x27d42c: 0x86220080  lh          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D4B8u;
            goto label_27d4b8;
        }
    }
    ctx->pc = 0x27D430u;
    // 0x27d430: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x27D430u;
    {
        const bool branch_taken_0x27d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D430u;
        // 0x27d434: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d430) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D438u;
label_27d438:
    // 0x27d438: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x27D438u;
    {
        const bool branch_taken_0x27d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D438u;
        // 0x27d43c: 0x286202c1  slti        $v0, $v1, 0x2C1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)705) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d438) {
            ctx->pc = 0x27D5D0u;
            goto label_27d5d0;
        }
    }
    ctx->pc = 0x27D440u;
    // 0x27d440: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27D440u;
    {
        const bool branch_taken_0x27d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D440u;
        // 0x27d444: 0x24020340  addiu       $v0, $zero, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d440) {
            ctx->pc = 0x27D480u;
            goto label_27d480;
        }
    }
    ctx->pc = 0x27D448u;
    // 0x27d448: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x27d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x27d44c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27D44Cu;
    {
        const bool branch_taken_0x27d44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D44Cu;
        // 0x27d450: 0x28620241  slti        $v0, $v1, 0x241 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)577) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d44c) {
            ctx->pc = 0x27D4D0u;
            goto label_27d4d0;
        }
    }
    ctx->pc = 0x27D454u;
    // 0x27d454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D454u;
    {
        const bool branch_taken_0x27d454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D454u;
        // 0x27d458: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d454) {
            ctx->pc = 0x27D470u;
            goto label_27d470;
        }
    }
    ctx->pc = 0x27D45Cu;
    // 0x27d45c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x27d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27d460: 0x5062021b  beql        $v1, $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D460u;
            // 0x27d464: 0x9622008a  lhu         $v0, 0x8A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD0u;
            goto label_27dcd0;
        }
    }
    ctx->pc = 0x27D468u;
    // 0x27d468: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x27D468u;
    {
        const bool branch_taken_0x27d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D468u;
        // 0x27d46c: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d468) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D470u;
label_27d470:
    // 0x27d470: 0x50620037  beql        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27D470u;
    {
        const bool branch_taken_0x27d470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d470) {
            ctx->pc = 0x27D474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D470u;
            // 0x27d474: 0xc6220074  lwc1        $f2, 0x74($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D550u;
            goto label_27d550;
        }
    }
    ctx->pc = 0x27D478u;
    // 0x27d478: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x27D478u;
    {
        const bool branch_taken_0x27d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D478u;
        // 0x27d47c: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d478) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D480u;
label_27d480:
    // 0x27d480: 0x106200d3  beq         $v1, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x27D480u;
    {
        const bool branch_taken_0x27d480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D480u;
        // 0x27d484: 0x28620341  slti        $v0, $v1, 0x341 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)833) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d480) {
            ctx->pc = 0x27D7D0u;
            goto label_27d7d0;
        }
    }
    ctx->pc = 0x27D488u;
    // 0x27d488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D488u;
    {
        const bool branch_taken_0x27d488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D488u;
        // 0x27d48c: 0x24020380  addiu       $v0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d488) {
            ctx->pc = 0x27D4A8u;
            goto label_27d4a8;
        }
    }
    ctx->pc = 0x27D490u;
    // 0x27d490: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x27d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x27d494: 0x50620210  beql        $v1, $v0, . + 4 + (0x210 << 2)
    ctx->pc = 0x27D494u;
    {
        const bool branch_taken_0x27d494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d494) {
            ctx->pc = 0x27D498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D494u;
            // 0x27d498: 0x96220220  lhu         $v0, 0x220($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D49Cu;
    // 0x27d49c: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x27D49Cu;
    {
        const bool branch_taken_0x27d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D49Cu;
        // 0x27d4a0: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d49c) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D4A4u;
    // 0x27d4a4: 0x0  nop
    ctx->pc = 0x27d4a4u;
    // NOP
label_27d4a8:
    // 0x27d4a8: 0x506201ff  beql        $v1, $v0, . + 4 + (0x1FF << 2)
    ctx->pc = 0x27D4A8u;
    {
        const bool branch_taken_0x27d4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d4a8) {
            ctx->pc = 0x27D4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D4A8u;
            // 0x27d4ac: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCA8u;
            goto label_27dca8;
        }
    }
    ctx->pc = 0x27D4B0u;
    // 0x27d4b0: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x27D4B0u;
    {
        const bool branch_taken_0x27d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4B0u;
        // 0x27d4b4: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4b0) {
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D4B8u;
label_27d4b8:
    // 0x27d4b8: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27d4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27d4bc: 0x50400204  beql        $v0, $zero, . + 4 + (0x204 << 2)
    ctx->pc = 0x27D4BCu;
    {
        const bool branch_taken_0x27d4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4bc) {
            ctx->pc = 0x27D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D4BCu;
            // 0x27d4c0: 0x9622008a  lhu         $v0, 0x8A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD0u;
            goto label_27dcd0;
        }
    }
    ctx->pc = 0x27D4C4u;
label_27d4c4:
    // 0x27d4c4: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x27d4c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27d4c8: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x27D4C8u;
    {
        const bool branch_taken_0x27d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4C8u;
        // 0x27d4cc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4c8) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D4D0u;
label_27d4d0:
    // 0x27d4d0: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x27d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d4d4: 0xc7808cfc  lwc1        $f0, -0x7304($gp)
    ctx->pc = 0x27d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d4d8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D4DCu;
    {
        const bool branch_taken_0x27d4dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4DCu;
        // 0x27d4e0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4dc) {
            ctx->pc = 0x27D4F0u;
            goto label_27d4f0;
        }
    }
    ctx->pc = 0x27D4E4u;
    // 0x27d4e4: 0xc7808d00  lwc1        $f0, -0x7300($gp)
    ctx->pc = 0x27d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d4e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D4E8u;
    {
        const bool branch_taken_0x27d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4E8u;
        // 0x27d4ec: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4e8) {
            ctx->pc = 0x27D508u;
            goto label_27d508;
        }
    }
    ctx->pc = 0x27D4F0u;
label_27d4f0:
    // 0x27d4f0: 0xc7808d04  lwc1        $f0, -0x72FC($gp)
    ctx->pc = 0x27d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d4f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D4F8u;
    {
        const bool branch_taken_0x27d4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d4f8) {
            ctx->pc = 0x27D508u;
            goto label_27d508;
        }
    }
    ctx->pc = 0x27D500u;
    // 0x27d500: 0xc7808d08  lwc1        $f0, -0x72F8($gp)
    ctx->pc = 0x27d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d504: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27d504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d508:
    // 0x27d508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d50c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27d50cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27d510: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d514: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D514u;
    {
        const bool branch_taken_0x27d514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d514) {
            ctx->pc = 0x27D524u;
            goto label_27d524;
        }
    }
    ctx->pc = 0x27D51Cu;
    // 0x27d51c: 0xc7808d0c  lwc1        $f0, -0x72F4($gp)
    ctx->pc = 0x27d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d520: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d520u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d524:
    // 0x27d524: 0xc7808d10  lwc1        $f0, -0x72F0($gp)
    ctx->pc = 0x27d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d528: 0xc7818d14  lwc1        $f1, -0x72EC($gp)
    ctx->pc = 0x27d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d52c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27d52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d530: 0x0  nop
    ctx->pc = 0x27d530u;
    // NOP
    // 0x27d534: 0x0  nop
    ctx->pc = 0x27d534u;
    // NOP
    // 0x27d538: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d538u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d53c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d53cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d540: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d544: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d548: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x27D548u;
    {
        const bool branch_taken_0x27d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D548u;
        // 0x27d54c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d548) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D550u;
label_27d550:
    // 0x27d550: 0xc7808d18  lwc1        $f0, -0x72E8($gp)
    ctx->pc = 0x27d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d554: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d558: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D558u;
    {
        const bool branch_taken_0x27d558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D558u;
        // 0x27d55c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d558) {
            ctx->pc = 0x27D570u;
            goto label_27d570;
        }
    }
    ctx->pc = 0x27D560u;
    // 0x27d560: 0xc7808d1c  lwc1        $f0, -0x72E4($gp)
    ctx->pc = 0x27d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D564u;
    {
        const bool branch_taken_0x27d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D564u;
        // 0x27d568: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d564) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D56Cu;
    // 0x27d56c: 0x0  nop
    ctx->pc = 0x27d56cu;
    // NOP
label_27d570:
    // 0x27d570: 0xc7808d20  lwc1        $f0, -0x72E0($gp)
    ctx->pc = 0x27d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d574: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d578: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D578u;
    {
        const bool branch_taken_0x27d578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d578) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D580u;
    // 0x27d580: 0xc7808d24  lwc1        $f0, -0x72DC($gp)
    ctx->pc = 0x27d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d584: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27d584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d588:
    // 0x27d588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d58c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27d58cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27d590: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d594: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D594u;
    {
        const bool branch_taken_0x27d594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d594) {
            ctx->pc = 0x27D5A4u;
            goto label_27d5a4;
        }
    }
    ctx->pc = 0x27D59Cu;
    // 0x27d59c: 0xc7808d28  lwc1        $f0, -0x72D8($gp)
    ctx->pc = 0x27d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d5a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d5a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d5a4:
    // 0x27d5a4: 0xc7808d2c  lwc1        $f0, -0x72D4($gp)
    ctx->pc = 0x27d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d5a8: 0xc7818d30  lwc1        $f1, -0x72D0($gp)
    ctx->pc = 0x27d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d5ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27d5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d5b0: 0x0  nop
    ctx->pc = 0x27d5b0u;
    // NOP
    // 0x27d5b4: 0x0  nop
    ctx->pc = 0x27d5b4u;
    // NOP
    // 0x27d5b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d5b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d5bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d5bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d5c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d5c4: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x27D5C4u;
    {
        const bool branch_taken_0x27d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5C4u;
        // 0x27d5c8: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5c4) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D5CCu;
    // 0x27d5cc: 0x0  nop
    ctx->pc = 0x27d5ccu;
    // NOP
label_27d5d0:
    // 0x27d5d0: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27d5d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27d5d4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27D5D4u;
    {
        const bool branch_taken_0x27d5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d5d4) {
            ctx->pc = 0x27D6A8u;
            goto label_27d6a8;
        }
    }
    ctx->pc = 0x27D5DCu;
    // 0x27d5dc: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x27d5dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x27d5e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27d5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27d5e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27d5e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27d5ec: 0x844301c2  lh          $v1, 0x1C2($v0)
    ctx->pc = 0x27d5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 450)));
    // 0x27d5f0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x27d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x27d5f4: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x27d5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x27d5f8: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x27D5F8u;
    {
        const bool branch_taken_0x27d5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5f8) {
            ctx->pc = 0x27D5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D5F8u;
            // 0x27d5fc: 0x9663000e  lhu         $v1, 0xE($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D684u;
            goto label_27d684;
        }
    }
    ctx->pc = 0x27D600u;
    // 0x27d600: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d604: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x27d604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x27d608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27d608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d60c: 0x8c633db0  lw          $v1, 0x3DB0($v1)
    ctx->pc = 0x27d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15792)));
    // 0x27d610: 0x600008  jr          $v1
    ctx->pc = 0x27D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D618u: goto label_27d618;
            case 0x27D630u: goto label_27d630;
            case 0x27D648u: goto label_27d648;
            case 0x27D660u: goto label_27d660;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27D618u;
label_27d618:
    // 0x27d618: 0x866202fa  lh          $v0, 0x2FA($s3)
    ctx->pc = 0x27d618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 762)));
    // 0x27d61c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27D61Cu;
    {
        const bool branch_taken_0x27d61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d61c) {
            ctx->pc = 0x27D620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D61Cu;
            // 0x27d620: 0x9663000e  lhu         $v1, 0xE($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D684u;
            goto label_27d684;
        }
    }
    ctx->pc = 0x27D624u;
    // 0x27d624: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27d624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d628: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27D628u;
    {
        const bool branch_taken_0x27d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D628u;
        // 0x27d62c: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d628) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D630u;
label_27d630:
    // 0x27d630: 0x866202fa  lh          $v0, 0x2FA($s3)
    ctx->pc = 0x27d630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 762)));
    // 0x27d634: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27D634u;
    {
        const bool branch_taken_0x27d634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d634) {
            ctx->pc = 0x27D638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D634u;
            // 0x27d638: 0x9663000e  lhu         $v1, 0xE($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D684u;
            goto label_27d684;
        }
    }
    ctx->pc = 0x27D63Cu;
    // 0x27d63c: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27d63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d640: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27D640u;
    {
        const bool branch_taken_0x27d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D640u;
        // 0x27d644: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d640) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D648u;
label_27d648:
    // 0x27d648: 0x866202fa  lh          $v0, 0x2FA($s3)
    ctx->pc = 0x27d648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 762)));
    // 0x27d64c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D64Cu;
    {
        const bool branch_taken_0x27d64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D64Cu;
        // 0x27d650: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d64c) {
            ctx->pc = 0x27D678u;
            goto label_27d678;
        }
    }
    ctx->pc = 0x27D654u;
    // 0x27d654: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27D654u;
    {
        const bool branch_taken_0x27d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D654u;
        // 0x27d658: 0x24424000  addiu       $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d654) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D65Cu;
    // 0x27d65c: 0x0  nop
    ctx->pc = 0x27d65cu;
    // NOP
label_27d660:
    // 0x27d660: 0x866202fa  lh          $v0, 0x2FA($s3)
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 762)));
    // 0x27d664: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D664u;
    {
        const bool branch_taken_0x27d664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D664u;
        // 0x27d668: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d664) {
            ctx->pc = 0x27D678u;
            goto label_27d678;
        }
    }
    ctx->pc = 0x27D66Cu;
    // 0x27d66c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D66Cu;
    {
        const bool branch_taken_0x27d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D66Cu;
        // 0x27d670: 0x24424000  addiu       $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d66c) {
            ctx->pc = 0x27D67Cu;
            goto label_27d67c;
        }
    }
    ctx->pc = 0x27D674u;
    // 0x27d674: 0x0  nop
    ctx->pc = 0x27d674u;
    // NOP
label_27d678:
    // 0x27d678: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x27d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
label_27d67c:
    // 0x27d67c: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x27d67cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d680: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x27d680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_27d684:
    // 0x27d684: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d688: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x27d688u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d68c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27d690: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27d690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27d694: 0x50400193  beql        $v0, $zero, . + 4 + (0x193 << 2)
    ctx->pc = 0x27D694u;
    {
        const bool branch_taken_0x27d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d694) {
            ctx->pc = 0x27D698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D694u;
            // 0x27d698: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D69Cu;
    // 0x27d69c: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x27D69Cu;
    {
        const bool branch_taken_0x27d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D69Cu;
        // 0x27d6a0: 0x9662000e  lhu         $v0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d69c) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D6A4u;
    // 0x27d6a4: 0x0  nop
    ctx->pc = 0x27d6a4u;
    // NOP
label_27d6a8:
    // 0x27d6a8: 0x4430043  bgezl       $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27D6A8u;
    {
        const bool branch_taken_0x27d6a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27d6a8) {
            ctx->pc = 0x27D6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6A8u;
            // 0x27d6ac: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D7B8u;
            goto label_27d7b8;
        }
    }
    ctx->pc = 0x27D6B0u;
    // 0x27d6b0: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27d6b4: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x27d6b8: 0x4420187  bltzl       $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x27D6B8u;
    {
        const bool branch_taken_0x27d6b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27d6b8) {
            ctx->pc = 0x27D6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6B8u;
            // 0x27d6bc: 0x9662000e  lhu         $v0, 0xE($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D6C0u;
    // 0x27d6c0: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d6c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27d6c8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27d6cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27d6d0: 0x54400181  bnel        $v0, $zero, . + 4 + (0x181 << 2)
    ctx->pc = 0x27D6D0u;
    {
        const bool branch_taken_0x27d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d6d0) {
            ctx->pc = 0x27D6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6D0u;
            // 0x27d6d4: 0x9662000e  lhu         $v0, 0xE($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D6D8u;
    // 0x27d6d8: 0x962202f4  lhu         $v0, 0x2F4($s1)
    ctx->pc = 0x27d6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x27d6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d6e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27d6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27d6e8: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27D6E8u;
    SET_GPR_U32(ctx, 31, 0x27D6F0u);
    ctx->pc = 0x27D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6E8u;
    // 0x27d6ec: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27D6E8u, 0x27D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6F0u;
label_27d6f0:
    // 0x27d6f0: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x27d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27d6f4: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27d6f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d6f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27d6fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d708: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d70c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27d70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27d710: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x27d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27d714: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27D714u;
    SET_GPR_U32(ctx, 31, 0x27D71Cu);
    ctx->pc = 0x27D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D714u;
    // 0x27d718: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27D714u, 0x27D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D71Cu;
label_27d71c:
    // 0x27d71c: 0xc7818d34  lwc1        $f1, -0x72CC($gp)
    ctx->pc = 0x27d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d720: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27d720u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27d724: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x27d724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d728: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D728u;
    {
        const bool branch_taken_0x27d728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D728u;
        // 0x27d72c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d728) {
            ctx->pc = 0x27D740u;
            goto label_27d740;
        }
    }
    ctx->pc = 0x27D730u;
    // 0x27d730: 0xc7808d38  lwc1        $f0, -0x72C8($gp)
    ctx->pc = 0x27d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D734u;
    {
        const bool branch_taken_0x27d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D734u;
        // 0x27d738: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d734) {
            ctx->pc = 0x27D758u;
            goto label_27d758;
        }
    }
    ctx->pc = 0x27D73Cu;
    // 0x27d73c: 0x0  nop
    ctx->pc = 0x27d73cu;
    // NOP
label_27d740:
    // 0x27d740: 0xc7808d3c  lwc1        $f0, -0x72C4($gp)
    ctx->pc = 0x27d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d744: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27d744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d748: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D748u;
    {
        const bool branch_taken_0x27d748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d748) {
            ctx->pc = 0x27D758u;
            goto label_27d758;
        }
    }
    ctx->pc = 0x27D750u;
    // 0x27d750: 0xc7808d40  lwc1        $f0, -0x72C0($gp)
    ctx->pc = 0x27d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d754: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x27d754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27d758:
    // 0x27d758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d75c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x27d75cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x27d760: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27d760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d764: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D764u;
    {
        const bool branch_taken_0x27d764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d764) {
            ctx->pc = 0x27D774u;
            goto label_27d774;
        }
    }
    ctx->pc = 0x27D76Cu;
    // 0x27d76c: 0xc7808d44  lwc1        $f0, -0x72BC($gp)
    ctx->pc = 0x27d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d770: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27d770u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27d774:
    // 0x27d774: 0xc7808d48  lwc1        $f0, -0x72B8($gp)
    ctx->pc = 0x27d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d778: 0xc7818d4c  lwc1        $f1, -0x72B4($gp)
    ctx->pc = 0x27d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d77c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27d77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27d780: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27d780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d784: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27d784u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x27d788: 0x0  nop
    ctx->pc = 0x27d788u;
    // NOP
    // 0x27d78c: 0x0  nop
    ctx->pc = 0x27d78cu;
    // NOP
    // 0x27d790: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d790u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d794: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d798: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d79c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d7a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27d7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d7a8: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x27d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d7ac: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x27d7acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x27d7b0: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x27D7B0u;
    {
        const bool branch_taken_0x27d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7B0u;
        // 0x27d7b4: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7b0) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D7B8u;
label_27d7b8:
    // 0x27d7b8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27d7bc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27d7c0: 0x50400148  beql        $v0, $zero, . + 4 + (0x148 << 2)
    ctx->pc = 0x27D7C0u;
    {
        const bool branch_taken_0x27d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7c0) {
            ctx->pc = 0x27D7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D7C0u;
            // 0x27d7c4: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27D7C8u;
    // 0x27d7c8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x27D7C8u;
    {
        const bool branch_taken_0x27d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7C8u;
        // 0x27d7cc: 0x9662000e  lhu         $v0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7c8) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D7D0u;
label_27d7d0:
    // 0x27d7d0: 0x86230148  lh          $v1, 0x148($s1)
    ctx->pc = 0x27d7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27d7d4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D7D4u;
    {
        const bool branch_taken_0x27d7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7d4) {
            ctx->pc = 0x27D7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D7D4u;
            // 0x27d7d8: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D7ECu;
            goto label_27d7ec;
        }
    }
    ctx->pc = 0x27D7DCu;
    // 0x27d7dc: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x27d7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x27d7e0: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x27D7E0u;
    {
        const bool branch_taken_0x27d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d7e0) {
            ctx->pc = 0x27DA68u;
            goto label_27da68;
        }
    }
    ctx->pc = 0x27D7E8u;
    // 0x27d7e8: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x27d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_27d7ec:
    // 0x27d7ec: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27d7f0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27d7f4: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x27D7F4u;
    {
        const bool branch_taken_0x27d7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d7f4) {
            ctx->pc = 0x27D7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D7F4u;
            // 0x27d7f8: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D9E0u;
            goto label_27d9e0;
        }
    }
    ctx->pc = 0x27D7FCu;
    // 0x27d7fc: 0xc7818d50  lwc1        $f1, -0x72B0($gp)
    ctx->pc = 0x27d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d800: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x27d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d804: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x27d804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d808: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27d808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d80c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D80Cu;
    {
        const bool branch_taken_0x27d80c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d80c) {
            ctx->pc = 0x27D820u;
            goto label_27d820;
        }
    }
    ctx->pc = 0x27D814u;
    // 0x27d814: 0xc7808d54  lwc1        $f0, -0x72AC($gp)
    ctx->pc = 0x27d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D818u;
    {
        const bool branch_taken_0x27d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D818u;
        // 0x27d81c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d818) {
            ctx->pc = 0x27D838u;
            goto label_27d838;
        }
    }
    ctx->pc = 0x27D820u;
label_27d820:
    // 0x27d820: 0xc7808d58  lwc1        $f0, -0x72A8($gp)
    ctx->pc = 0x27d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d824: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d828: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27D828u;
    {
        const bool branch_taken_0x27d828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d828) {
            ctx->pc = 0x27D82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D828u;
            // 0x27d82c: 0x922301b2  lbu         $v1, 0x1B2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D83Cu;
            goto label_27d83c;
        }
    }
    ctx->pc = 0x27D830u;
    // 0x27d830: 0xc7808d5c  lwc1        $f0, -0x72A4($gp)
    ctx->pc = 0x27d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d834: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d834u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d838:
    // 0x27d838: 0x922301b2  lbu         $v1, 0x1B2($s1)
    ctx->pc = 0x27d838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 434)));
label_27d83c:
    // 0x27d83c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d840: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x27d840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x27d844: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27D844u;
    {
        const bool branch_taken_0x27d844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D844u;
        // 0x27d848: 0xe6220074  swc1        $f2, 0x74($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d844) {
            ctx->pc = 0x27D8C8u;
            goto label_27d8c8;
        }
    }
    ctx->pc = 0x27D84Cu;
    // 0x27d84c: 0xc7808d60  lwc1        $f0, -0x72A0($gp)
    ctx->pc = 0x27d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d850: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d854: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D854u;
    {
        const bool branch_taken_0x27d854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D854u;
        // 0x27d858: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d854) {
            ctx->pc = 0x27D868u;
            goto label_27d868;
        }
    }
    ctx->pc = 0x27D85Cu;
    // 0x27d85c: 0xc7808d64  lwc1        $f0, -0x729C($gp)
    ctx->pc = 0x27d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D860u;
    {
        const bool branch_taken_0x27d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D860u;
        // 0x27d864: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d860) {
            ctx->pc = 0x27D880u;
            goto label_27d880;
        }
    }
    ctx->pc = 0x27D868u;
label_27d868:
    // 0x27d868: 0xc7808d68  lwc1        $f0, -0x7298($gp)
    ctx->pc = 0x27d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d86c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D870u;
    {
        const bool branch_taken_0x27d870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d870) {
            ctx->pc = 0x27D880u;
            goto label_27d880;
        }
    }
    ctx->pc = 0x27D878u;
    // 0x27d878: 0xc7808d6c  lwc1        $f0, -0x7294($gp)
    ctx->pc = 0x27d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d87c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27d87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d880:
    // 0x27d880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d884: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27d884u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27d888: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d88c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D88Cu;
    {
        const bool branch_taken_0x27d88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d88c) {
            ctx->pc = 0x27D89Cu;
            goto label_27d89c;
        }
    }
    ctx->pc = 0x27D894u;
    // 0x27d894: 0xc7808d70  lwc1        $f0, -0x7290($gp)
    ctx->pc = 0x27d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d898: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d898u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d89c:
    // 0x27d89c: 0xc7808d74  lwc1        $f0, -0x728C($gp)
    ctx->pc = 0x27d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8a0: 0xc7818d78  lwc1        $f1, -0x7288($gp)
    ctx->pc = 0x27d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d8a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27d8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d8a8: 0x0  nop
    ctx->pc = 0x27d8a8u;
    // NOP
    // 0x27d8ac: 0x0  nop
    ctx->pc = 0x27d8acu;
    // NOP
    // 0x27d8b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d8b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d8b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d8b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d8b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d8bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27d8c0: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x27D8C0u;
    {
        const bool branch_taken_0x27d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8C0u;
        // 0x27d8c4: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8c0) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27D8C8u;
label_27d8c8:
    // 0x27d8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d8cc: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27D8CCu;
    {
        const bool branch_taken_0x27d8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8CCu;
        // 0x27d8d0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8cc) {
            ctx->pc = 0x27D958u;
            goto label_27d958;
        }
    }
    ctx->pc = 0x27D8D4u;
    // 0x27d8d4: 0xc7808d7c  lwc1        $f0, -0x7284($gp)
    ctx->pc = 0x27d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8d8: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27d8d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d8dc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d8e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D8E0u;
    {
        const bool branch_taken_0x27d8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8E0u;
        // 0x27d8e4: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8e0) {
            ctx->pc = 0x27D8F8u;
            goto label_27d8f8;
        }
    }
    ctx->pc = 0x27D8E8u;
    // 0x27d8e8: 0xc7808d80  lwc1        $f0, -0x7280($gp)
    ctx->pc = 0x27d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D8ECu;
    {
        const bool branch_taken_0x27d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8ECu;
        // 0x27d8f0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8ec) {
            ctx->pc = 0x27D910u;
            goto label_27d910;
        }
    }
    ctx->pc = 0x27D8F4u;
    // 0x27d8f4: 0x0  nop
    ctx->pc = 0x27d8f4u;
    // NOP
label_27d8f8:
    // 0x27d8f8: 0xc7808d84  lwc1        $f0, -0x727C($gp)
    ctx->pc = 0x27d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d900: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D900u;
    {
        const bool branch_taken_0x27d900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d900) {
            ctx->pc = 0x27D910u;
            goto label_27d910;
        }
    }
    ctx->pc = 0x27D908u;
    // 0x27d908: 0xc7808d88  lwc1        $f0, -0x7278($gp)
    ctx->pc = 0x27d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d90c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27d90cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d910:
    // 0x27d910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d914: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27d914u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27d918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d91c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D91Cu;
    {
        const bool branch_taken_0x27d91c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d91c) {
            ctx->pc = 0x27D92Cu;
            goto label_27d92c;
        }
    }
    ctx->pc = 0x27D924u;
    // 0x27d924: 0xc7808d8c  lwc1        $f0, -0x7274($gp)
    ctx->pc = 0x27d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d928: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d928u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d92c:
    // 0x27d92c: 0xc7808d90  lwc1        $f0, -0x7270($gp)
    ctx->pc = 0x27d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d930: 0xc7818d94  lwc1        $f1, -0x726C($gp)
    ctx->pc = 0x27d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d934: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27d934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d938: 0x0  nop
    ctx->pc = 0x27d938u;
    // NOP
    // 0x27d93c: 0x0  nop
    ctx->pc = 0x27d93cu;
    // NOP
    // 0x27d940: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d940u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d944: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d948: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d94c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x27D94Cu;
    {
        const bool branch_taken_0x27d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D94Cu;
        // 0x27d950: 0xa622007a  sh          $v0, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d94c) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D954u;
    // 0x27d954: 0x0  nop
    ctx->pc = 0x27d954u;
    // NOP
label_27d958:
    // 0x27d958: 0xc7808d98  lwc1        $f0, -0x7268($gp)
    ctx->pc = 0x27d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d95c: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27d95cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27d960: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d964: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x27d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x27d968: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x27d968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d96c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D96Cu;
    {
        const bool branch_taken_0x27d96c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D96Cu;
        // 0x27d970: 0xa622007a  sh          $v0, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d96c) {
            ctx->pc = 0x27D980u;
            goto label_27d980;
        }
    }
    ctx->pc = 0x27D974u;
    // 0x27d974: 0xc7808d9c  lwc1        $f0, -0x7264($gp)
    ctx->pc = 0x27d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D978u;
    {
        const bool branch_taken_0x27d978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D978u;
        // 0x27d97c: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d978) {
            ctx->pc = 0x27D998u;
            goto label_27d998;
        }
    }
    ctx->pc = 0x27D980u;
label_27d980:
    // 0x27d980: 0xc7808da0  lwc1        $f0, -0x7260($gp)
    ctx->pc = 0x27d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d984: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D988u;
    {
        const bool branch_taken_0x27d988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d988) {
            ctx->pc = 0x27D998u;
            goto label_27d998;
        }
    }
    ctx->pc = 0x27D990u;
    // 0x27d990: 0xc7808da4  lwc1        $f0, -0x725C($gp)
    ctx->pc = 0x27d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d994: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27d994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d998:
    // 0x27d998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d99c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27d99cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27d9a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27d9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d9a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D9A4u;
    {
        const bool branch_taken_0x27d9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d9a4) {
            ctx->pc = 0x27D9B4u;
            goto label_27d9b4;
        }
    }
    ctx->pc = 0x27D9ACu;
    // 0x27d9ac: 0xc7808da8  lwc1        $f0, -0x7258($gp)
    ctx->pc = 0x27d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d9b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27d9b4:
    // 0x27d9b4: 0xc7808dac  lwc1        $f0, -0x7254($gp)
    ctx->pc = 0x27d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9b8: 0xc7818db0  lwc1        $f1, -0x7250($gp)
    ctx->pc = 0x27d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d9bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27d9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d9c0: 0x0  nop
    ctx->pc = 0x27d9c0u;
    // NOP
    // 0x27d9c4: 0x0  nop
    ctx->pc = 0x27d9c4u;
    // NOP
    // 0x27d9c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d9c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d9cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d9ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d9d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d9d4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x27D9D4u;
    {
        const bool branch_taken_0x27d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9D4u;
        // 0x27d9d8: 0xa622007a  sh          $v0, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9d4) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27D9DCu;
    // 0x27d9dc: 0x0  nop
    ctx->pc = 0x27d9dcu;
    // NOP
label_27d9e0:
    // 0x27d9e0: 0xc7818db4  lwc1        $f1, -0x724C($gp)
    ctx->pc = 0x27d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d9e4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x27d9e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x27d9e8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x27d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x27d9ec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27d9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d9f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D9F0u;
    {
        const bool branch_taken_0x27d9f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9F0u;
        // 0x27d9f4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9f0) {
            ctx->pc = 0x27DA08u;
            goto label_27da08;
        }
    }
    ctx->pc = 0x27D9F8u;
    // 0x27d9f8: 0xc7808db8  lwc1        $f0, -0x7248($gp)
    ctx->pc = 0x27d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D9FCu;
    {
        const bool branch_taken_0x27d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9FCu;
        // 0x27da00: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9fc) {
            ctx->pc = 0x27DA20u;
            goto label_27da20;
        }
    }
    ctx->pc = 0x27DA04u;
    // 0x27da04: 0x0  nop
    ctx->pc = 0x27da04u;
    // NOP
label_27da08:
    // 0x27da08: 0xc7808dbc  lwc1        $f0, -0x7244($gp)
    ctx->pc = 0x27da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27da0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27da10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DA10u;
    {
        const bool branch_taken_0x27da10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27da10) {
            ctx->pc = 0x27DA20u;
            goto label_27da20;
        }
    }
    ctx->pc = 0x27DA18u;
    // 0x27da18: 0xc7808dc0  lwc1        $f0, -0x7240($gp)
    ctx->pc = 0x27da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da1c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27da1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27da20:
    // 0x27da20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27da20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27da24: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27da24u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x27da28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27da28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27da2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DA2Cu;
    {
        const bool branch_taken_0x27da2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27da2c) {
            ctx->pc = 0x27DA3Cu;
            goto label_27da3c;
        }
    }
    ctx->pc = 0x27DA34u;
    // 0x27da34: 0xc7808dc4  lwc1        $f0, -0x723C($gp)
    ctx->pc = 0x27da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27da38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27da3c:
    // 0x27da3c: 0xc7808dc8  lwc1        $f0, -0x7238($gp)
    ctx->pc = 0x27da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da40: 0xc7818dcc  lwc1        $f1, -0x7234($gp)
    ctx->pc = 0x27da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27da44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27da44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27da48: 0x0  nop
    ctx->pc = 0x27da48u;
    // NOP
    // 0x27da4c: 0x0  nop
    ctx->pc = 0x27da4cu;
    // NOP
    // 0x27da50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27da50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27da54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27da54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27da58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27da58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27da5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27da60: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x27DA60u;
    {
        const bool branch_taken_0x27da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA60u;
        // 0x27da64: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da60) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27DA68u;
label_27da68:
    // 0x27da68: 0x18600041  blez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x27DA68u;
    {
        const bool branch_taken_0x27da68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA68u;
        // 0x27da6c: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da68) {
            ctx->pc = 0x27DB70u;
            goto label_27db70;
        }
    }
    ctx->pc = 0x27DA70u;
    // 0x27da70: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27da74: 0x4420038  bltzl       $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27DA74u;
    {
        const bool branch_taken_0x27da74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27da74) {
            ctx->pc = 0x27DA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DA74u;
            // 0x27da78: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DA7Cu;
    // 0x27da7c: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x27da7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x27da80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da84: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27da88: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x27da88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27da8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27da8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27da90: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27DA90u;
    SET_GPR_U32(ctx, 31, 0x27DA98u);
    ctx->pc = 0x27DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA90u;
    // 0x27da94: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27DA90u, 0x27DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA98u;
label_27da98:
    // 0x27da98: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x27da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27da9c: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27da9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27daa0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27daa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27daa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27daa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27daa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27daac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27dab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27dab4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27dab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27dab8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27dabc: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27DABCu;
    SET_GPR_U32(ctx, 31, 0x27DAC4u);
    ctx->pc = 0x27DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DABCu;
    // 0x27dac0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27DABCu, 0x27DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAC4u;
label_27dac4:
    // 0x27dac4: 0xc7818dd0  lwc1        $f1, -0x7230($gp)
    ctx->pc = 0x27dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dac8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27dac8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27dacc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x27daccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dad0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27DAD0u;
    {
        const bool branch_taken_0x27dad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAD0u;
        // 0x27dad4: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dad0) {
            ctx->pc = 0x27DAE8u;
            goto label_27dae8;
        }
    }
    ctx->pc = 0x27DAD8u;
    // 0x27dad8: 0xc7808dd4  lwc1        $f0, -0x722C($gp)
    ctx->pc = 0x27dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27DADCu;
    {
        const bool branch_taken_0x27dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DADCu;
        // 0x27dae0: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dadc) {
            ctx->pc = 0x27DB00u;
            goto label_27db00;
        }
    }
    ctx->pc = 0x27DAE4u;
    // 0x27dae4: 0x0  nop
    ctx->pc = 0x27dae4u;
    // NOP
label_27dae8:
    // 0x27dae8: 0xc7808dd8  lwc1        $f0, -0x7228($gp)
    ctx->pc = 0x27dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27daec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27daecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27daf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DAF0u;
    {
        const bool branch_taken_0x27daf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27daf0) {
            ctx->pc = 0x27DB00u;
            goto label_27db00;
        }
    }
    ctx->pc = 0x27DAF8u;
    // 0x27daf8: 0xc7808ddc  lwc1        $f0, -0x7224($gp)
    ctx->pc = 0x27daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dafc: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x27dafcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27db00:
    // 0x27db00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27db00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db04: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x27db04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x27db08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27db08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27db0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DB0Cu;
    {
        const bool branch_taken_0x27db0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27db0c) {
            ctx->pc = 0x27DB1Cu;
            goto label_27db1c;
        }
    }
    ctx->pc = 0x27DB14u;
    // 0x27db14: 0xc7808de0  lwc1        $f0, -0x7220($gp)
    ctx->pc = 0x27db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27db18: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27db18u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27db1c:
    // 0x27db1c: 0xc7808de4  lwc1        $f0, -0x721C($gp)
    ctx->pc = 0x27db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27db20: 0xc7818de8  lwc1        $f1, -0x7218($gp)
    ctx->pc = 0x27db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db24: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27db24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27db28: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27db28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27db2c: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27db2cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x27db30: 0x0  nop
    ctx->pc = 0x27db30u;
    // NOP
    // 0x27db34: 0x0  nop
    ctx->pc = 0x27db34u;
    // NOP
    // 0x27db38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27db38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27db3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27db3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27db40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27db40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27db44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27db44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27db48: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27db48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27db4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DB4Cu;
    {
        const bool branch_taken_0x27db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB4Cu;
        // 0x27db50: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db4c) {
            ctx->pc = 0x27DB5Cu;
            goto label_27db5c;
        }
    }
    ctx->pc = 0x27DB54u;
    // 0x27db54: 0x0  nop
    ctx->pc = 0x27db54u;
    // NOP
label_27db58:
    // 0x27db58: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x27db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_27db5c:
    // 0x27db5c: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x27db5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
label_27db60:
    // 0x27db60: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27db60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_27db64:
    // 0x27db64: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x27DB64u;
    {
        const bool branch_taken_0x27db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB64u;
        // 0x27db68: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db64) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DB6Cu;
    // 0x27db6c: 0x0  nop
    ctx->pc = 0x27db6cu;
    // NOP
label_27db70:
    // 0x27db70: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x27db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27db74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27db78: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x27DB78u;
    {
        const bool branch_taken_0x27db78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db78) {
            ctx->pc = 0x27DB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DB78u;
            // 0x27db7c: 0x9222030e  lbu         $v0, 0x30E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCE4u;
            goto label_27dce4;
        }
    }
    ctx->pc = 0x27DB80u;
    // 0x27db80: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x27db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27db84: 0xc7828dec  lwc1        $f2, -0x7214($gp)
    ctx->pc = 0x27db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27db88: 0x8443001a  lh          $v1, 0x1A($v0)
    ctx->pc = 0x27db88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x27db8c: 0xc7818df0  lwc1        $f1, -0x7210($gp)
    ctx->pc = 0x27db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27db90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27db94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27db98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27db98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27db9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27db9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27dba0: 0x0  nop
    ctx->pc = 0x27dba0u;
    // NOP
    // 0x27dba4: 0x0  nop
    ctx->pc = 0x27dba4u;
    // NOP
    // 0x27dba8: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x27dba8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[1];
    // 0x27dbac: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x27dbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dbb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27DBB0u;
    {
        const bool branch_taken_0x27dbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dbb0) {
            ctx->pc = 0x27DBC8u;
            goto label_27dbc8;
        }
    }
    ctx->pc = 0x27DBB8u;
    // 0x27dbb8: 0xc7808df4  lwc1        $f0, -0x720C($gp)
    ctx->pc = 0x27dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27DBBCu;
    {
        const bool branch_taken_0x27dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBBCu;
        // 0x27dbc0: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbbc) {
            ctx->pc = 0x27DBE0u;
            goto label_27dbe0;
        }
    }
    ctx->pc = 0x27DBC4u;
    // 0x27dbc4: 0x0  nop
    ctx->pc = 0x27dbc4u;
    // NOP
label_27dbc8:
    // 0x27dbc8: 0xc7808df8  lwc1        $f0, -0x7208($gp)
    ctx->pc = 0x27dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbcc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27dbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dbd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27DBD0u;
    {
        const bool branch_taken_0x27dbd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dbd0) {
            ctx->pc = 0x27DBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DBD0u;
            // 0x27dbd4: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DBE4u;
            goto label_27dbe4;
        }
    }
    ctx->pc = 0x27DBD8u;
    // 0x27dbd8: 0xc7808dfc  lwc1        $f0, -0x7204($gp)
    ctx->pc = 0x27dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbdc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27dbdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27dbe0:
    // 0x27dbe0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x27dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dbe4:
    // 0x27dbe4: 0xc7818e00  lwc1        $f1, -0x7200($gp)
    ctx->pc = 0x27dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dbe8: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x27dbe8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27dbec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27dbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dbf0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27DBF0u;
    {
        const bool branch_taken_0x27dbf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dbf0) {
            ctx->pc = 0x27DC08u;
            goto label_27dc08;
        }
    }
    ctx->pc = 0x27DBF8u;
    // 0x27dbf8: 0xc7808e04  lwc1        $f0, -0x71FC($gp)
    ctx->pc = 0x27dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27DBFCu;
    {
        const bool branch_taken_0x27dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBFCu;
        // 0x27dc00: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbfc) {
            ctx->pc = 0x27DC20u;
            goto label_27dc20;
        }
    }
    ctx->pc = 0x27DC04u;
    // 0x27dc04: 0x0  nop
    ctx->pc = 0x27dc04u;
    // NOP
label_27dc08:
    // 0x27dc08: 0xc7808e08  lwc1        $f0, -0x71F8($gp)
    ctx->pc = 0x27dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27dc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DC10u;
    {
        const bool branch_taken_0x27dc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dc10) {
            ctx->pc = 0x27DC20u;
            goto label_27dc20;
        }
    }
    ctx->pc = 0x27DC18u;
    // 0x27dc18: 0xc7808e0c  lwc1        $f0, -0x71F4($gp)
    ctx->pc = 0x27dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc1c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27dc1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27dc20:
    // 0x27dc20: 0xc7808e10  lwc1        $f0, -0x71F0($gp)
    ctx->pc = 0x27dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc24: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x27dc24u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x27dc28: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x27dc28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x27dc2c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x27dc2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x27dc30: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x27dc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27DC34u;
    {
        const bool branch_taken_0x27dc34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC34u;
        // 0x27dc38: 0xe6220074  swc1        $f2, 0x74($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc34) {
            ctx->pc = 0x27DC48u;
            goto label_27dc48;
        }
    }
    ctx->pc = 0x27DC3Cu;
    // 0x27dc3c: 0xc7808e14  lwc1        $f0, -0x71EC($gp)
    ctx->pc = 0x27dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27DC40u;
    {
        const bool branch_taken_0x27dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC40u;
        // 0x27dc44: 0x46001841  sub.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc40) {
            ctx->pc = 0x27DC60u;
            goto label_27dc60;
        }
    }
    ctx->pc = 0x27DC48u;
label_27dc48:
    // 0x27dc48: 0xc7808e18  lwc1        $f0, -0x71E8($gp)
    ctx->pc = 0x27dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc4c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27dc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DC50u;
    {
        const bool branch_taken_0x27dc50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dc50) {
            ctx->pc = 0x27DC60u;
            goto label_27dc60;
        }
    }
    ctx->pc = 0x27DC58u;
    // 0x27dc58: 0xc7808e1c  lwc1        $f0, -0x71E4($gp)
    ctx->pc = 0x27dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc5c: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x27dc5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27dc60:
    // 0x27dc60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27dc60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dc64: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x27dc64u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x27dc68: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27dc68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DC6Cu;
    {
        const bool branch_taken_0x27dc6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dc6c) {
            ctx->pc = 0x27DC7Cu;
            goto label_27dc7c;
        }
    }
    ctx->pc = 0x27DC74u;
    // 0x27dc74: 0xc7808e20  lwc1        $f0, -0x71E0($gp)
    ctx->pc = 0x27dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc78: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27dc78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27dc7c:
    // 0x27dc7c: 0xc7808e24  lwc1        $f0, -0x71DC($gp)
    ctx->pc = 0x27dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc80: 0xc7818e28  lwc1        $f1, -0x71D8($gp)
    ctx->pc = 0x27dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dc84: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27dc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27dc88: 0x0  nop
    ctx->pc = 0x27dc88u;
    // NOP
    // 0x27dc8c: 0x0  nop
    ctx->pc = 0x27dc8cu;
    // NOP
    // 0x27dc90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27dc90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27dc94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27dc94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27dc98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27dc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27dc9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27dca0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27DCA0u;
    {
        const bool branch_taken_0x27dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCA0u;
        // 0x27dca4: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dca0) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27DCA8u;
label_27dca8:
    // 0x27dca8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x27dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x27dcac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27dcb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DCB0u;
    {
        const bool branch_taken_0x27dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dcb0) {
            ctx->pc = 0x27DCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DCB0u;
            // 0x27dcb4: 0x9622008a  lhu         $v0, 0x8A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DCD0u;
            goto label_27dcd0;
        }
    }
    ctx->pc = 0x27DCB8u;
    // 0x27dcb8: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x27dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27dcbc: 0x9623008a  lhu         $v1, 0x8A($s1)
    ctx->pc = 0x27dcbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x27dcc0: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x27dcc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27dcc4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27dcc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27DCC8u;
    {
        const bool branch_taken_0x27dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCC8u;
        // 0x27dccc: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcc8) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DCD0u;
label_27dcd0:
    // 0x27dcd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DCD0u;
    {
        const bool branch_taken_0x27dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD0u;
        // 0x27dcd4: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcd0) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DCD8u;
label_27dcd8:
    // 0x27dcd8: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x27dcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27dcdc: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x27dcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
label_27dce0:
    // 0x27dce0: 0x9222030e  lbu         $v0, 0x30E($s1)
    ctx->pc = 0x27dce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 782)));
label_27dce4:
    // 0x27dce4: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x27DCE4u;
    {
        const bool branch_taken_0x27dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCE4u;
        // 0x27dce8: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dce4) {
            ctx->pc = 0x27DF64u;
            goto label_27df64;
        }
    }
    ctx->pc = 0x27DCECu;
    // 0x27dcec: 0x31033c00  andi        $v1, $t0, 0x3C00
    ctx->pc = 0x27dcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15360);
    // 0x27dcf0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x27dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27dcf4: 0x50620048  beql        $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x27DCF4u;
    {
        const bool branch_taken_0x27dcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27dcf4) {
            ctx->pc = 0x27DCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DCF4u;
            // 0x27dcf8: 0x86220096  lh          $v0, 0x96($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DE18u;
            goto label_27de18;
        }
    }
    ctx->pc = 0x27DCFCu;
    // 0x27dcfc: 0x28621001  slti        $v0, $v1, 0x1001
    ctx->pc = 0x27dcfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x27dd00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27DD00u;
    {
        const bool branch_taken_0x27dd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD00u;
        // 0x27dd04: 0x24021800  addiu       $v0, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd00) {
            ctx->pc = 0x27DD48u;
            goto label_27dd48;
        }
    }
    ctx->pc = 0x27DD08u;
    // 0x27dd08: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x27dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27dd0c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27DD0Cu;
    {
        const bool branch_taken_0x27dd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD0Cu;
        // 0x27dd10: 0x28620401  slti        $v0, $v1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd0c) {
            ctx->pc = 0x27DD88u;
            goto label_27dd88;
        }
    }
    ctx->pc = 0x27DD14u;
    // 0x27dd14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DD14u;
    {
        const bool branch_taken_0x27dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD14u;
        // 0x27dd18: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd14) {
            ctx->pc = 0x27DD30u;
            goto label_27dd30;
        }
    }
    ctx->pc = 0x27DD1Cu;
    // 0x27dd1c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x27DD1Cu;
    {
        const bool branch_taken_0x27dd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dd1c) {
            ctx->pc = 0x27DD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DD1Cu;
            // 0x27dd20: 0x86230096  lh          $v1, 0x96($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DD78u;
            goto label_27dd78;
        }
    }
    ctx->pc = 0x27DD24u;
    // 0x27dd24: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x27DD24u;
    {
        const bool branch_taken_0x27dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD24u;
        // 0x27dd28: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd24) {
            ctx->pc = 0x27DF64u;
            goto label_27df64;
        }
    }
    ctx->pc = 0x27DD2Cu;
    // 0x27dd2c: 0x0  nop
    ctx->pc = 0x27dd2cu;
    // NOP
label_27dd30:
    // 0x27dd30: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27DD30u;
    {
        const bool branch_taken_0x27dd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD30u;
        // 0x27dd34: 0x24020c00  addiu       $v0, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd30) {
            ctx->pc = 0x27DDD8u;
            goto label_27ddd8;
        }
    }
    ctx->pc = 0x27DD38u;
    // 0x27dd38: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27DD38u;
    {
        const bool branch_taken_0x27dd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD38u;
        // 0x27dd3c: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd38) {
            ctx->pc = 0x27DDF0u;
            goto label_27ddf0;
        }
    }
    ctx->pc = 0x27DD40u;
    // 0x27dd40: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x27DD40u;
    {
        const bool branch_taken_0x27dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD40u;
        // 0x27dd44: 0x2c620038  sltiu       $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd40) {
            ctx->pc = 0x27DF68u;
            goto label_27df68;
        }
    }
    ctx->pc = 0x27DD48u;
label_27dd48:
    // 0x27dd48: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x27DD48u;
    {
        const bool branch_taken_0x27dd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD48u;
        // 0x27dd4c: 0x28621801  slti        $v0, $v1, 0x1801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6145) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd48) {
            ctx->pc = 0x27DE40u;
            goto label_27de40;
        }
    }
    ctx->pc = 0x27DD50u;
    // 0x27dd50: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x27DD50u;
    {
        const bool branch_taken_0x27dd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dd50) {
            ctx->pc = 0x27DD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DD50u;
            // 0x27dd54: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DF64u;
            goto label_27df64;
        }
    }
    ctx->pc = 0x27DD58u;
    // 0x27dd58: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x27dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x27dd5c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x27DD5Cu;
    {
        const bool branch_taken_0x27dd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd5c) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DD64u;
    // 0x27dd64: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x27DD64u;
    {
        const bool branch_taken_0x27dd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD64u;
        // 0x27dd68: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd64) {
            ctx->pc = 0x27DF30u;
            goto label_27df30;
        }
    }
    ctx->pc = 0x27DD6Cu;
    // 0x27dd6c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x27DD6Cu;
    {
        const bool branch_taken_0x27dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD6Cu;
        // 0x27dd70: 0x2c620038  sltiu       $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd6c) {
            ctx->pc = 0x27DF68u;
            goto label_27df68;
        }
    }
    ctx->pc = 0x27DD74u;
    // 0x27dd74: 0x0  nop
    ctx->pc = 0x27dd74u;
    // NOP
label_27dd78:
    // 0x27dd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27dd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27dd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd80: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x27DD80u;
    {
        const bool branch_taken_0x27dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD80u;
        // 0x27dd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd80) {
            ctx->pc = 0x27DF40u;
            goto label_27df40;
        }
    }
    ctx->pc = 0x27DD88u;
label_27dd88:
    // 0x27dd88: 0x92230190  lbu         $v1, 0x190($s1)
    ctx->pc = 0x27dd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x27dd8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27dd90: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DD90u;
    {
        const bool branch_taken_0x27dd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD90u;
        // 0x27dd94: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd90) {
            ctx->pc = 0x27DDB0u;
            goto label_27ddb0;
        }
    }
    ctx->pc = 0x27DD98u;
    // 0x27dd98: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x27dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27dd9c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x27dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27dda0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27dda4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DDA4u;
    {
        const bool branch_taken_0x27dda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDA4u;
        // 0x27dda8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dda4) {
            ctx->pc = 0x27DDB0u;
            goto label_27ddb0;
        }
    }
    ctx->pc = 0x27DDACu;
    // 0x27ddac: 0xa22201b8  sb          $v0, 0x1B8($s1)
    ctx->pc = 0x27ddacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 2));
label_27ddb0:
    // 0x27ddb0: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27ddb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27ddb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ddb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ddb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ddbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ddbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27ddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ddc4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27ddc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27ddc8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27ddcc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x27DDCCu;
    {
        const bool branch_taken_0x27ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDCCu;
        // 0x27ddd0: 0x9226030f  lbu         $a2, 0x30F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 783)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddcc) {
            ctx->pc = 0x27DF54u;
            goto label_27df54;
        }
    }
    ctx->pc = 0x27DDD4u;
    // 0x27ddd4: 0x0  nop
    ctx->pc = 0x27ddd4u;
    // NOP
label_27ddd8:
    // 0x27ddd8: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27ddd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27dddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27dde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27dde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dde4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x27DDE4u;
    {
        const bool branch_taken_0x27dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDE4u;
        // 0x27dde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dde4) {
            ctx->pc = 0x27DF40u;
            goto label_27df40;
        }
    }
    ctx->pc = 0x27DDECu;
    // 0x27ddec: 0x0  nop
    ctx->pc = 0x27ddecu;
    // NOP
label_27ddf0:
    // 0x27ddf0: 0x86220096  lh          $v0, 0x96($s1)
    ctx->pc = 0x27ddf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27ddf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ddf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ddfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ddfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27de00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27de04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27de08: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27de08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27de0c: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27de10: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x27DE10u;
    {
        const bool branch_taken_0x27de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE10u;
        // 0x27de14: 0xa22301b8  sb          $v1, 0x1B8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de10) {
            ctx->pc = 0x27DF4Cu;
            goto label_27df4c;
        }
    }
    ctx->pc = 0x27DE18u;
label_27de18:
    // 0x27de18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27de1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27de20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27de20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27de2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27de2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27de30: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27de34: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x27DE34u;
    {
        const bool branch_taken_0x27de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE34u;
        // 0x27de38: 0xa22301b8  sb          $v1, 0x1B8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de34) {
            ctx->pc = 0x27DF4Cu;
            goto label_27df4c;
        }
    }
    ctx->pc = 0x27DE3Cu;
    // 0x27de3c: 0x0  nop
    ctx->pc = 0x27de3cu;
    // NOP
label_27de40:
    // 0x27de40: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27de44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27DE44u;
    {
        const bool branch_taken_0x27de44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE44u;
        // 0x27de48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de44) {
            ctx->pc = 0x27DE68u;
            goto label_27de68;
        }
    }
    ctx->pc = 0x27DE4Cu;
    // 0x27de4c: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27de50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27de50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de54: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x27de54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27de58: 0xc09eb2e  jal         func_27ACB8
    ctx->pc = 0x27DE58u;
    SET_GPR_U32(ctx, 31, 0x27DE60u);
    ctx->pc = 0x27DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE58u;
    // 0x27de5c: 0x30c60080  andi        $a2, $a2, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ACB8u, 0x27DE58u, 0x27DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE60u;
label_27de60:
    // 0x27de60: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27DE60u;
    {
        const bool branch_taken_0x27de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE60u;
        // 0x27de64: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de60) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DE68u;
label_27de68:
    // 0x27de68: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DE68u;
    {
        const bool branch_taken_0x27de68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE68u;
        // 0x27de6c: 0x8e220310  lw          $v0, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de68) {
            ctx->pc = 0x27DE90u;
            goto label_27de90;
        }
    }
    ctx->pc = 0x27DE70u;
    // 0x27de70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27de74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de78: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x27de78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27de7c: 0xc09eb2e  jal         func_27ACB8
    ctx->pc = 0x27DE7Cu;
    SET_GPR_U32(ctx, 31, 0x27DE84u);
    ctx->pc = 0x27DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE7Cu;
    // 0x27de80: 0x30c60080  andi        $a2, $a2, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ACB8u, 0x27DE7Cu, 0x27DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE84u;
label_27de84:
    // 0x27de84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27DE84u;
    {
        const bool branch_taken_0x27de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE84u;
        // 0x27de88: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de84) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DE8Cu;
    // 0x27de8c: 0x0  nop
    ctx->pc = 0x27de8cu;
    // NOP
label_27de90:
    // 0x27de90: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x27de90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27de94: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x27de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x27de98: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x27DE98u;
    {
        const bool branch_taken_0x27de98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE98u;
        // 0x27de9c: 0x30c60080  andi        $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de98) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DEA0u;
    // 0x27dea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dea4: 0xc09eb2e  jal         func_27ACB8
    ctx->pc = 0x27DEA4u;
    SET_GPR_U32(ctx, 31, 0x27DEACu);
    ctx->pc = 0x27DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEA4u;
    // 0x27dea8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ACB8u, 0x27DEA4u, 0x27DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEACu;
label_27deac:
    // 0x27deac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27DEACu;
    {
        const bool branch_taken_0x27deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEACu;
        // 0x27deb0: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deac) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DEB4u;
    // 0x27deb4: 0x0  nop
    ctx->pc = 0x27deb4u;
    // NOP
label_27deb8:
    // 0x27deb8: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27deb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27debc: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DEBCu;
    {
        const bool branch_taken_0x27debc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27debc) {
            ctx->pc = 0x27DEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DEBCu;
            // 0x27dec0: 0xa62002b0  sh          $zero, 0x2B0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 688), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DED4u;
            goto label_27ded4;
        }
    }
    ctx->pc = 0x27DEC4u;
    // 0x27dec4: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x27dec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x27dec8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DEC8u;
    {
        const bool branch_taken_0x27dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dec8) {
            ctx->pc = 0x27DECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DEC8u;
            // 0x27decc: 0x8e230310  lw          $v1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DEE8u;
            goto label_27dee8;
        }
    }
    ctx->pc = 0x27DED0u;
    // 0x27ded0: 0xa62002b0  sh          $zero, 0x2B0($s1)
    ctx->pc = 0x27ded0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 688), (uint16_t)GPR_U32(ctx, 0));
label_27ded4:
    // 0x27ded4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ded8: 0xc09eb9a  jal         func_27AE68
    ctx->pc = 0x27DED8u;
    SET_GPR_U32(ctx, 31, 0x27DEE0u);
    ctx->pc = 0x27DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DED8u;
    // 0x27dedc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AE68u, 0x27DED8u, 0x27DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEE0u;
label_27dee0:
    // 0x27dee0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27DEE0u;
    {
        const bool branch_taken_0x27dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEE0u;
        // 0x27dee4: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dee0) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DEE8u;
label_27dee8:
    // 0x27dee8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x27deec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27def0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DEF0u;
    {
        const bool branch_taken_0x27def0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF0u;
        // 0x27def4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27def0) {
            ctx->pc = 0x27DF08u;
            goto label_27df08;
        }
    }
    ctx->pc = 0x27DEF8u;
    // 0x27def8: 0xc09eb9a  jal         func_27AE68
    ctx->pc = 0x27DEF8u;
    SET_GPR_U32(ctx, 31, 0x27DF00u);
    ctx->pc = 0x27DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEF8u;
    // 0x27defc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AE68u, 0x27DEF8u, 0x27DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF00u;
label_27df00:
    // 0x27df00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27DF00u;
    {
        const bool branch_taken_0x27df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF00u;
        // 0x27df04: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df00) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DF08u;
label_27df08:
    // 0x27df08: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27df0c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x27df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x27df10: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x27df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x27df14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DF14u;
    {
        const bool branch_taken_0x27df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF14u;
        // 0x27df18: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df14) {
            ctx->pc = 0x27DF64u;
            goto label_27df64;
        }
    }
    ctx->pc = 0x27DF1Cu;
    // 0x27df1c: 0xc09eb9a  jal         func_27AE68
    ctx->pc = 0x27DF1Cu;
    SET_GPR_U32(ctx, 31, 0x27DF24u);
    ctx->pc = 0x27DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF1Cu;
    // 0x27df20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AE68u, 0x27DF1Cu, 0x27DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF24u;
label_27df24:
    // 0x27df24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27DF24u;
    {
        const bool branch_taken_0x27df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF24u;
        // 0x27df28: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df24) {
            ctx->pc = 0x27DF60u;
            goto label_27df60;
        }
    }
    ctx->pc = 0x27DF2Cu;
    // 0x27df2c: 0x0  nop
    ctx->pc = 0x27df2cu;
    // NOP
label_27df30:
    // 0x27df30: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27df30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27df34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27df34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27df3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27df3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27df40:
    // 0x27df40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x27df40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27df44: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27df44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27df48: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_27df4c:
    // 0x27df4c: 0x9226030f  lbu         $a2, 0x30F($s1)
    ctx->pc = 0x27df4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 783)));
    // 0x27df50: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27df50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27df54:
    // 0x27df54: 0xc09ea78  jal         func_27A9E0
    ctx->pc = 0x27DF54u;
    SET_GPR_U32(ctx, 31, 0x27DF5Cu);
    ctx->pc = 0x27DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF54u;
    // 0x27df58: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A9E0u, 0x27DF54u, 0x27DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF5Cu;
label_27df5c:
    // 0x27df5c: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27df5cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27df60:
    // 0x27df60: 0x3103003f  andi        $v1, $t0, 0x3F
    ctx->pc = 0x27df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_27df64:
    // 0x27df64: 0x2c620038  sltiu       $v0, $v1, 0x38
    ctx->pc = 0x27df64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
label_27df68:
    // 0x27df68: 0x50400213  beql        $v0, $zero, . + 4 + (0x213 << 2)
    ctx->pc = 0x27DF68u;
    {
        const bool branch_taken_0x27df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df68) {
            ctx->pc = 0x27DF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF68u;
            // 0x27df6c: 0x31033c00  andi        $v1, $t0, 0x3C00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15360);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E7B8u;
            goto label_27e7b8;
        }
    }
    ctx->pc = 0x27DF70u;
    // 0x27df70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27df74: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x27df78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27df7c: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x27df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
    // 0x27df80: 0x600008  jr          $v1
    ctx->pc = 0x27DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DF88u: goto label_27df88;
            case 0x27DF98u: goto label_27df98;
            case 0x27DFB8u: goto label_27dfb8;
            case 0x27DFD8u: goto label_27dfd8;
            case 0x27DFF8u: goto label_27dff8;
            case 0x27E018u: goto label_27e018;
            case 0x27E038u: goto label_27e038;
            case 0x27E058u: goto label_27e058;
            case 0x27E060u: goto label_27e060;
            case 0x27E068u: goto label_27e068;
            case 0x27E070u: goto label_27e070;
            case 0x27E078u: goto label_27e078;
            case 0x27E080u: goto label_27e080;
            case 0x27E088u: goto label_27e088;
            case 0x27E0E8u: goto label_27e0e8;
            case 0x27E0F8u: goto label_27e0f8;
            case 0x27E110u: goto label_27e110;
            case 0x27E118u: goto label_27e118;
            case 0x27E128u: goto label_27e128;
            case 0x27E138u: goto label_27e138;
            case 0x27E148u: goto label_27e148;
            case 0x27E158u: goto label_27e158;
            case 0x27E168u: goto label_27e168;
            case 0x27E178u: goto label_27e178;
            case 0x27E188u: goto label_27e188;
            case 0x27E198u: goto label_27e198;
            case 0x27E1A8u: goto label_27e1a8;
            case 0x27E1B8u: goto label_27e1b8;
            case 0x27E1C8u: goto label_27e1c8;
            case 0x27E1D8u: goto label_27e1d8;
            case 0x27E1E8u: goto label_27e1e8;
            case 0x27E1F0u: goto label_27e1f0;
            case 0x27E200u: goto label_27e200;
            case 0x27E220u: goto label_27e220;
            case 0x27E238u: goto label_27e238;
            case 0x27E240u: goto label_27e240;
            case 0x27E248u: goto label_27e248;
            case 0x27E270u: goto label_27e270;
            case 0x27E280u: goto label_27e280;
            case 0x27E2A8u: goto label_27e2a8;
            case 0x27E2B0u: goto label_27e2b0;
            case 0x27E2C8u: goto label_27e2c8;
            case 0x27E350u: goto label_27e350;
            case 0x27E3D8u: goto label_27e3d8;
            case 0x27E428u: goto label_27e428;
            case 0x27E4E0u: goto label_27e4e0;
            case 0x27E500u: goto label_27e500;
            case 0x27E5C8u: goto label_27e5c8;
            case 0x27E6A0u: goto label_27e6a0;
            case 0x27E6D0u: goto label_27e6d0;
            case 0x27E7B4u: goto label_27e7b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27DF88u;
label_27df88:
    // 0x27df88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27df8c: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x27DF8Cu;
    {
        const bool branch_taken_0x27df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF8Cu;
        // 0x27df90: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df8c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27DF94u;
    // 0x27df94: 0x0  nop
    ctx->pc = 0x27df94u;
    // NOP
label_27df98:
    // 0x27df98: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27df98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27df9c: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27df9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27dfa0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DFA0u;
    {
        const bool branch_taken_0x27dfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfa0) {
            ctx->pc = 0x27DFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DFA0u;
            // 0x27dfa4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFACu;
            goto label_27dfac;
        }
    }
    ctx->pc = 0x27DFA8u;
    // 0x27dfa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27dfac:
    // 0x27dfac: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFACu;
        // 0x27dfb0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27DFB4u;
    // 0x27dfb4: 0x0  nop
    ctx->pc = 0x27dfb4u;
    // NOP
label_27dfb8:
    // 0x27dfb8: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27dfb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27dfbc: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27dfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27dfc0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DFC0u;
    {
        const bool branch_taken_0x27dfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfc0) {
            ctx->pc = 0x27DFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DFC0u;
            // 0x27dfc4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFCCu;
            goto label_27dfcc;
        }
    }
    ctx->pc = 0x27DFC8u;
    // 0x27dfc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27dfcc:
    // 0x27dfcc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x27DFCCu;
    {
        const bool branch_taken_0x27dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFCCu;
        // 0x27dfd0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfcc) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27DFD4u;
    // 0x27dfd4: 0x0  nop
    ctx->pc = 0x27dfd4u;
    // NOP
label_27dfd8:
    // 0x27dfd8: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27dfdc: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27dfe0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DFE0u;
    {
        const bool branch_taken_0x27dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfe0) {
            ctx->pc = 0x27DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DFE0u;
            // 0x27dfe4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFECu;
            goto label_27dfec;
        }
    }
    ctx->pc = 0x27DFE8u;
    // 0x27dfe8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27dfec:
    // 0x27dfec: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x27DFECu;
    {
        const bool branch_taken_0x27dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFECu;
        // 0x27dff0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfec) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27DFF4u;
    // 0x27dff4: 0x0  nop
    ctx->pc = 0x27dff4u;
    // NOP
label_27dff8:
    // 0x27dff8: 0x86220084  lh          $v0, 0x84($s1)
    ctx->pc = 0x27dff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x27dffc: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27dffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e000: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E000u;
    {
        const bool branch_taken_0x27e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e000) {
            ctx->pc = 0x27E004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E000u;
            // 0x27e004: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E00Cu;
            goto label_27e00c;
        }
    }
    ctx->pc = 0x27E008u;
    // 0x27e008: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27e00c:
    // 0x27e00c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x27E00Cu;
    {
        const bool branch_taken_0x27e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E00Cu;
        // 0x27e010: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e00c) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E014u;
    // 0x27e014: 0x0  nop
    ctx->pc = 0x27e014u;
    // NOP
label_27e018:
    // 0x27e018: 0x86220084  lh          $v0, 0x84($s1)
    ctx->pc = 0x27e018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x27e01c: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27e01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e020: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E020u;
    {
        const bool branch_taken_0x27e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e020) {
            ctx->pc = 0x27E024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E020u;
            // 0x27e024: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E02Cu;
            goto label_27e02c;
        }
    }
    ctx->pc = 0x27E028u;
    // 0x27e028: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27e02c:
    // 0x27e02c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x27E02Cu;
    {
        const bool branch_taken_0x27e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E02Cu;
        // 0x27e030: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e02c) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E034u;
    // 0x27e034: 0x0  nop
    ctx->pc = 0x27e034u;
    // NOP
label_27e038:
    // 0x27e038: 0x86220084  lh          $v0, 0x84($s1)
    ctx->pc = 0x27e038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x27e03c: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27e03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e040: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E040u;
    {
        const bool branch_taken_0x27e040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e040) {
            ctx->pc = 0x27E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E040u;
            // 0x27e044: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E04Cu;
            goto label_27e04c;
        }
    }
    ctx->pc = 0x27E048u;
    // 0x27e048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27e04c:
    // 0x27e04c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x27E04Cu;
    {
        const bool branch_taken_0x27e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E04Cu;
        // 0x27e050: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e04c) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E054u;
    // 0x27e054: 0x0  nop
    ctx->pc = 0x27e054u;
    // NOP
label_27e058:
    // 0x27e058: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x27E058u;
    {
        const bool branch_taken_0x27e058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E058u;
        // 0x27e05c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e058) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E060u;
label_27e060:
    // 0x27e060: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x27E060u;
    {
        const bool branch_taken_0x27e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E060u;
        // 0x27e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e060) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E068u;
label_27e068:
    // 0x27e068: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x27E068u;
    {
        const bool branch_taken_0x27e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E068u;
        // 0x27e06c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e068) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x27E070u;
    {
        const bool branch_taken_0x27e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E070u;
        // 0x27e074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e070) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E078u;
label_27e078:
    // 0x27e078: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x27E078u;
    {
        const bool branch_taken_0x27e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E078u;
        // 0x27e07c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e078) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E080u;
label_27e080:
    // 0x27e080: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x27E080u;
    {
        const bool branch_taken_0x27e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E080u;
        // 0x27e084: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e080) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E088u;
label_27e088:
    // 0x27e088: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x27e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e08c: 0x8e240310  lw          $a0, 0x310($s1)
    ctx->pc = 0x27e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27e090: 0xa223019b  sb          $v1, 0x19B($s1)
    ctx->pc = 0x27e090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e094: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x27e094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x27e098: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x27e098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27e09c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x27e0a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27e0a4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E0A4u;
    {
        const bool branch_taken_0x27e0a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x27E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0A4u;
        // 0x27e0a8: 0xa62202b2  sh          $v0, 0x2B2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0a4) {
            ctx->pc = 0x27E0B4u;
            goto label_27e0b4;
        }
    }
    ctx->pc = 0x27E0ACu;
    // 0x27e0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e0b0: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
label_27e0b4:
    // 0x27e0b4: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x27e0b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e0b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e0bc: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27e0bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e0c0: 0x862502b2  lh          $a1, 0x2B2($s1)
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x27e0c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e0c8: 0xa2240186  sb          $a0, 0x186($s1)
    ctx->pc = 0x27e0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 390), (uint8_t)GPR_U32(ctx, 4));
    // 0x27e0cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27e0d0: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x27e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x27e0d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e0d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27e0d8: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x27e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x27e0dc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x27E0DCu;
    {
        const bool branch_taken_0x27e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0DCu;
        // 0x27e0e0: 0x45001a  div         $zero, $v0, $a1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0dc) {
            ctx->pc = 0x27E3C8u;
            goto label_27e3c8;
        }
    }
    ctx->pc = 0x27E0E4u;
    // 0x27e0e4: 0x0  nop
    ctx->pc = 0x27e0e4u;
    // NOP
label_27e0e8:
    // 0x27e0e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27e0ec: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x27E0ECu;
    {
        const bool branch_taken_0x27e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0ECu;
        // 0x27e0f0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0ec) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E0F4u;
    // 0x27e0f4: 0x0  nop
    ctx->pc = 0x27e0f4u;
    // NOP
label_27e0f8:
    // 0x27e0f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27e0fc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x27e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27e100: 0xa222019b  sb          $v0, 0x19B($s1)
    ctx->pc = 0x27e100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e104: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27E104u;
    {
        const bool branch_taken_0x27e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E104u;
        // 0x27e108: 0xa62302c4  sh          $v1, 0x2C4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 708), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e104) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E10Cu;
    // 0x27e10c: 0x0  nop
    ctx->pc = 0x27e10cu;
    // NOP
label_27e110:
    // 0x27e110: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x27E110u;
    {
        const bool branch_taken_0x27e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E110u;
        // 0x27e114: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e110) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E118u;
label_27e118:
    // 0x27e118: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x27e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27e11c: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x27E11Cu;
    {
        const bool branch_taken_0x27e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E11Cu;
        // 0x27e120: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e11c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E124u;
    // 0x27e124: 0x0  nop
    ctx->pc = 0x27e124u;
    // NOP
label_27e128:
    // 0x27e128: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x27e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27e12c: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x27E12Cu;
    {
        const bool branch_taken_0x27e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E12Cu;
        // 0x27e130: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e12c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E134u;
    // 0x27e134: 0x0  nop
    ctx->pc = 0x27e134u;
    // NOP
label_27e138:
    // 0x27e138: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27e13c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x27E13Cu;
    {
        const bool branch_taken_0x27e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E13Cu;
        // 0x27e140: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e13c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E144u;
    // 0x27e144: 0x0  nop
    ctx->pc = 0x27e144u;
    // NOP
label_27e148:
    // 0x27e148: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27e14c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x27E14Cu;
    {
        const bool branch_taken_0x27e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E14Cu;
        // 0x27e150: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e14c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E154u;
    // 0x27e154: 0x0  nop
    ctx->pc = 0x27e154u;
    // NOP
label_27e158:
    // 0x27e158: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x27e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27e15c: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x27E15Cu;
    {
        const bool branch_taken_0x27e15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E15Cu;
        // 0x27e160: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e15c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E164u;
    // 0x27e164: 0x0  nop
    ctx->pc = 0x27e164u;
    // NOP
label_27e168:
    // 0x27e168: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27e16c: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x27E16Cu;
    {
        const bool branch_taken_0x27e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E16Cu;
        // 0x27e170: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e16c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E174u;
    // 0x27e174: 0x0  nop
    ctx->pc = 0x27e174u;
    // NOP
label_27e178:
    // 0x27e178: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27e17c: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x27E17Cu;
    {
        const bool branch_taken_0x27e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E17Cu;
        // 0x27e180: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e17c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E184u;
    // 0x27e184: 0x0  nop
    ctx->pc = 0x27e184u;
    // NOP
label_27e188:
    // 0x27e188: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27e18c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x27E18Cu;
    {
        const bool branch_taken_0x27e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E18Cu;
        // 0x27e190: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e18c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E194u;
    // 0x27e194: 0x0  nop
    ctx->pc = 0x27e194u;
    // NOP
label_27e198:
    // 0x27e198: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x27e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x27e19c: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x27E19Cu;
    {
        const bool branch_taken_0x27e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E19Cu;
        // 0x27e1a0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e19c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E1A4u;
    // 0x27e1a4: 0x0  nop
    ctx->pc = 0x27e1a4u;
    // NOP
label_27e1a8:
    // 0x27e1a8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x27e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x27e1ac: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x27E1ACu;
    {
        const bool branch_taken_0x27e1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1ACu;
        // 0x27e1b0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1ac) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E1B4u;
    // 0x27e1b4: 0x0  nop
    ctx->pc = 0x27e1b4u;
    // NOP
label_27e1b8:
    // 0x27e1b8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x27e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x27e1bc: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x27E1BCu;
    {
        const bool branch_taken_0x27e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1BCu;
        // 0x27e1c0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1bc) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E1C4u;
    // 0x27e1c4: 0x0  nop
    ctx->pc = 0x27e1c4u;
    // NOP
label_27e1c8:
    // 0x27e1c8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x27e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27e1cc: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x27E1CCu;
    {
        const bool branch_taken_0x27e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1CCu;
        // 0x27e1d0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1cc) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E1D4u;
    // 0x27e1d4: 0x0  nop
    ctx->pc = 0x27e1d4u;
    // NOP
label_27e1d8:
    // 0x27e1d8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x27e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x27e1dc: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x27E1DCu;
    {
        const bool branch_taken_0x27e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1DCu;
        // 0x27e1e0: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1dc) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E1E4u;
    // 0x27e1e4: 0x0  nop
    ctx->pc = 0x27e1e4u;
    // NOP
label_27e1e8:
    // 0x27e1e8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x27E1E8u;
    {
        const bool branch_taken_0x27e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1E8u;
        // 0x27e1ec: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1e8) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E1F0u;
label_27e1f0:
    // 0x27e1f0: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e1f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27E1F4u;
    {
        const bool branch_taken_0x27e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1F4u;
        // 0x27e1f8: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1f4) {
            ctx->pc = 0x27E250u;
            goto label_27e250;
        }
    }
    ctx->pc = 0x27E1FCu;
    // 0x27e1fc: 0x0  nop
    ctx->pc = 0x27e1fcu;
    // NOP
label_27e200:
    // 0x27e200: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e204: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x27e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_27e208:
    // 0x27e208: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27e208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e20c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x27E20Cu;
    {
        const bool branch_taken_0x27e20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e20c) {
            ctx->pc = 0x27E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E20Cu;
            // 0x27e210: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E294u;
            goto label_27e294;
        }
    }
    ctx->pc = 0x27E214u;
    // 0x27e214: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27E214u;
    {
        const bool branch_taken_0x27e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E214u;
        // 0x27e218: 0xa223019b  sb          $v1, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e214) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E21Cu;
    // 0x27e21c: 0x0  nop
    ctx->pc = 0x27e21cu;
    // NOP
label_27e220:
    // 0x27e220: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e224: 0x0  nop
    ctx->pc = 0x27e224u;
    // NOP
    // 0x27e228: 0x0  nop
    ctx->pc = 0x27e228u;
    // NOP
    // 0x27e22c: 0x0  nop
    ctx->pc = 0x27e22cu;
    // NOP
    // 0x27e230: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x27E230u;
    {
        const bool branch_taken_0x27e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E230u;
        // 0x27e234: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e230) {
            ctx->pc = 0x27E208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e208;
        }
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27E238u;
    {
        const bool branch_taken_0x27e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E238u;
        // 0x27e23c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e238) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E240u;
label_27e240:
    // 0x27e240: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27E240u;
    {
        const bool branch_taken_0x27e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E240u;
        // 0x27e244: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e240) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E248u;
label_27e248:
    // 0x27e248: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e24c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27e250:
    // 0x27e250: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e254: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e258: 0xa62002b4  sh          $zero, 0x2B4($s1)
    ctx->pc = 0x27e258u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e25c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27e25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e260: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27e260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e264: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x27E264u;
    {
        const bool branch_taken_0x27e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E264u;
        // 0x27e268: 0xa223019b  sb          $v1, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e264) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E26Cu;
    // 0x27e26c: 0x0  nop
    ctx->pc = 0x27e26cu;
    // NOP
label_27e270:
    // 0x27e270: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e274: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E274u;
    {
        const bool branch_taken_0x27e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E274u;
        // 0x27e278: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e274) {
            ctx->pc = 0x27E288u;
            goto label_27e288;
        }
    }
    ctx->pc = 0x27E27Cu;
    // 0x27e27c: 0x0  nop
    ctx->pc = 0x27e27cu;
    // NOP
label_27e280:
    // 0x27e280: 0x86220080  lh          $v0, 0x80($s1)
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e284: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_27e288:
    // 0x27e288: 0x28424fa4  slti        $v0, $v0, 0x4FA4
    ctx->pc = 0x27e288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20388) ? 1 : 0);
    // 0x27e28c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E28Cu;
    {
        const bool branch_taken_0x27e28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e28c) {
            ctx->pc = 0x27E290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E28Cu;
            // 0x27e290: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E294u;
            goto label_27e294;
        }
    }
    ctx->pc = 0x27E294u;
label_27e294:
    // 0x27e294: 0xa223019b  sb          $v1, 0x19B($s1)
    ctx->pc = 0x27e294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
label_27e298:
    // 0x27e298: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e298u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e29c: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x27E29Cu;
    {
        const bool branch_taken_0x27e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E29Cu;
        // 0x27e2a0: 0xa62002b4  sh          $zero, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e29c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E2A4u;
    // 0x27e2a4: 0x0  nop
    ctx->pc = 0x27e2a4u;
    // NOP
label_27e2a8:
    // 0x27e2a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E2A8u;
    {
        const bool branch_taken_0x27e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2A8u;
        // 0x27e2ac: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2a8) {
            ctx->pc = 0x27E2B4u;
            goto label_27e2b4;
        }
    }
    ctx->pc = 0x27E2B0u;
label_27e2b0:
    // 0x27e2b0: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x27e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_27e2b4:
    // 0x27e2b4: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e2b8: 0xa222019b  sb          $v0, 0x19B($s1)
    ctx->pc = 0x27e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e2bc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x27E2BCu;
    {
        const bool branch_taken_0x27e2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2BCu;
        // 0x27e2c0: 0xa62002b4  sh          $zero, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2bc) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E2C4u;
    // 0x27e2c4: 0x0  nop
    ctx->pc = 0x27e2c4u;
    // NOP
label_27e2c8:
    // 0x27e2c8: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27e2cc: 0x94420044  lhu         $v0, 0x44($v0)
    ctx->pc = 0x27e2ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27e2d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E2D0u;
    {
        const bool branch_taken_0x27e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e2d0) {
            ctx->pc = 0x27E2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E2D0u;
            // 0x27e2d4: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E2E8u;
            goto label_27e2e8;
        }
    }
    ctx->pc = 0x27E2D8u;
    // 0x27e2d8: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x27e2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27e2dc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x27e2e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E2E0u;
    {
        const bool branch_taken_0x27e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2E0u;
        // 0x27e2e4: 0xa62202b2  sh          $v0, 0x2B2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2e0) {
            ctx->pc = 0x27E2FCu;
            goto label_27e2fc;
        }
    }
    ctx->pc = 0x27E2E8u;
label_27e2e8:
    // 0x27e2e8: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x27e2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27e2ec: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x27e2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27e2f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E2F0u;
    {
        const bool branch_taken_0x27e2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e2f0) {
            ctx->pc = 0x27E2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E2F0u;
            // 0x27e2f4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E2F8u;
label_27e2f8:
    // 0x27e2f8: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
label_27e2fc:
    // 0x27e2fc: 0x862202b2  lh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e2fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x27e300: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E300u;
    {
        const bool branch_taken_0x27e300 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E300u;
        // 0x27e304: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e300) {
            ctx->pc = 0x27E314u;
            goto label_27e314;
        }
    }
    ctx->pc = 0x27E308u;
    // 0x27e308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e310: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e310u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
label_27e314:
    // 0x27e314: 0x96220080  lhu         $v0, 0x80($s1)
    ctx->pc = 0x27e314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x27e318: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x27e318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x27e31c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E31Cu;
    {
        const bool branch_taken_0x27e31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E31Cu;
        // 0x27e320: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e31c) {
            ctx->pc = 0x27E330u;
            goto label_27e330;
        }
    }
    ctx->pc = 0x27E324u;
    // 0x27e324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E324u;
    {
        const bool branch_taken_0x27e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E324u;
        // 0x27e328: 0xa622008a  sh          $v0, 0x8A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e324) {
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E32Cu;
    // 0x27e32c: 0x0  nop
    ctx->pc = 0x27e32cu;
    // NOP
label_27e330:
    // 0x27e330: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x27e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x27e334: 0xa622008a  sh          $v0, 0x8A($s1)
    ctx->pc = 0x27e334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 2));
label_27e338:
    // 0x27e338: 0x9622008a  lhu         $v0, 0x8A($s1)
    ctx->pc = 0x27e338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x27e33c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27e340: 0x9625007a  lhu         $a1, 0x7A($s1)
    ctx->pc = 0x27e340u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e344: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E344u;
    {
        const bool branch_taken_0x27e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E344u;
        // 0x27e348: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e344) {
            ctx->pc = 0x27E3B0u;
            goto label_27e3b0;
        }
    }
    ctx->pc = 0x27E34Cu;
    // 0x27e34c: 0x0  nop
    ctx->pc = 0x27e34cu;
    // NOP
label_27e350:
    // 0x27e350: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x27e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x27e354: 0x94420044  lhu         $v0, 0x44($v0)
    ctx->pc = 0x27e354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27e358: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E358u;
    {
        const bool branch_taken_0x27e358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e358) {
            ctx->pc = 0x27E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E358u;
            // 0x27e35c: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E370u;
            goto label_27e370;
        }
    }
    ctx->pc = 0x27E360u;
    // 0x27e360: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x27e360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27e364: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x27e368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E368u;
    {
        const bool branch_taken_0x27e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E368u;
        // 0x27e36c: 0xa62202b2  sh          $v0, 0x2B2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e368) {
            ctx->pc = 0x27E384u;
            goto label_27e384;
        }
    }
    ctx->pc = 0x27E370u;
label_27e370:
    // 0x27e370: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x27e370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27e374: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x27e374u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27e378: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E378u;
    {
        const bool branch_taken_0x27e378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e378) {
            ctx->pc = 0x27E37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E378u;
            // 0x27e37c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E380u;
            goto label_27e380;
        }
    }
    ctx->pc = 0x27E380u;
label_27e380:
    // 0x27e380: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
label_27e384:
    // 0x27e384: 0x862202b2  lh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x27e388: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E388u;
    {
        const bool branch_taken_0x27e388 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E388u;
        // 0x27e38c: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e388) {
            ctx->pc = 0x27E39Cu;
            goto label_27e39c;
        }
    }
    ctx->pc = 0x27E390u;
    // 0x27e390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e398: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x27e398u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
label_27e39c:
    // 0x27e39c: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x27e39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e3a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27e3a4: 0x9625007a  lhu         $a1, 0x7A($s1)
    ctx->pc = 0x27e3a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e3a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27e3a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27e3ac: 0xa622008a  sh          $v0, 0x8A($s1)
    ctx->pc = 0x27e3acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 2));
label_27e3b0:
    // 0x27e3b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e3b4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x27e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27e3b8: 0xa224019b  sb          $a0, 0x19B($s1)
    ctx->pc = 0x27e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 4));
    // 0x27e3bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27e3c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e3c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27e3c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x27e3c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27e3c8:
    // 0x27e3c8: 0x1012  mflo        $v0
    ctx->pc = 0x27e3c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x27e3cc: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x27E3CCu;
    {
        const bool branch_taken_0x27e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3CCu;
        // 0x27e3d0: 0xa62202b4  sh          $v0, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3cc) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E3D4u;
    // 0x27e3d4: 0x0  nop
    ctx->pc = 0x27e3d4u;
    // NOP
label_27e3d8:
    // 0x27e3d8: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27e3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27e3dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27E3DCu;
    {
        const bool branch_taken_0x27e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3DCu;
        // 0x27e3e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3dc) {
            ctx->pc = 0x27E414u;
            goto label_27e414;
        }
    }
    ctx->pc = 0x27E3E4u;
    // 0x27e3e4: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x27e3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x27e3e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27e3ec: 0x9624007a  lhu         $a0, 0x7A($s1)
    ctx->pc = 0x27e3ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e3f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27e3f4: 0xa62302b2  sh          $v1, 0x2B2($s1)
    ctx->pc = 0x27e3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e3f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27e3fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27e400: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27e404: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x27e404u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e408: 0x1012  mflo        $v0
    ctx->pc = 0x27e408u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x27e40c: 0xa62202b4  sh          $v0, 0x2B4($s1)
    ctx->pc = 0x27e40cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e410: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27e414:
    // 0x27e414: 0xa62002a4  sh          $zero, 0x2A4($s1)
    ctx->pc = 0x27e414u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e418: 0xa222019b  sb          $v0, 0x19B($s1)
    ctx->pc = 0x27e418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e41c: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x27e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x27e420: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x27E420u;
    {
        const bool branch_taken_0x27e420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E420u;
        // 0x27e424: 0xa62002a6  sh          $zero, 0x2A6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e420) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E428u;
label_27e428:
    // 0x27e428: 0x8e260314  lw          $a2, 0x314($s1)
    ctx->pc = 0x27e428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27e42c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27e430: 0x96240078  lhu         $a0, 0x78($s1)
    ctx->pc = 0x27e430u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e434: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x27e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27e438: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x27e438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27e43c: 0xae2302f0  sw          $v1, 0x2F0($s1)
    ctx->pc = 0x27e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 3));
    // 0x27e440: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x27e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27e444: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e448: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x27e448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x27e44c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x27e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27e450: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e454: 0xa62302a4  sh          $v1, 0x2A4($s1)
    ctx->pc = 0x27e454u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e458: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x27e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27e45c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x27e45cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x27e460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e468: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x27e468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x27e46c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27e470: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27e470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e474: 0xa62302a6  sh          $v1, 0x2A6($s1)
    ctx->pc = 0x27e474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e478: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x27e478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x27e47c: 0xa225019b  sb          $a1, 0x19B($s1)
    ctx->pc = 0x27e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 5));
    // 0x27e480: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x27e480u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e484: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e488: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x27e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x27e48c: 0xa62002b4  sh          $zero, 0x2B4($s1)
    ctx->pc = 0x27e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e490: 0xa62402aa  sh          $a0, 0x2AA($s1)
    ctx->pc = 0x27e490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e494: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x27E494u;
    {
        const bool branch_taken_0x27e494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E494u;
        // 0x27e498: 0xa62402a8  sh          $a0, 0x2A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e494) {
            ctx->pc = 0x27E4C8u;
            goto label_27e4c8;
        }
    }
    ctx->pc = 0x27E49Cu;
    // 0x27e49c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x27e49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27e4a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27E4A0u;
    {
        const bool branch_taken_0x27e4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4A0u;
        // 0x27e4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4a0) {
            ctx->pc = 0x27E4CCu;
            goto label_27e4cc;
        }
    }
    ctx->pc = 0x27E4A8u;
    // 0x27e4a8: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x27e4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27e4ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E4ACu;
    {
        const bool branch_taken_0x27e4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4ACu;
        // 0x27e4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4ac) {
            ctx->pc = 0x27E4CCu;
            goto label_27e4cc;
        }
    }
    ctx->pc = 0x27E4B4u;
    // 0x27e4b4: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x27e4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27e4b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E4B8u;
    {
        const bool branch_taken_0x27e4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e4b8) {
            ctx->pc = 0x27E4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E4B8u;
            // 0x27e4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E4CCu;
            goto label_27e4cc;
        }
    }
    ctx->pc = 0x27E4C0u;
    // 0x27e4c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E4C0u;
    {
        const bool branch_taken_0x27e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4c0) {
            ctx->pc = 0x27E4CCu;
            goto label_27e4cc;
        }
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e4cc:
    // 0x27e4cc: 0x544000ba  bnel        $v0, $zero, . + 4 + (0xBA << 2)
    ctx->pc = 0x27E4CCu;
    {
        const bool branch_taken_0x27e4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e4cc) {
            ctx->pc = 0x27E4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E4CCu;
            // 0x27e4d0: 0x31033c00  andi        $v1, $t0, 0x3C00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15360);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E7B8u;
            goto label_27e7b8;
        }
    }
    ctx->pc = 0x27E4D4u;
    // 0x27e4d4: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x27e4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x27e4d8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x27E4D8u;
    {
        const bool branch_taken_0x27e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4D8u;
        // 0x27e4dc: 0x9622007a  lhu         $v0, 0x7A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4d8) {
            ctx->pc = 0x27E690u;
            goto label_27e690;
        }
    }
    ctx->pc = 0x27E4E0u;
label_27e4e0:
    // 0x27e4e0: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27E4E0u;
    SET_GPR_U32(ctx, 31, 0x27E4E8u);
    ctx->pc = 0x27E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4E0u;
    // 0x27e4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27E4E0u, 0x27E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4E8u;
label_27e4e8:
    // 0x27e4e8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x27e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e4ec: 0xa62202b6  sh          $v0, 0x2B6($s1)
    ctx->pc = 0x27e4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e4f0: 0xa223019b  sb          $v1, 0x19B($s1)
    ctx->pc = 0x27e4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
label_27e4f4:
    // 0x27e4f4: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e4f8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x27E4F8u;
    {
        const bool branch_taken_0x27e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4F8u;
        // 0x27e4fc: 0xa62002b4  sh          $zero, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4f8) {
            ctx->pc = 0x27E7B0u;
            goto label_27e7b0;
        }
    }
    ctx->pc = 0x27E500u;
label_27e500:
    // 0x27e500: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27E500u;
    SET_GPR_U32(ctx, 31, 0x27E508u);
    ctx->pc = 0x27E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E500u;
    // 0x27e504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27E500u, 0x27E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E508u;
label_27e508:
    // 0x27e508: 0x8e260314  lw          $a2, 0x314($s1)
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27e50c: 0xa62202b6  sh          $v0, 0x2B6($s1)
    ctx->pc = 0x27e50cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e510: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x27e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e514: 0x96240078  lhu         $a0, 0x78($s1)
    ctx->pc = 0x27e514u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e518: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27e51c: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27e520: 0xae2302f0  sw          $v1, 0x2F0($s1)
    ctx->pc = 0x27e520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 3));
    // 0x27e524: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27e528: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e52c: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x27e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x27e530: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27e534: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e538: 0xa62302a4  sh          $v1, 0x2A4($s1)
    ctx->pc = 0x27e538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e53c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x27e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27e540: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x27e540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x27e544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e54c: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x27e54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x27e550: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x27e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27e554: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27e554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e558: 0xa62302a6  sh          $v1, 0x2A6($s1)
    ctx->pc = 0x27e558u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e55c: 0x94c20026  lhu         $v0, 0x26($a2)
    ctx->pc = 0x27e55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x27e560: 0xa225019b  sb          $a1, 0x19B($s1)
    ctx->pc = 0x27e560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 5));
    // 0x27e564: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x27e564u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e568: 0xa62002b6  sh          $zero, 0x2B6($s1)
    ctx->pc = 0x27e568u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e56c: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x27e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x27e570: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e574: 0xa62402aa  sh          $a0, 0x2AA($s1)
    ctx->pc = 0x27e574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e578: 0xa62402a8  sh          $a0, 0x2A8($s1)
    ctx->pc = 0x27e578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e57c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x27E57Cu;
    {
        const bool branch_taken_0x27e57c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E57Cu;
        // 0x27e580: 0xa62002b4  sh          $zero, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e57c) {
            ctx->pc = 0x27E5B0u;
            goto label_27e5b0;
        }
    }
    ctx->pc = 0x27E584u;
    // 0x27e584: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x27e584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27e588: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27E588u;
    {
        const bool branch_taken_0x27e588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E588u;
        // 0x27e58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e588) {
            ctx->pc = 0x27E5B4u;
            goto label_27e5b4;
        }
    }
    ctx->pc = 0x27E590u;
    // 0x27e590: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x27e590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27e594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E594u;
    {
        const bool branch_taken_0x27e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E594u;
        // 0x27e598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e594) {
            ctx->pc = 0x27E5B4u;
            goto label_27e5b4;
        }
    }
    ctx->pc = 0x27E59Cu;
    // 0x27e59c: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x27e59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27e5a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E5A0u;
    {
        const bool branch_taken_0x27e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5a0) {
            ctx->pc = 0x27E5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E5A0u;
            // 0x27e5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E5B4u;
            goto label_27e5b4;
        }
    }
    ctx->pc = 0x27E5A8u;
    // 0x27e5a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E5A8u;
    {
        const bool branch_taken_0x27e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A8u;
        // 0x27e5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5a8) {
            ctx->pc = 0x27E5B4u;
            goto label_27e5b4;
        }
    }
    ctx->pc = 0x27E5B0u;
label_27e5b0:
    // 0x27e5b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e5b4:
    // 0x27e5b4: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x27E5B4u;
    {
        const bool branch_taken_0x27e5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5b4) {
            ctx->pc = 0x27E5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E5B4u;
            // 0x27e5b8: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E5BCu;
    // 0x27e5bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x27E5BCu;
    {
        const bool branch_taken_0x27e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5BCu;
        // 0x27e5c0: 0x94c30032  lhu         $v1, 0x32($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5bc) {
            ctx->pc = 0x27E688u;
            goto label_27e688;
        }
    }
    ctx->pc = 0x27E5C4u;
    // 0x27e5c4: 0x0  nop
    ctx->pc = 0x27e5c4u;
    // NOP
label_27e5c8:
    // 0x27e5c8: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27E5C8u;
    SET_GPR_U32(ctx, 31, 0x27E5D0u);
    ctx->pc = 0x27E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5C8u;
    // 0x27e5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27E5C8u, 0x27E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5D0u;
label_27e5d0:
    // 0x27e5d0: 0x8e260314  lw          $a2, 0x314($s1)
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27e5d4: 0xa62202b6  sh          $v0, 0x2B6($s1)
    ctx->pc = 0x27e5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e5d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e5dc: 0x96240078  lhu         $a0, 0x78($s1)
    ctx->pc = 0x27e5dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e5e0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x27e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x27e5e4: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x27e5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27e5e8: 0xae2302f0  sw          $v1, 0x2F0($s1)
    ctx->pc = 0x27e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 3));
    // 0x27e5ec: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x27e5f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e5f4: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x27e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x27e5f8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x27e5fc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e600: 0xa62302a4  sh          $v1, 0x2A4($s1)
    ctx->pc = 0x27e600u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e604: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x27e608: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x27e60c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e614: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x27e614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x27e618: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x27e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x27e61c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27e61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e620: 0xa62302a6  sh          $v1, 0x2A6($s1)
    ctx->pc = 0x27e620u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e624: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x27e624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x27e628: 0xa225019b  sb          $a1, 0x19B($s1)
    ctx->pc = 0x27e628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 5));
    // 0x27e62c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x27e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e630: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e634: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x27e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x27e638: 0xa62002b4  sh          $zero, 0x2B4($s1)
    ctx->pc = 0x27e638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e63c: 0xa62402aa  sh          $a0, 0x2AA($s1)
    ctx->pc = 0x27e63cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e640: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x27E640u;
    {
        const bool branch_taken_0x27e640 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E640u;
        // 0x27e644: 0xa62402a8  sh          $a0, 0x2A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e640) {
            ctx->pc = 0x27E678u;
            goto label_27e678;
        }
    }
    ctx->pc = 0x27E648u;
    // 0x27e648: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x27e648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27e64c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27E64Cu;
    {
        const bool branch_taken_0x27e64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E64Cu;
        // 0x27e650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e64c) {
            ctx->pc = 0x27E67Cu;
            goto label_27e67c;
        }
    }
    ctx->pc = 0x27E654u;
    // 0x27e654: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x27e654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27e658: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E658u;
    {
        const bool branch_taken_0x27e658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E658u;
        // 0x27e65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e658) {
            ctx->pc = 0x27E67Cu;
            goto label_27e67c;
        }
    }
    ctx->pc = 0x27E660u;
    // 0x27e660: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x27e660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27e664: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E664u;
    {
        const bool branch_taken_0x27e664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e664) {
            ctx->pc = 0x27E668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E664u;
            // 0x27e668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E67Cu;
            goto label_27e67c;
        }
    }
    ctx->pc = 0x27E66Cu;
    // 0x27e66c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E66Cu;
    {
        const bool branch_taken_0x27e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E66Cu;
        // 0x27e670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e66c) {
            ctx->pc = 0x27E67Cu;
            goto label_27e67c;
        }
    }
    ctx->pc = 0x27E674u;
    // 0x27e674: 0x0  nop
    ctx->pc = 0x27e674u;
    // NOP
label_27e678:
    // 0x27e678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e67c:
    // 0x27e67c: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x27E67Cu;
    {
        const bool branch_taken_0x27e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e67c) {
            ctx->pc = 0x27E680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E67Cu;
            // 0x27e680: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E684u;
    // 0x27e684: 0x94c30030  lhu         $v1, 0x30($a2)
    ctx->pc = 0x27e684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_27e688:
    // 0x27e688: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x27e688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e68c: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27e68cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27e690:
    // 0x27e690: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e694: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x27e694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e698: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x27E698u;
    {
        const bool branch_taken_0x27e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E698u;
        // 0x27e69c: 0xa622007a  sh          $v0, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e698) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E6A0u;
label_27e6a0:
    // 0x27e6a0: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27E6A0u;
    SET_GPR_U32(ctx, 31, 0x27E6A8u);
    ctx->pc = 0x27E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6A0u;
    // 0x27e6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27E6A0u, 0x27E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6A8u;
label_27e6a8:
    // 0x27e6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6ac: 0xa62202b6  sh          $v0, 0x2B6($s1)
    ctx->pc = 0x27e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e6b0: 0xc09ebb8  jal         func_27AEE0
    ctx->pc = 0x27E6B0u;
    SET_GPR_U32(ctx, 31, 0x27E6B8u);
    ctx->pc = 0x27E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6B0u;
    // 0x27e6b4: 0x86250300  lh          $a1, 0x300($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AEE0u, 0x27E6B0u, 0x27E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6B8u;
label_27e6b8:
    // 0x27e6b8: 0xc09e984  jal         func_27A610
    ctx->pc = 0x27E6B8u;
    SET_GPR_U32(ctx, 31, 0x27E6C0u);
    ctx->pc = 0x27E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6B8u;
    // 0x27e6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A610u, 0x27E6B8u, 0x27E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6C0u;
label_27e6c0:
    // 0x27e6c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e6c4: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x27E6C4u;
    {
        const bool branch_taken_0x27e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6C4u;
        // 0x27e6c8: 0xa222019b  sb          $v0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6c4) {
            ctx->pc = 0x27E4F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e4f4;
        }
    }
    ctx->pc = 0x27E6CCu;
    // 0x27e6cc: 0x0  nop
    ctx->pc = 0x27e6ccu;
    // NOP
label_27e6d0:
    // 0x27e6d0: 0xc09e9f2  jal         func_27A7C8
    ctx->pc = 0x27E6D0u;
    SET_GPR_U32(ctx, 31, 0x27E6D8u);
    ctx->pc = 0x27E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6D0u;
    // 0x27e6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C8u, 0x27E6D0u, 0x27E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6D8u;
label_27e6d8:
    // 0x27e6d8: 0x8e250314  lw          $a1, 0x314($s1)
    ctx->pc = 0x27e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27e6dc: 0xa62202b6  sh          $v0, 0x2B6($s1)
    ctx->pc = 0x27e6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6e4: 0x96260078  lhu         $a2, 0x78($s1)
    ctx->pc = 0x27e6e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x27e6e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e6ec: 0xae2202f0  sw          $v0, 0x2F0($s1)
    ctx->pc = 0x27e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
    // 0x27e6f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e6f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e6f8: 0xae2202ac  sw          $v0, 0x2AC($s1)
    ctx->pc = 0x27e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 2));
    // 0x27e6fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e700: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x27e700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e704: 0xa62202a4  sh          $v0, 0x2A4($s1)
    ctx->pc = 0x27e704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e708: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e70c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x27e70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27e710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e714: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e718: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x27e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x27e71c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27e720: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27e720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e724: 0xa62302a6  sh          $v1, 0x2A6($s1)
    ctx->pc = 0x27e724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e728: 0x94a2001c  lhu         $v0, 0x1C($a1)
    ctx->pc = 0x27e728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x27e72c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x27e72cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27e730: 0x24c68000  addiu       $a2, $a2, -0x8000
    ctx->pc = 0x27e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x27e734: 0xa62602aa  sh          $a2, 0x2AA($s1)
    ctx->pc = 0x27e734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 6));
    // 0x27e738: 0xc09e984  jal         func_27A610
    ctx->pc = 0x27E738u;
    SET_GPR_U32(ctx, 31, 0x27E740u);
    ctx->pc = 0x27E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E738u;
    // 0x27e73c: 0xa62602a8  sh          $a2, 0x2A8($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A610u, 0x27E738u, 0x27E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E740u;
label_27e740:
    // 0x27e740: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e744: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27e748: 0xa222019b  sb          $v0, 0x19B($s1)
    ctx->pc = 0x27e748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e74c: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x27e74cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e750: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27E750u;
    {
        const bool branch_taken_0x27e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E750u;
        // 0x27e754: 0xa62002b4  sh          $zero, 0x2B4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e750) {
            ctx->pc = 0x27E788u;
            goto label_27e788;
        }
    }
    ctx->pc = 0x27E758u;
    // 0x27e758: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x27e758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27e75c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27E75Cu;
    {
        const bool branch_taken_0x27e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E75Cu;
        // 0x27e760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e75c) {
            ctx->pc = 0x27E78Cu;
            goto label_27e78c;
        }
    }
    ctx->pc = 0x27E764u;
    // 0x27e764: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x27e764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27e768: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E768u;
    {
        const bool branch_taken_0x27e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E768u;
        // 0x27e76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e768) {
            ctx->pc = 0x27E78Cu;
            goto label_27e78c;
        }
    }
    ctx->pc = 0x27E770u;
    // 0x27e770: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x27e770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27e774: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E774u;
    {
        const bool branch_taken_0x27e774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e774) {
            ctx->pc = 0x27E778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E774u;
            // 0x27e778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E78Cu;
            goto label_27e78c;
        }
    }
    ctx->pc = 0x27E77Cu;
    // 0x27e77c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E77Cu;
    {
        const bool branch_taken_0x27e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E77Cu;
        // 0x27e780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e77c) {
            ctx->pc = 0x27E78Cu;
            goto label_27e78c;
        }
    }
    ctx->pc = 0x27E784u;
    // 0x27e784: 0x0  nop
    ctx->pc = 0x27e784u;
    // NOP
label_27e788:
    // 0x27e788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e78c:
    // 0x27e78c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E78Cu;
    {
        const bool branch_taken_0x27e78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E78Cu;
        // 0x27e790: 0x96280300  lhu         $t0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e78c) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E794u;
    // 0x27e794: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x27e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x27e798: 0x9623007a  lhu         $v1, 0x7A($s1)
    ctx->pc = 0x27e798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x27e79c: 0x94440028  lhu         $a0, 0x28($v0)
    ctx->pc = 0x27e79cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x27e7a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e7a4: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x27e7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e7a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E7A8u;
    {
        const bool branch_taken_0x27e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7A8u;
        // 0x27e7ac: 0xa623007a  sh          $v1, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7a8) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E7B0u;
label_27e7b0:
    // 0x27e7b0: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27e7b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27e7b4:
    // 0x27e7b4: 0x31033c00  andi        $v1, $t0, 0x3C00
    ctx->pc = 0x27e7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15360);
label_27e7b8:
    // 0x27e7b8: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x27e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x27e7bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E7BCu;
    {
        const bool branch_taken_0x27e7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7BCu;
        // 0x27e7c0: 0x24021c00  addiu       $v0, $zero, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7bc) {
            ctx->pc = 0x27E7D8u;
            goto label_27e7d8;
        }
    }
    ctx->pc = 0x27E7C4u;
    // 0x27e7c4: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27E7C4u;
    {
        const bool branch_taken_0x27e7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e7c4) {
            ctx->pc = 0x27E7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E7C4u;
            // 0x27e7c8: 0x86220148  lh          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E800u;
            goto label_27e800;
        }
    }
    ctx->pc = 0x27E7CCu;
    // 0x27e7cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27E7CCu;
    {
        const bool branch_taken_0x27e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7CCu;
        // 0x27e7d0: 0x8e230310  lw          $v1, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7cc) {
            ctx->pc = 0x27E82Cu;
            goto label_27e82c;
        }
    }
    ctx->pc = 0x27E7D4u;
    // 0x27e7d4: 0x0  nop
    ctx->pc = 0x27e7d4u;
    // NOP
label_27e7d8:
    // 0x27e7d8: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x27e7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x27e7dc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E7DCu;
    {
        const bool branch_taken_0x27e7dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7DCu;
        // 0x27e7e0: 0x96230148  lhu         $v1, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7dc) {
            ctx->pc = 0x27E7F0u;
            goto label_27e7f0;
        }
    }
    ctx->pc = 0x27E7E4u;
    // 0x27e7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e7e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27E7E8u;
    {
        const bool branch_taken_0x27e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7E8u;
        // 0x27e7ec: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7e8) {
            ctx->pc = 0x27E828u;
            goto label_27e828;
        }
    }
    ctx->pc = 0x27E7F0u;
label_27e7f0:
    // 0x27e7f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e7f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27E7F4u;
    {
        const bool branch_taken_0x27e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7F4u;
        // 0x27e7f8: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7f4) {
            ctx->pc = 0x27E828u;
            goto label_27e828;
        }
    }
    ctx->pc = 0x27E7FCu;
    // 0x27e7fc: 0x0  nop
    ctx->pc = 0x27e7fcu;
    // NOP
label_27e800:
    // 0x27e800: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E800u;
    {
        const bool branch_taken_0x27e800 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E800u;
        // 0x27e804: 0x96230148  lhu         $v1, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e800) {
            ctx->pc = 0x27E810u;
            goto label_27e810;
        }
    }
    ctx->pc = 0x27E808u;
    // 0x27e808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E808u;
    {
        const bool branch_taken_0x27e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E808u;
        // 0x27e80c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e808) {
            ctx->pc = 0x27E814u;
            goto label_27e814;
        }
    }
    ctx->pc = 0x27E810u;
label_27e810:
    // 0x27e810: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27e814:
    // 0x27e814: 0xa6220148  sh          $v0, 0x148($s1)
    ctx->pc = 0x27e814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e81c: 0xc09ea0a  jal         func_27A828
    ctx->pc = 0x27E81Cu;
    SET_GPR_U32(ctx, 31, 0x27E824u);
    ctx->pc = 0x27E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E81Cu;
    // 0x27e820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A828u, 0x27E81Cu, 0x27E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E824u;
label_27e824:
    // 0x27e824: 0x96280300  lhu         $t0, 0x300($s1)
    ctx->pc = 0x27e824u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 768)));
label_27e828:
    // 0x27e828: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_27e82c:
    // 0x27e82c: 0x96220304  lhu         $v0, 0x304($s1)
    ctx->pc = 0x27e82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x27e830: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x27e830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x27e834: 0xa6220158  sh          $v0, 0x158($s1)
    ctx->pc = 0x27e834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e838: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x27e838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x27e83c: 0xa6200304  sh          $zero, 0x304($s1)
    ctx->pc = 0x27e83cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e840: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x27e840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x27e844: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27E844u;
    {
        const bool branch_taken_0x27e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E844u;
        // 0x27e848: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e844) {
            ctx->pc = 0x27E878u;
            goto label_27e878;
        }
    }
    ctx->pc = 0x27E84Cu;
    // 0x27e84c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x27e84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27e850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E850u;
    {
        const bool branch_taken_0x27e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E850u;
        // 0x27e854: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e850) {
            ctx->pc = 0x27E860u;
            goto label_27e860;
        }
    }
    ctx->pc = 0x27E858u;
    // 0x27e858: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E858u;
    {
        const bool branch_taken_0x27e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E858u;
        // 0x27e85c: 0xa2220196  sb          $v0, 0x196($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e858) {
            ctx->pc = 0x27E87Cu;
            goto label_27e87c;
        }
    }
    ctx->pc = 0x27E860u;
label_27e860:
    // 0x27e860: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27e860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E864u;
    {
        const bool branch_taken_0x27e864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E864u;
        // 0x27e868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e864) {
            ctx->pc = 0x27E878u;
            goto label_27e878;
        }
    }
    ctx->pc = 0x27E86Cu;
    // 0x27e86c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E86Cu;
    {
        const bool branch_taken_0x27e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E86Cu;
        // 0x27e870: 0xa2220196  sb          $v0, 0x196($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e86c) {
            ctx->pc = 0x27E87Cu;
            goto label_27e87c;
        }
    }
    ctx->pc = 0x27E874u;
    // 0x27e874: 0x0  nop
    ctx->pc = 0x27e874u;
    // NOP
label_27e878:
    // 0x27e878: 0xa2200196  sb          $zero, 0x196($s1)
    ctx->pc = 0x27e878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 406), (uint8_t)GPR_U32(ctx, 0));
label_27e87c:
    // 0x27e87c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x27e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x27e880: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x27e880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x27e884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E884u;
    {
        const bool branch_taken_0x27e884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E884u;
        // 0x27e888: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e884) {
            ctx->pc = 0x27E898u;
            goto label_27e898;
        }
    }
    ctx->pc = 0x27E88Cu;
    // 0x27e88c: 0x86220156  lh          $v0, 0x156($s1)
    ctx->pc = 0x27e88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 342)));
    // 0x27e890: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E890u;
    {
        const bool branch_taken_0x27e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e890) {
            ctx->pc = 0x27E894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E890u;
            // 0x27e894: 0x922201f7  lbu         $v0, 0x1F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E8A0u;
            goto label_27e8a0;
        }
    }
    ctx->pc = 0x27E898u;
label_27e898:
    // 0x27e898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e89c: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x27e89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
label_27e8a0:
    // 0x27e8a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E8A0u;
    {
        const bool branch_taken_0x27e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8A0u;
        // 0x27e8a4: 0xa22401b4  sb          $a0, 0x1B4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 436), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8a0) {
            ctx->pc = 0x27E8B0u;
            goto label_27e8b0;
        }
    }
    ctx->pc = 0x27E8A8u;
    // 0x27e8a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E8A8u;
    {
        const bool branch_taken_0x27e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8A8u;
        // 0x27e8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8a8) {
            ctx->pc = 0x27E8B4u;
            goto label_27e8b4;
        }
    }
    ctx->pc = 0x27E8B0u;
label_27e8b0:
    // 0x27e8b0: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x27e8b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
label_27e8b4:
    // 0x27e8b4: 0xa622009c  sh          $v0, 0x9C($s1)
    ctx->pc = 0x27e8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e8b8: 0x86230146  lh          $v1, 0x146($s1)
    ctx->pc = 0x27e8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 326)));
    // 0x27e8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e8c0: 0xa62200a4  sh          $v0, 0xA4($s1)
    ctx->pc = 0x27e8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e8c4: 0xa628015a  sh          $t0, 0x15A($s1)
    ctx->pc = 0x27e8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 8));
    // 0x27e8c8: 0xa622009e  sh          $v0, 0x9E($s1)
    ctx->pc = 0x27e8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e8cc: 0xa62000a6  sh          $zero, 0xA6($s1)
    ctx->pc = 0x27e8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e8d0: 0xa6200300  sh          $zero, 0x300($s1)
    ctx->pc = 0x27e8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 768), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e8d4: 0xa220030d  sb          $zero, 0x30D($s1)
    ctx->pc = 0x27e8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e8d8: 0xa220030c  sb          $zero, 0x30C($s1)
    ctx->pc = 0x27e8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e8dc: 0xa220030e  sb          $zero, 0x30E($s1)
    ctx->pc = 0x27e8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e8e0: 0xa220030f  sb          $zero, 0x30F($s1)
    ctx->pc = 0x27e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e8e4: 0xa22001b9  sb          $zero, 0x1B9($s1)
    ctx->pc = 0x27e8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 441), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e8e8: 0xa6200306  sh          $zero, 0x306($s1)
    ctx->pc = 0x27e8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e8ec: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E8ECu;
    {
        const bool branch_taken_0x27e8ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8ECu;
        // 0x27e8f0: 0xa22001b2  sb          $zero, 0x1B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8ec) {
            ctx->pc = 0x27E900u;
            goto label_27e900;
        }
    }
    ctx->pc = 0x27E8F4u;
    // 0x27e8f4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27e8f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E8F8u;
    {
        const bool branch_taken_0x27e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8F8u;
        // 0x27e8fc: 0xa62202fe  sh          $v0, 0x2FE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8f8) {
            ctx->pc = 0x27E904u;
            goto label_27e904;
        }
    }
    ctx->pc = 0x27E900u;
label_27e900:
    // 0x27e900: 0xa62002fe  sh          $zero, 0x2FE($s1)
    ctx->pc = 0x27e900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 0));
label_27e904:
    // 0x27e904: 0xc0803b4  jal         func_200ED0
    ctx->pc = 0x27E904u;
    SET_GPR_U32(ctx, 31, 0x27E90Cu);
    ctx->pc = 0x27E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E904u;
    // 0x27e908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200ED0u, 0x27E904u, 0x27E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E90Cu;
label_27e90c:
    // 0x27e90c: 0x96260096  lhu         $a2, 0x96($s1)
    ctx->pc = 0x27e90cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27e910: 0x9625009e  lhu         $a1, 0x9E($s1)
    ctx->pc = 0x27e910u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
    // 0x27e914: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e918: 0x86240096  lh          $a0, 0x96($s1)
    ctx->pc = 0x27e918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x27e91c: 0x8622009c  lh          $v0, 0x9C($s1)
    ctx->pc = 0x27e91cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x27e920: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x27e920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x27e924: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x27e924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x27e928: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x27e92c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x27e930: 0xa626009a  sh          $a2, 0x9A($s1)
    ctx->pc = 0x27e930u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 6));
    // 0x27e934: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x27e934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x27e938: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27e938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e93c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e940: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x27e940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x27e944: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x27e944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
    // 0x27e948: 0xa62500a0  sh          $a1, 0xA0($s1)
    ctx->pc = 0x27e948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x27e94c: 0x86220146  lh          $v0, 0x146($s1)
    ctx->pc = 0x27e94cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 326)));
    // 0x27e950: 0x8f83aeb4  lw          $v1, -0x514C($gp)
    ctx->pc = 0x27e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946484)));
    // 0x27e954: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x27e954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x27e958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e95c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x27e95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e960: 0xa22701fe  sb          $a3, 0x1FE($s1)
    ctx->pc = 0x27e960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 510), (uint8_t)GPR_U32(ctx, 7));
    // 0x27e964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27e964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27e968: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x27e968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x27e96c: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x27e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x27e970: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x27e970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
label_27e974:
    // 0x27e974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27e974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e978:
    // 0x27e978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27e978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27e97c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27e97cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27e980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27e984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27e984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e988: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x27e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E98Cu;
        // 0x27e990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E994u;
    // 0x27e994: 0x0  nop
    ctx->pc = 0x27e994u;
    // NOP
    ctx->pc = 0x27e998u;
}
