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

// Function: sub_0024C310
// Address: 0x24c310 - 0x24c3a8
void sub_0024C310_0x24c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C310_0x24c310");
#endif

    switch (ctx->pc) {
        case 0x24c38cu: goto label_24c38c;
        default: break;
    }

    ctx->pc = 0x24c310u;

    // 0x24c310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c314: 0x613c3  sra         $v0, $a2, 15
    ctx->pc = 0x24c314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 15));
    // 0x24c318: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c324: 0x63343  sra         $a2, $a2, 13
    ctx->pc = 0x24c324u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 13));
    // 0x24c328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c32c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c330: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x24c330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x24c334: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24c334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c338: 0x8e300068  lw          $s0, 0x68($s1)
    ctx->pc = 0x24c338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x24c33c: 0xc23823  subu        $a3, $a2, $v0
    ctx->pc = 0x24c33cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24c340: 0x71023  negu        $v0, $a3
    ctx->pc = 0x24c340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x24c344: 0x30a8a000  andi        $t0, $a1, 0xA000
    ctx->pc = 0x24c344u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)40960);
    // 0x24c348: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x24C348u;
    {
        const bool branch_taken_0x24c348 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C348u;
        // 0x24c34c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c348) {
            ctx->pc = 0x24C37Cu;
            goto label_24c37c;
        }
    }
    ctx->pc = 0x24C350u;
    // 0x24c350: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x24c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x24c354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c358: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x24c35c: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x24c35cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x24c360: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x24c360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24c364: 0x48380a  movz        $a3, $v0, $t0
    ctx->pc = 0x24c364u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x24c368: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x24c36c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x24c36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24c370: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x24c370u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x24c374: 0x2a030097  slti        $v1, $s0, 0x97
    ctx->pc = 0x24c374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x24c378: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x24c378u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_24c37c:
    // 0x24c37c: 0x51300004  beql        $t1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C37Cu;
    {
        const bool branch_taken_0x24c37c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x24c37c) {
            ctx->pc = 0x24C380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C37Cu;
            // 0x24c380: 0xae300068  sw          $s0, 0x68($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C390u;
            goto label_24c390;
        }
    }
    ctx->pc = 0x24C384u;
    // 0x24c384: 0xc092940  jal         func_24A500
    ctx->pc = 0x24C384u;
    SET_GPR_U32(ctx, 31, 0x24C38Cu);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24C384u, 0x24C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C38Cu;
label_24c38c:
    // 0x24c38c: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x24c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
label_24c390:
    // 0x24c390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C39Cu;
        // 0x24c3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C3A4u;
    // 0x24c3a4: 0x0  nop
    ctx->pc = 0x24c3a4u;
    // NOP
    ctx->pc = 0x24c3a8u;
}
