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

// Function: sub_004D8520
// Address: 0x4d8520 - 0x4d8580
void sub_004D8520_0x4d8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8520_0x4d8520");
#endif

    switch (ctx->pc) {
        case 0x4d854cu: goto label_4d854c;
        default: break;
    }

    ctx->pc = 0x4d8520u;

    // 0x4d8520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d8524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d8528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d8528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d852c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d8530: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d8530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4d8534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d8538: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d8538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d853c: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4D853Cu;
    {
        const bool branch_taken_0x4d853c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d853c) {
            ctx->pc = 0x4D8540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D853Cu;
            // 0x4d8540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8568u;
            goto label_4d8568;
        }
    }
    ctx->pc = 0x4D8544u;
    // 0x4d8544: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D8544u;
    SET_GPR_U32(ctx, 31, 0x4D854Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D8544u, 0x4D854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D854Cu;
label_4d854c:
    // 0x4d854c: 0x2402041b  addiu       $v0, $zero, 0x41B
    ctx->pc = 0x4d854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
    // 0x4d8550: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4d8550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8554: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d8554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d8558: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d8558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d855c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d8560: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d8560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d8564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d8568:
    // 0x4d8568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d856c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d856cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d8570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8574: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4D8574u;
    ctx->pc = 0x4D8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8574u;
    // 0x4d8578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D857Cu;
    // 0x4d857c: 0x0  nop
    ctx->pc = 0x4d857cu;
    // NOP
    ctx->pc = 0x4d8580u;
}
